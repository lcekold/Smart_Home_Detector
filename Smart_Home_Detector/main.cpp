#include "widget.h"

#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;

    QFile qss(":/UiShow.qss");
    if(qss.open(QFile::ReadOnly)){
        qDebug("open qss success");
        QString style=QLatin1String(qss.readAll());  //将字符量转换为QString形式，节省开销
        a.setStyleSheet(style); //设置样式表
        qss.close();
    }else{
        qDebug("Open qss filed");
        return 0;
    }

    w.show();
    return a.exec();
}
