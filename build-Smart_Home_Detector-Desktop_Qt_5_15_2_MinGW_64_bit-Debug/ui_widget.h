/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <dataview.h>
#include "opention.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *UartAssiant;
    QVBoxLayout *verticalLayout_3;
    DataView *ShowDataWidget;
    QSpacerItem *verticalSpacer_2;
    Opention *widget_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(873, 639);
        horizontalLayout = new QHBoxLayout(Widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        UartAssiant = new QVBoxLayout();
        UartAssiant->setObjectName(QString::fromUtf8("UartAssiant"));

        horizontalLayout->addLayout(UartAssiant);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        ShowDataWidget = new DataView(Widget);
        ShowDataWidget->setObjectName(QString::fromUtf8("ShowDataWidget"));

        verticalLayout_3->addWidget(ShowDataWidget);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        widget_2 = new Opention(Widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));

        verticalLayout_3->addWidget(widget_2);

        verticalLayout_3->setStretch(0, 2);
        verticalLayout_3->setStretch(2, 2);

        horizontalLayout->addLayout(verticalLayout_3);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 1);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
