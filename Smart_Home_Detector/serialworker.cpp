#include "serialworker.h"
#include <QDebug>
#include <QTimer>
#include "myexcption.h"
#include <QMessageBox>
#include <QJsonParseError>
#include <QJsonObject>
#include <QTextCodec>
SerialWorker::SerialWorker(QObject *parent, const QString mPortName,const QString mBaudRate,const QString mParity,
                           const QString mDataBits,const QString mStopBits): QObject(parent),_mPortName(mPortName),
                            _mBaudRate(mBaudRate),_mParity(mParity),_mDataBits(mDataBits),_mStopBits(mStopBits)
{
    connect(&_mSerilPort,&QSerialPort::readyRead,this,&SerialWorker::readData);

    //!串口模式-数据延迟接收-保证数据完整性
    pTimerRecv = new QTimer(this);
    pTimerRecv->setTimerType(Qt::PreciseTimer);
    pTimerRecv->setSingleShot(true); //只触发一次
    connect(pTimerRecv,&QTimer::timeout,this,&SerialWorker::slot_serialport_delay_recv_timeout);


}

bool SerialWorker::start()
{
    //获取串口配置
    // mPortName = ui->CboxSerialPort->currentText();
    // mBaudRate = ui->CboxBaudrate->currentText();
    // mParity = ui->CboxParity->currentText();
    // mDataBits = ui->CboxDataBits->currentText();
    // mStopBits = ui->CboxStopBits->currentText();

    //设置串口
    //端口号
    //mSerilPort.setPortName(mPortName);

    //波特率

    // 设置串口配置
    _mSerilPort.setPortName(_mPortName);


    if("9600" == _mBaudRate)
    {
        _mSerilPort.setBaudRate(QSerialPort::Baud9600);
    }
    else if("19200" == _mBaudRate)
    {
        _mSerilPort.setBaudRate(QSerialPort::Baud19200);
    }
    else
    {
        _mSerilPort.setBaudRate(QSerialPort::Baud115200);
    }

    //校验位
    if("EVEN" == _mParity)
    {
        _mSerilPort.setParity(QSerialPort::EvenParity);
    }
    else if("ODD" == _mParity)
    {
        _mSerilPort.setParity(QSerialPort::OddParity);
    }
    else
    {
        _mSerilPort.setParity(QSerialPort::NoParity);
    }

    //数据位
    if("5" == _mDataBits)
    {
        _mSerilPort.setDataBits(QSerialPort::Data5);
    }
    else if("6" == _mDataBits)
    {
        _mSerilPort.setDataBits(QSerialPort::Data6);
    }
    else if("7" == _mDataBits)
    {
        _mSerilPort.setDataBits(QSerialPort::Data7);
    }
    else
    {
        _mSerilPort.setDataBits(QSerialPort::Data8);
    }

    //停止位
    if("1.5" == _mStopBits)
    {
        _mSerilPort.setStopBits(QSerialPort::OneAndHalfStop);
    }
    else if("2" == _mStopBits)
    {
        _mSerilPort.setStopBits(QSerialPort::TwoStop);
    }
    else
    {
        _mSerilPort.setStopBits(QSerialPort::OneStop);
    }

    //打开串口
    return _mSerilPort.open(QSerialPort::ReadWrite);

}

void SerialWorker::stop()
{
    if(_mSerilPort.isOpen()){
        _mSerilPort.close();
    }
    qDebug()<<"Serial port closed.";
}


void SerialWorker::readData()
{
    // QByteArray recvData = _mSerilPort.readAll();

    // emit ReadData(recvData);

    pTimerRecv->start(50);  //50ms延迟接收
}

double SerialWorker::getNumsFromStr(QString data)
{
    QString num;

    for(int i=0;i<data.length();i++){
        if((data[i]>='0'&&data[i]<='9')||data[i]=='.'){
            num.append(data[i]);
        }
    }
    qDebug()<<"num="<<num<<"  num.toDouble()="<<num.toDouble();
    return num.toDouble();
}



void SerialWorker::SendData(QString data)
{
    _mSerilPort.write(data.toStdString().c_str()); //向串口发送数据
}

void SerialWorker::slot_serialport_delay_recv_timeout()
{
    QByteArray recvData;
    try{
        recvData = _mSerilPort.readAll();
        if(recvData.isEmpty()){
        throw("收到数据为空");
        return;
        }
    }catch(MyExcption &err){
            QMessageBox::warning(NULL,"提示",err.what());
            return;
        }
    emit ReadData(recvData);//读出串口数据，显示在串口读取区
    QTextCodec *codec=QTextCodec::codecForName("GBK");
    //QString receive = QString::fromLocal8Bit(recvData.constData());
    QString receive=codec->toUnicode(recvData);
    //Json格式数据解析 比如：{"温度"："10C","湿度":"20%"}
    // QJsonParseError err;
    // QByteArray arr;
    // arr.append(receive);
    // QJsonDocument doc=QJsonDocument::fromJson(arr,&err);
    // if(err.error!=QJsonParseError::NoError){
    //     qDebug()<<"转换失败";
    //     return;
    // }
    // QJsonObject obj=doc.object();

    // temp=getNumsFromStr(obj.value("Temp").toString());
    // humi=getNumsFromStr(obj.value("Hum").toString());

    qDebug() << receive;

                          /*分割字符串的方法*/
    //自定义数据格式（温度:10-湿度:20或者10℃-20%）
    QStringList list = receive.split("|");//以:分割字符串
    qDebug()<<"Split list"<<list;


    foreach (const QString &item, list) {
        if (item.contains("温度")) {
            temp = getNumsFromStr(item);
        } else if (item.contains("湿度")) {
            humi = getNumsFromStr(item);
        }else if(item.contains("光照度")){
            Light = getNumsFromStr(item);
        }
    }


    emit DataView(temp,humi,Light);
}
