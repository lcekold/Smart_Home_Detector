#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "uartassist.h"
#include <QThread>


QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;

    UartAssist *uartassist=new UartAssist(); //创建左侧串口选项
    std::shared_ptr<QThread> _thread_uartAssist; //创建一个智能指针用于处理设置串口和打开串口的工作
};
#endif // WIDGET_H
