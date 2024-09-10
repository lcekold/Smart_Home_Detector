/********************************************************************************
** Form generated from reading UI file 'uartassist.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UARTASSIST_H
#define UI_UARTASSIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UartAssist
{
public:
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *CboxSerialPort;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *CboxBaudrate;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *CboxParity;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *CboxDataBits;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QComboBox *CboxStopBits;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QPushButton *BtnOpen;
    QPushButton *BtnDetactSerial;
    QPushButton *BtnClearRcv;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_6;
    QTextEdit *TeditRecv;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_7;
    QTextEdit *TeditSend;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *BtnSend;
    QPushButton *BtnClearSend;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_9;
    QTextBrowser *TextBrowser_Time;

    void setupUi(QWidget *UartAssist)
    {
        if (UartAssist->objectName().isEmpty())
            UartAssist->setObjectName(QString::fromUtf8("UartAssist"));
        UartAssist->resize(609, 456);
        horizontalLayout_10 = new QHBoxLayout(UartAssist);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(UartAssist);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        CboxSerialPort = new QComboBox(UartAssist);
        CboxSerialPort->setObjectName(QString::fromUtf8("CboxSerialPort"));

        horizontalLayout->addWidget(CboxSerialPort);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(UartAssist);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        CboxBaudrate = new QComboBox(UartAssist);
        CboxBaudrate->addItem(QString());
        CboxBaudrate->addItem(QString());
        CboxBaudrate->addItem(QString());
        CboxBaudrate->setObjectName(QString::fromUtf8("CboxBaudrate"));

        horizontalLayout_2->addWidget(CboxBaudrate);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(UartAssist);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        CboxParity = new QComboBox(UartAssist);
        CboxParity->addItem(QString());
        CboxParity->addItem(QString());
        CboxParity->addItem(QString());
        CboxParity->setObjectName(QString::fromUtf8("CboxParity"));

        horizontalLayout_3->addWidget(CboxParity);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(UartAssist);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        CboxDataBits = new QComboBox(UartAssist);
        CboxDataBits->addItem(QString());
        CboxDataBits->addItem(QString());
        CboxDataBits->addItem(QString());
        CboxDataBits->addItem(QString());
        CboxDataBits->setObjectName(QString::fromUtf8("CboxDataBits"));

        horizontalLayout_4->addWidget(CboxDataBits);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(UartAssist);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        CboxStopBits = new QComboBox(UartAssist);
        CboxStopBits->addItem(QString());
        CboxStopBits->addItem(QString());
        CboxStopBits->addItem(QString());
        CboxStopBits->setObjectName(QString::fromUtf8("CboxStopBits"));

        horizontalLayout_5->addWidget(CboxStopBits);


        verticalLayout_3->addLayout(horizontalLayout_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_6 = new QLabel(UartAssist);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_2->addWidget(label_6);

        BtnOpen = new QPushButton(UartAssist);
        BtnOpen->setObjectName(QString::fromUtf8("BtnOpen"));

        verticalLayout_2->addWidget(BtnOpen);

        BtnDetactSerial = new QPushButton(UartAssist);
        BtnDetactSerial->setObjectName(QString::fromUtf8("BtnDetactSerial"));

        verticalLayout_2->addWidget(BtnDetactSerial);

        BtnClearRcv = new QPushButton(UartAssist);
        BtnClearRcv->setObjectName(QString::fromUtf8("BtnClearRcv"));

        verticalLayout_2->addWidget(BtnClearRcv);


        verticalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout_10->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(UartAssist);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_6 = new QHBoxLayout(groupBox);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        TeditRecv = new QTextEdit(groupBox);
        TeditRecv->setObjectName(QString::fromUtf8("TeditRecv"));
        QFont font;
        font.setPointSize(7);
        TeditRecv->setFont(font);
        TeditRecv->setAutoFormatting(QTextEdit::AutoNone);
        TeditRecv->setTextInteractionFlags(Qt::TextEditorInteraction);

        horizontalLayout_6->addWidget(TeditRecv);


        verticalLayout->addWidget(groupBox);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        groupBox_2 = new QGroupBox(UartAssist);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_7 = new QHBoxLayout(groupBox_2);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        TeditSend = new QTextEdit(groupBox_2);
        TeditSend->setObjectName(QString::fromUtf8("TeditSend"));

        horizontalLayout_7->addWidget(TeditSend);


        verticalLayout->addWidget(groupBox_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        BtnSend = new QPushButton(UartAssist);
        BtnSend->setObjectName(QString::fromUtf8("BtnSend"));

        horizontalLayout_8->addWidget(BtnSend);

        BtnClearSend = new QPushButton(UartAssist);
        BtnClearSend->setObjectName(QString::fromUtf8("BtnClearSend"));

        horizontalLayout_8->addWidget(BtnClearSend);


        verticalLayout->addLayout(horizontalLayout_8);

        groupBox_3 = new QGroupBox(UartAssist);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_9 = new QHBoxLayout(groupBox_3);
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        TextBrowser_Time = new QTextBrowser(groupBox_3);
        TextBrowser_Time->setObjectName(QString::fromUtf8("TextBrowser_Time"));
        TextBrowser_Time->setMinimumSize(QSize(0, 30));
        TextBrowser_Time->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_9->addWidget(TextBrowser_Time);


        verticalLayout->addWidget(groupBox_3);

        verticalLayout->setStretch(0, 15);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 1);
        verticalLayout->setStretch(4, 1);

        horizontalLayout_10->addLayout(verticalLayout);


        retranslateUi(UartAssist);

        QMetaObject::connectSlotsByName(UartAssist);
    } // setupUi

    void retranslateUi(QWidget *UartAssist)
    {
        UartAssist->setWindowTitle(QCoreApplication::translate("UartAssist", "Form", nullptr));
        label->setText(QCoreApplication::translate("UartAssist", "\344\270\262\345\217\243\345\217\267:", nullptr));
        label_2->setText(QCoreApplication::translate("UartAssist", "\346\263\242\347\211\271\347\216\207\357\274\232", nullptr));
        CboxBaudrate->setItemText(0, QCoreApplication::translate("UartAssist", "115200", nullptr));
        CboxBaudrate->setItemText(1, QCoreApplication::translate("UartAssist", "9600", nullptr));
        CboxBaudrate->setItemText(2, QCoreApplication::translate("UartAssist", "19200", nullptr));

        label_3->setText(QCoreApplication::translate("UartAssist", "\346\240\241\351\252\214\344\275\215\357\274\232", nullptr));
        CboxParity->setItemText(0, QCoreApplication::translate("UartAssist", "NONE", nullptr));
        CboxParity->setItemText(1, QCoreApplication::translate("UartAssist", "ODD", nullptr));
        CboxParity->setItemText(2, QCoreApplication::translate("UartAssist", "EVEN", nullptr));

        label_4->setText(QCoreApplication::translate("UartAssist", "\346\225\260\346\215\256\344\275\215\357\274\232", nullptr));
        CboxDataBits->setItemText(0, QCoreApplication::translate("UartAssist", "8", nullptr));
        CboxDataBits->setItemText(1, QCoreApplication::translate("UartAssist", "5", nullptr));
        CboxDataBits->setItemText(2, QCoreApplication::translate("UartAssist", "6", nullptr));
        CboxDataBits->setItemText(3, QCoreApplication::translate("UartAssist", "7", nullptr));

        label_5->setText(QCoreApplication::translate("UartAssist", "\345\201\234\346\255\242\344\275\215\357\274\232", nullptr));
        CboxStopBits->setItemText(0, QCoreApplication::translate("UartAssist", "1", nullptr));
        CboxStopBits->setItemText(1, QCoreApplication::translate("UartAssist", "1.5", nullptr));
        CboxStopBits->setItemText(2, QCoreApplication::translate("UartAssist", "2", nullptr));

        label_6->setText(QCoreApplication::translate("UartAssist", "\344\270\262\345\217\243\346\223\215\344\275\234\357\274\232", nullptr));
        BtnOpen->setText(QCoreApplication::translate("UartAssist", "\346\211\223\345\274\200", nullptr));
        BtnDetactSerial->setText(QCoreApplication::translate("UartAssist", "\346\211\253\346\217\217\344\270\262\345\217\243", nullptr));
        BtnClearRcv->setText(QCoreApplication::translate("UartAssist", "\346\270\205\351\231\244\346\216\245\346\224\266\345\214\272", nullptr));
        groupBox->setTitle(QCoreApplication::translate("UartAssist", "\346\225\260\346\215\256\346\216\245\346\224\266\345\214\272", nullptr));
        TeditRecv->setDocumentTitle(QCoreApplication::translate("UartAssist", "\350\276\223\345\207\272\345\214\272", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("UartAssist", "\346\225\260\346\215\256\345\217\221\351\200\201\345\214\272", nullptr));
        BtnSend->setText(QCoreApplication::translate("UartAssist", "\345\217\221\351\200\201", nullptr));
        BtnClearSend->setText(QCoreApplication::translate("UartAssist", "\346\270\205\351\231\244\345\217\221\351\200\201", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("UartAssist", "\347\263\273\347\273\237\346\227\266\351\227\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UartAssist: public Ui_UartAssist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UARTASSIST_H
