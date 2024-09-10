#include "uartassist.h"
#include "ui_uartassist.h"
#include <QSerialPortInfo>
#include <QDebug>
#include <QThread>
#include <QTextCodec>
#include <QDateTime>
#include <QTimer>
UartAssist::UartAssist(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::UartAssist)
{
    ui->setupUi(this);

    //进行时间显示
    QTimer *currentTime = new QTimer(this);
    connect(currentTime,&QTimer::timeout,this,&UartAssist::timerUpdate);
    currentTime->start(1000);//每秒更新时间


    //To do user's work
    mIsOpen = false;
    ui->BtnSend->setEnabled(mIsOpen);

    //智能识别当前系统的有效串口号
    QList<QSerialPortInfo> serialPortInfo = QSerialPortInfo::availablePorts();
    int count = serialPortInfo.count();
    for(int i = 0; i < count; i++)
    {
        ui->CboxSerialPort->addItem(serialPortInfo.at(i).portName());
    }

    //connect(&mSerilPort, SIGNAL(readyRead()), this, SLOT(on_SerialPort_readyRead()));
}

UartAssist::~UartAssist()
{
    delete ui;
}

void UartAssist::on_BtnOpen_clicked()
{
    if(true == mIsOpen)
    {
        //当前串口助手已经打开了一个串口，这时应该要执行关闭的动作
        serialThread->quit();
        serialThread->wait();
        delete serialThread;
        serialThread=nullptr;
        //mSerilPort.close();
        ui->BtnOpen->setText("打开");
        mIsOpen = false;

        ui->BtnSend->setEnabled(mIsOpen);
        ui->CboxSerialPort->setEnabled(true);
        ui->CboxBaudrate->setEnabled(true);
        ui->CboxParity->setEnabled(true);
        ui->CboxDataBits->setEnabled(true);
        ui->CboxStopBits->setEnabled(true);
    }
    else
    {
        //当前串口助手没有打开串口，这时要执行打开串口的动作
        if(true == getSerialPortConfig())
        {
            mIsOpen = true;
            ui->BtnOpen->setText("关闭");
            qDebug() << "成功打开串口" << mPortName;

                ui->BtnSend->setEnabled(mIsOpen);
            ui->CboxSerialPort->setEnabled(false);
            ui->CboxBaudrate->setEnabled(false);
            ui->CboxParity->setEnabled(false);
            ui->CboxDataBits->setEnabled(false);
            ui->CboxStopBits->setEnabled(false);
        }
        //        else
        //        {
        //            mIsOpen = false;
        //        }
    }
}

bool UartAssist::getSerialPortConfig()
{
    //获取串口配置
    mPortName = ui->CboxSerialPort->currentText();
    mBaudRate = ui->CboxBaudrate->currentText();
    mParity = ui->CboxParity->currentText();
    mDataBits = ui->CboxDataBits->currentText();
    mStopBits = ui->CboxStopBits->currentText();

    //设置串口
    //端口号
    mSerilPort.setPortName(mPortName);

    serialwork= new SerialWorker(this,mPortName,mBaudRate,mParity,mDataBits,mStopBits);
    serialThread=new QThread(); //创建线程用来执行串口操作

    serialwork->moveToThread(serialThread);

    connect(serialThread,&QThread::started,serialwork,&SerialWorker::start);
    connect(serialThread,&QThread::finished,serialwork,&SerialWorker::stop);
    connect(this,&UartAssist::StartSend,serialwork,&SerialWorker::SendData); //连接发送数据
    connect(serialwork,&SerialWorker::ReadData,this,&UartAssist::on_SerialPort_readyRead);

    connect(serialwork,&SerialWorker::DataView,this,&UartAssist::UartAssistShowData);

    serialThread->start();
    return serialThread->isRunning();
}


void UartAssist::timerUpdate()
{
    QDateTime time=QDateTime::currentDateTime();
    QString str=time.toString("yyyy-MM-dd hh:mm:ss dddd"); //设置日期显示格式
    ui->TextBrowser_Time->setTextColor(Qt::blue);
    ui->TextBrowser_Time->setText(str);
}


void UartAssist::on_BtnSend_clicked()
{
    if(true==mIsOpen)
    {
        QString data=ui->TeditSend->toPlainText().toStdString().c_str();
        emit StartSend(data);
    }
}

// void UartAssist::on_SerialPort_readyRead(QString data)
// {
//     if(true == mIsOpen)
//     {
//         QTextCodec *codec = QTextCodec::codecForName("GBK");

//         //将接收到的树从GB18030编码转换为QString
//         //QString string=codec->fromUnicode(data).data();
//         QString decodedData=codec->toUnicode(data.toUtf8().data());
//         ui->TeditRecv->append(decodedData);
//     }
// }


void UartAssist::on_SerialPort_readyRead(QByteArray data)
{
    if(true == mIsOpen)
    {
        QTextCodec *codec = QTextCodec::codecForName("GBK");

        //将接收到的树从GB18030编码转换为QString
        //QString string=codec->fromUnicode(data).data();
        QString decodedData=codec->toUnicode(data);
        ui->TeditRecv->append(decodedData);
    }
}


void UartAssist::on_TeditRecv_textChanged()
{
    ui->TeditRecv->moveCursor(QTextCursor::End);
}


void UartAssist::on_BtnDetactSerial_clicked()
{
    ui->TeditRecv->moveCursor(QTextCursor::End);
    QList<QSerialPortInfo> serialPortInfo = QSerialPortInfo::availablePorts();
    int count = serialPortInfo.count();
    ui->CboxSerialPort->clear();
    for(int i = 0; i < count; i++)
    {
        ui->CboxSerialPort->addItem(serialPortInfo.at(i).portName());
    }
}


void UartAssist::on_BtnClearRcv_clicked()
{
    ui->TeditRecv->clear();
}


void UartAssist::on_BtnClearSend_clicked()
{
    ui->TeditSend->clear();
}

void UartAssist::UartAssistShowData(double Temp,double Humi,double Light)
{
    emit ToWidgetShowData(Temp,Humi,Light);
}

