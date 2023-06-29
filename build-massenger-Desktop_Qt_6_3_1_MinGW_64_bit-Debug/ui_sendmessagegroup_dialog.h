/********************************************************************************
** Form generated from reading UI file 'sendmessagegroup_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDMESSAGEGROUP_DIALOG_H
#define UI_SENDMESSAGEGROUP_DIALOG_H

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

class Ui_sendmessagegroup_Dialog
{
public:
    QGroupBox *chat_groupBox;
    QGridLayout *gridLayout;
    QLineEdit *send_lineEdit;
    QPushButton *send_pushButton;
    QListView *massege_listView;
    QPushButton *back_chat_pushButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *name_label;
    QLineEdit *recieved_groupname_lineEdit;
    QGroupBox *groupname_groupBox;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *groupname_lineEdit;
    QPushButton *back_pushButton;
    QPushButton *confirm_pushButton;

    void setupUi(QDialog *sendmessagegroup_Dialog)
    {
        if (sendmessagegroup_Dialog->objectName().isEmpty())
            sendmessagegroup_Dialog->setObjectName(QString::fromUtf8("sendmessagegroup_Dialog"));
        sendmessagegroup_Dialog->resize(1254, 723);
        sendmessagegroup_Dialog->setStyleSheet(QString::fromUtf8("background-image: url(:/Source/@metawalls.jpg);"));
        chat_groupBox = new QGroupBox(sendmessagegroup_Dialog);
        chat_groupBox->setObjectName(QString::fromUtf8("chat_groupBox"));
        chat_groupBox->setGeometry(QRect(330, 160, 481, 391));
        chat_groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(7, 7, 7);"));
        gridLayout = new QGridLayout(chat_groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        send_lineEdit = new QLineEdit(chat_groupBox);
        send_lineEdit->setObjectName(QString::fromUtf8("send_lineEdit"));

        gridLayout->addWidget(send_lineEdit, 1, 1, 1, 2);

        send_pushButton = new QPushButton(chat_groupBox);
        send_pushButton->setObjectName(QString::fromUtf8("send_pushButton"));
        QFont font;
        font.setPointSize(12);
        send_pushButton->setFont(font);

        gridLayout->addWidget(send_pushButton, 2, 2, 1, 1);

        massege_listView = new QListView(chat_groupBox);
        massege_listView->setObjectName(QString::fromUtf8("massege_listView"));

        gridLayout->addWidget(massege_listView, 0, 1, 1, 2);

        back_chat_pushButton = new QPushButton(chat_groupBox);
        back_chat_pushButton->setObjectName(QString::fromUtf8("back_chat_pushButton"));
        back_chat_pushButton->setFont(font);

        gridLayout->addWidget(back_chat_pushButton, 2, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        name_label = new QLabel(chat_groupBox);
        name_label->setObjectName(QString::fromUtf8("name_label"));
        QFont font1;
        font1.setPointSize(8);
        name_label->setFont(font1);

        horizontalLayout_2->addWidget(name_label);

        recieved_groupname_lineEdit = new QLineEdit(chat_groupBox);
        recieved_groupname_lineEdit->setObjectName(QString::fromUtf8("recieved_groupname_lineEdit"));
        recieved_groupname_lineEdit->setFont(font1);

        horizontalLayout_2->addWidget(recieved_groupname_lineEdit);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        groupname_groupBox = new QGroupBox(sendmessagegroup_Dialog);
        groupname_groupBox->setObjectName(QString::fromUtf8("groupname_groupBox"));
        groupname_groupBox->setGeometry(QRect(400, 250, 311, 191));
        groupname_groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(16, 16, 16);"));
        formLayout = new QFormLayout(groupname_groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupname_groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        groupname_lineEdit = new QLineEdit(groupname_groupBox);
        groupname_lineEdit->setObjectName(QString::fromUtf8("groupname_lineEdit"));
        QFont font2;
        font2.setPointSize(13);
        groupname_lineEdit->setFont(font2);

        horizontalLayout->addWidget(groupname_lineEdit);


        formLayout->setLayout(0, QFormLayout::SpanningRole, horizontalLayout);

        back_pushButton = new QPushButton(groupname_groupBox);
        back_pushButton->setObjectName(QString::fromUtf8("back_pushButton"));

        formLayout->setWidget(1, QFormLayout::LabelRole, back_pushButton);

        confirm_pushButton = new QPushButton(groupname_groupBox);
        confirm_pushButton->setObjectName(QString::fromUtf8("confirm_pushButton"));

        formLayout->setWidget(1, QFormLayout::FieldRole, confirm_pushButton);


        retranslateUi(sendmessagegroup_Dialog);

        QMetaObject::connectSlotsByName(sendmessagegroup_Dialog);
    } // setupUi

    void retranslateUi(QDialog *sendmessagegroup_Dialog)
    {
        sendmessagegroup_Dialog->setWindowTitle(QCoreApplication::translate("sendmessagegroup_Dialog", "Dialog", nullptr));
        chat_groupBox->setTitle(QString());
        send_lineEdit->setText(QString());
        send_pushButton->setText(QCoreApplication::translate("sendmessagegroup_Dialog", "send", nullptr));
        back_chat_pushButton->setText(QCoreApplication::translate("sendmessagegroup_Dialog", "back", nullptr));
        name_label->setText(QCoreApplication::translate("sendmessagegroup_Dialog", "name :", nullptr));
        groupname_groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("sendmessagegroup_Dialog", "groupname", nullptr));
        groupname_lineEdit->setText(QString());
        back_pushButton->setText(QCoreApplication::translate("sendmessagegroup_Dialog", "back", nullptr));
        confirm_pushButton->setText(QCoreApplication::translate("sendmessagegroup_Dialog", "confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sendmessagegroup_Dialog: public Ui_sendmessagegroup_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDMESSAGEGROUP_DIALOG_H
