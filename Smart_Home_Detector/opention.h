#ifndef OPENTION_H
#define OPENTION_H

#include <QWidget>

namespace Ui {
class Opention;
}

class Opention : public QWidget
{
    Q_OBJECT

public:
    explicit Opention(QWidget *parent = nullptr);
    ~Opention();

private:
    Ui::Opention *ui;
};

#endif // OPENTION_H
