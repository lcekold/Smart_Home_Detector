#ifndef SERIALWORKER_H
#define SERIALWORKER_H

#include <QObject>
#include <QSerialPort>
#include <QTimer>
class SerialWorker : public QObject
{
    Q_OBJECT
public:
    explicit SerialWorker(QObject *parent,const QString mPortName,const QString mBaudRate
                          ,const QString mParity,const QString mDataBits,const QString mStopBits);

public slots:
    bool start();

    void stop();
    void readData(); //接收数据槽函数

   // void writeData(const QByteArray &data);
private:

    bool mIsOpen;
    QSerialPort _mSerilPort;
    QString _mPortName;
    QString _mBaudRate;
    QString _mParity;
    QString _mDataBits;
    QString _mStopBits;

    QTimer *pTimerRecv; //延时接收串口数据

    double temp=0; //温度数据
    double humi=0;  //湿度数据
    double Light=0;  //光照度数据

private:
    double getNumsFromStr(QString data);
public slots:
    //void OpenSerialWorker(); //点击按钮后触发该槽函数，使得串口打开
    void SendData(QString data); //发送数据槽函数

    void slot_serialport_delay_recv_timeout(); //延时接收数据
signals:
    void ReadData(QByteArray data);

    void DataView(double temp,double humi,double Light);
};

#endif // SERIALWORKER_H
