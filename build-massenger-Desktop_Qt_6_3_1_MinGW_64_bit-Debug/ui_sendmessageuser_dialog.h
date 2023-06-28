/********************************************************************************
** Form generated from reading UI file 'sendmessageuser_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDMESSAGEUSER_DIALOG_H
#define UI_SENDMESSAGEUSER_DIALOG_H

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

class Ui_sendmessageuser_Dialog
{
public:
    QGroupBox *username_groupBox;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *username_lineEdit;
    QPushButton *back_pushButton;
    QPushButton *confirm_pushButton;
    QGroupBox *chat_groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *name_label;
    QLineEdit *recieved_username_lineEdit;
    QListView *massege_listView;
    QLineEdit *send_lineEdit;
    QPushButton *pushButton;
    QPushButton *send_pushButton;

    void setupUi(QDialog *sendmessageuser_Dialog)
    {
        if (sendmessageuser_Dialog->objectName().isEmpty())
            sendmessageuser_Dialog->setObjectName(QString::fromUtf8("sendmessageuser_Dialog"));
        sendmessageuser_Dialog->resize(1177, 760);
        QFont font;
        font.setPointSize(12);
        sendmessageuser_Dialog->setFont(font);
        username_groupBox = new QGroupBox(sendmessageuser_Dialog);
        username_groupBox->setObjectName(QString::fromUtf8("username_groupBox"));
        username_groupBox->setGeometry(QRect(380, 190, 311, 221));
        formLayout = new QFormLayout(username_groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(username_groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        username_lineEdit = new QLineEdit(username_groupBox);
        username_lineEdit->setObjectName(QString::fromUtf8("username_lineEdit"));
        QFont font1;
        font1.setPointSize(13);
        username_lineEdit->setFont(font1);

        horizontalLayout->addWidget(username_lineEdit);


        formLayout->setLayout(0, QFormLayout::SpanningRole, horizontalLayout);

        back_pushButton = new QPushButton(username_groupBox);
        back_pushButton->setObjectName(QString::fromUtf8("back_pushButton"));

        formLayout->setWidget(1, QFormLayout::LabelRole, back_pushButton);

        confirm_pushButton = new QPushButton(username_groupBox);
        confirm_pushButton->setObjectName(QString::fromUtf8("confirm_pushButton"));

        formLayout->setWidget(1, QFormLayout::FieldRole, confirm_pushButton);

        chat_groupBox = new QGroupBox(sendmessageuser_Dialog);
        chat_groupBox->setObjectName(QString::fromUtf8("chat_groupBox"));
        chat_groupBox->setGeometry(QRect(320, 120, 447, 341));
        gridLayout = new QGridLayout(chat_groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        name_label = new QLabel(chat_groupBox);
        name_label->setObjectName(QString::fromUtf8("name_label"));
        QFont font2;
        font2.setPointSize(8);
        name_label->setFont(font2);

        horizontalLayout_2->addWidget(name_label);

        recieved_username_lineEdit = new QLineEdit(chat_groupBox);
        recieved_username_lineEdit->setObjectName(QString::fromUtf8("recieved_username_lineEdit"));
        recieved_username_lineEdit->setFont(font2);

        horizontalLayout_2->addWidget(recieved_username_lineEdit);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        massege_listView = new QListView(chat_groupBox);
        massege_listView->setObjectName(QString::fromUtf8("massege_listView"));

        gridLayout->addWidget(massege_listView, 0, 1, 1, 2);

        send_lineEdit = new QLineEdit(chat_groupBox);
        send_lineEdit->setObjectName(QString::fromUtf8("send_lineEdit"));

        gridLayout->addWidget(send_lineEdit, 1, 1, 1, 2);

        pushButton = new QPushButton(chat_groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);

        gridLayout->addWidget(pushButton, 2, 1, 1, 1);

        send_pushButton = new QPushButton(chat_groupBox);
        send_pushButton->setObjectName(QString::fromUtf8("send_pushButton"));

        gridLayout->addWidget(send_pushButton, 2, 2, 1, 1);


        retranslateUi(sendmessageuser_Dialog);

        QMetaObject::connectSlotsByName(sendmessageuser_Dialog);
    } // setupUi

    void retranslateUi(QDialog *sendmessageuser_Dialog)
    {
        sendmessageuser_Dialog->setWindowTitle(QCoreApplication::translate("sendmessageuser_Dialog", "Dialog", nullptr));
        username_groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("sendmessageuser_Dialog", "username :", nullptr));
        username_lineEdit->setText(QString());
        back_pushButton->setText(QCoreApplication::translate("sendmessageuser_Dialog", "back", nullptr));
        confirm_pushButton->setText(QCoreApplication::translate("sendmessageuser_Dialog", "confirm", nullptr));
        chat_groupBox->setTitle(QString());
        name_label->setText(QCoreApplication::translate("sendmessageuser_Dialog", "name :", nullptr));
        send_lineEdit->setText(QString());
        pushButton->setText(QCoreApplication::translate("sendmessageuser_Dialog", "back", nullptr));
        send_pushButton->setText(QCoreApplication::translate("sendmessageuser_Dialog", "send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sendmessageuser_Dialog: public Ui_sendmessageuser_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDMESSAGEUSER_DIALOG_H
