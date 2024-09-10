/********************************************************************************
** Form generated from reading UI file 'dataview.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAVIEW_H
#define UI_DATAVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataView
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLCDNumber *lcdTemp;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLCDNumber *lcdHuim;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLCDNumber *lcdLight;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *DataView)
    {
        if (DataView->objectName().isEmpty())
            DataView->setObjectName(QString::fromUtf8("DataView"));
        DataView->resize(212, 263);
        verticalLayout_2 = new QVBoxLayout(DataView);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(DataView);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lcdTemp = new QLCDNumber(groupBox);
        lcdTemp->setObjectName(QString::fromUtf8("lcdTemp"));
        lcdTemp->setSmallDecimalPoint(false);
        lcdTemp->setDigitCount(5);
        lcdTemp->setProperty("value", QVariant(0.000000000000000));
        lcdTemp->setProperty("intValue", QVariant(0));

        horizontalLayout->addWidget(lcdTemp);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lcdHuim = new QLCDNumber(groupBox);
        lcdHuim->setObjectName(QString::fromUtf8("lcdHuim"));
        lcdHuim->setSmallDecimalPoint(false);

        horizontalLayout_2->addWidget(lcdHuim);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        lcdLight = new QLCDNumber(groupBox);
        lcdLight->setObjectName(QString::fromUtf8("lcdLight"));

        horizontalLayout_4->addWidget(lcdLight);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addWidget(groupBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton = new QPushButton(DataView);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(DataView);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);


        verticalLayout_2->addLayout(horizontalLayout_3);


        retranslateUi(DataView);

        QMetaObject::connectSlotsByName(DataView);
    } // setupUi

    void retranslateUi(QWidget *DataView)
    {
        DataView->setWindowTitle(QCoreApplication::translate("DataView", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DataView", "\346\210\277\351\227\264\346\225\260\346\215\256:", nullptr));
        label->setText(QCoreApplication::translate("DataView", "\346\270\251\345\272\246\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("DataView", "\346\271\277\345\272\246\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("DataView", "\345\205\211\347\205\247\345\272\246:", nullptr));
        pushButton->setText(QCoreApplication::translate("DataView", "\345\273\272\347\253\213\350\277\236\346\216\245", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DataView", "\345\205\263\351\227\255\350\277\236\346\216\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataView: public Ui_DataView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAVIEW_H
