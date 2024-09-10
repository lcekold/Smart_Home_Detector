#include "dataview.h"
#include "ui_dataview.h"

DataView::DataView(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DataView)
{
    ui->setupUi(this);
}

DataView::~DataView()
{
    delete ui;
}

//将数据显示在组件中
void DataView::DataShowView(double temp,double humi,double Light)
{

    ui->lcdTemp->display(temp);
    ui->lcdHuim->display(humi);
    ui->lcdLight->display(Light);
}
