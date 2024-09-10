#ifndef UARTASSIST_H
#define UARTASSIST_H

#include <QWidget>
#include <QSerialPort>
#include "serialworker.h"
#include <QThread>

namespace Ui {
class UartAssist;
}

class UartAssist : public QWidget
{
    Q_OBJECT

public:
    explicit UartAssist(QWidget *parent = nullptr);
    ~UartAssist();

private slots:
    void on_BtnOpen_clicked();

    void on_BtnSend_clicked();

    void on_SerialPort_readyRead(QByteArray data);

    void on_TeditRecv_textChanged();

    void on_BtnDetactSerial_clicked();

    void on_BtnClearRcv_clicked();

    void on_BtnClearSend_clicked();


    void UartAssistShowData(double Temp,double Humi,double Light);  //中转一下数据
private:
    Ui::UartAssist *ui;

    bool getSerialPortConfig();

    bool mIsOpen;
    QSerialPort mSerilPort;
    QString mPortName;
    QString mBaudRate;
    QString mParity;
    QString mDataBits;
    QString mStopBits;

    SerialWorker *serialwork;
    QThread *serialThread;

private:
    void timerUpdate(void);  //设置日期函数
signals:
    void OpenSerior(); //打开串口的信号
    void StartSend(QString); //开始发送串口数据的信号

    void ToWidgetShowData(double,double,double); //将数据发送到widget中的信号
};

#endif // UARTASSIST_H
