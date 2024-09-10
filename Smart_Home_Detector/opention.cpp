#include "opention.h"
#include "ui_opention.h"

Opention::Opention(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Opention)
{
    ui->setupUi(this);
}

Opention::~Opention()
{
    delete ui;
}
