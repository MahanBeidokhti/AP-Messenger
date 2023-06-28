/********************************************************************************
** Form generated from reading UI file 'sendmessagechannel_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDMESSAGECHANNEL_DIALOG_H
#define UI_SENDMESSAGECHANNEL_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_sendmessagechannel_Dialog
{
public:
    QGroupBox *channelname_groupBox;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *channelname_lineEdit;
    QPushButton *back_pushButton;
    QPushButton *confirm_pushButton;
    QGroupBox *chat_groupBox;
    QGridLayout *gridLayout;
    QPushButton *back_chat_pushButton;
    QLineEdit *send_lineEdit;
    QPushButton *send_pushButton;
    QListView *massege_listView;
    QHBoxLayout *horizontalLayout_2;
    QLabel *name_label;
    QLineEdit *recieved_channelname_lineEdit;

    void setupUi(QDialog *sendmessagechannel_Dialog)
    {
        if (sendmessagechannel_Dialog->objectName().isEmpty())
            sendmessagechannel_Dialog->setObjectName(QString::fromUtf8("sendmessagechannel_Dialog"));
        sendmessagechannel_Dialog->resize(1140, 937);
        sendmessagechannel_Dialog->setStyleSheet(QString::fromUtf8("background-image: url(:/Source/@metawalls.jpg);"));
        channelname_groupBox = new QGroupBox(sendmessagechannel_Dialog);
        channelname_groupBox->setObjectName(QString::fromUtf8("channelname_groupBox"));
        channelname_groupBox->setGeometry(QRect(430, 190, 311, 191));
        channelname_groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(16, 16, 16);"));
        formLayout = new QFormLayout(channelname_groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(channelname_groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        channelname_lineEdit = new QLineEdit(channelname_groupBox);
        channelname_lineEdit->setObjectName(QString::fromUtf8("channelname_lineEdit"));
        QFont font;
        font.setPointSize(13);
        channelname_lineEdit->setFont(font);

        horizontalLayout->addWidget(channelname_lineEdit);


        formLayout->setLayout(0, QFormLayout::SpanningRole, horizontalLayout);

        back_pushButton = new QPushButton(channelname_groupBox);
        back_pushButton->setObjectName(QString::fromUtf8("back_pushButton"));

        formLayout->setWidget(1, QFormLayout::LabelRole, back_pushButton);

        confirm_pushButton = new QPushButton(channelname_groupBox);
        confirm_pushButton->setObjectName(QString::fromUtf8("confirm_pushButton"));

        formLayout->setWidget(1, QFormLayout::FieldRole, confirm_pushButton);

        chat_groupBox = new QGroupBox(sendmessagechannel_Dialog);
        chat_groupBox->setObjectName(QString::fromUtf8("chat_groupBox"));
        chat_groupBox->setGeometry(QRect(310, 110, 551, 411));
        chat_groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(7, 7, 7);"));
        gridLayout = new QGridLayout(chat_groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        back_chat_pushButton = new QPushButton(chat_groupBox);
        back_chat_pushButton->setObjectName(QString::fromUtf8("back_chat_pushButton"));
        QFont font1;
        font1.setPointSize(12);
        back_chat_pushButton->setFont(font1);

        gridLayout->addWidget(back_chat_pushButton, 2, 1, 1, 1);

        send_lineEdit = new QLineEdit(chat_groupBox);
        send_lineEdit->setObjectName(QString::fromUtf8("send_lineEdit"));

        gridLayout->addWidget(send_lineEdit, 1, 1, 1, 2);

        send_pushButton = new QPushButton(chat_groupBox);
        send_pushButton->setObjectName(QString::fromUtf8("send_pushButton"));
        send_pushButton->setFont(font1);

        gridLayout->addWidget(send_pushButton, 2, 2, 1, 1);

        massege_listView = new QListView(chat_groupBox);
        massege_listView->setObjectName(QString::fromUtf8("massege_listView"));

        gridLayout->addWidget(massege_listView, 0, 1, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        name_label = new QLabel(chat_groupBox);
        name_label->setObjectName(QString::fromUtf8("name_label"));
        QFont font2;
        font2.setPointSize(8);
        name_label->setFont(font2);

        horizontalLayout_2->addWidget(name_label);

        recieved_channelname_lineEdit = new QLineEdit(chat_groupBox);
        recieved_channelname_lineEdit->setObjectName(QString::fromUtf8("recieved_channelname_lineEdit"));
        recieved_channelname_lineEdit->setFont(font2);

        horizontalLayout_2->addWidget(recieved_channelname_lineEdit);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        retranslateUi(sendmessagechannel_Dialog);

        QMetaObject::connectSlotsByName(sendmessagechannel_Dialog);
    } // setupUi

    void retranslateUi(QDialog *sendmessagechannel_Dialog)
    {
        sendmessagechannel_Dialog->setWindowTitle(QCoreApplication::translate("sendmessagechannel_Dialog", "Dialog", nullptr));
        channelname_groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("sendmessagechannel_Dialog", "\330\262channelname", nullptr));
        channelname_lineEdit->setText(QString());
        back_pushButton->setText(QCoreApplication::translate("sendmessagechannel_Dialog", "back", nullptr));
        confirm_pushButton->setText(QCoreApplication::translate("sendmessagechannel_Dialog", "confirm", nullptr));
        chat_groupBox->setTitle(QString());
        back_chat_pushButton->setText(QCoreApplication::translate("sendmessagechannel_Dialog", "back", nullptr));
        send_lineEdit->setText(QString());
        send_pushButton->setText(QCoreApplication::translate("sendmessagechannel_Dialog", "send", nullptr));
        name_label->setText(QCoreApplication::translate("sendmessagechannel_Dialog", "name :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sendmessagechannel_Dialog: public Ui_sendmessagechannel_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDMESSAGECHANNEL_DIALOG_H
