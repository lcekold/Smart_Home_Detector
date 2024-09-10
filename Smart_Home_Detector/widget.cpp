#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->UartAssiant->addWidget(uartassist);
    this->setWindowTitle("智能家居助手");
    connect(uartassist, &UartAssist::ToWidgetShowData,ui->ShowDataWidget, &DataView::DataShowView);
}

Widget::~Widget()
{
    delete ui;
}
