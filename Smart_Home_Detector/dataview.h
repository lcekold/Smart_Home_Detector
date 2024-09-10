#ifndef DATAVIEW_H
#define DATAVIEW_H

#include <QWidget>

namespace Ui {
class DataView;
}

class DataView : public QWidget
{
    Q_OBJECT

public:
    explicit DataView(QWidget *parent = nullptr);
    ~DataView();

private:
    Ui::DataView *ui;

public slots:
    void DataShowView(double temp,double humi,double Light);
};

#endif // DATAVIEW_H
