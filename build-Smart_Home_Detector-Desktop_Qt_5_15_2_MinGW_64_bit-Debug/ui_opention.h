/********************************************************************************
** Form generated from reading UI file 'opention.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENTION_H
#define UI_OPENTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Opention
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFormLayout *formLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;

    void setupUi(QWidget *Opention)
    {
        if (Opention->objectName().isEmpty())
            Opention->setObjectName(QString::fromUtf8("Opention"));
        Opention->resize(318, 356);
        verticalLayout_2 = new QVBoxLayout(Opention);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Opention);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        pushButton = new QPushButton(Opention);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        formLayout->setWidget(0, QFormLayout::LabelRole, pushButton);

        pushButton_3 = new QPushButton(Opention);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        formLayout->setWidget(0, QFormLayout::FieldRole, pushButton_3);

        pushButton_2 = new QPushButton(Opention);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, pushButton_2);

        pushButton_4 = new QPushButton(Opention);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        formLayout->setWidget(1, QFormLayout::FieldRole, pushButton_4);


        verticalLayout->addLayout(formLayout);

        verticalLayout->setStretch(1, 2);

        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Opention);

        QMetaObject::connectSlotsByName(Opention);
    } // setupUi

    void retranslateUi(QWidget *Opention)
    {
        Opention->setWindowTitle(QCoreApplication::translate("Opention", "Form", nullptr));
        label->setText(QCoreApplication::translate("Opention", "\351\234\200\350\246\201\346\211\247\350\241\214\347\232\204\346\223\215\344\275\234\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("Opention", "\345\274\200\347\201\257", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Opention", "\345\274\200\351\227\250", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Opention", "\346\211\223\345\274\200\347\252\227\345\270\230", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Opention", "\345\274\200\345\220\257\350\255\246\346\212\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Opention: public Ui_Opention {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENTION_H
