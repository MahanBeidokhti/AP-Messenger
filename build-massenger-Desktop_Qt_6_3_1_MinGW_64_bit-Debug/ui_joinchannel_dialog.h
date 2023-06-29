/********************************************************************************
** Form generated from reading UI file 'joinchannel_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOINCHANNEL_DIALOG_H
#define UI_JOINCHANNEL_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_joinchannel_Dialog
{
public:
    QGroupBox *chat_groupBox;
    QGridLayout *gridLayout;
    QLineEdit *recieved_channelname_lineEdit;
    QListView *massege_listView;
    QLineEdit *send_lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *back_chat_pushButton;
    QPushButton *send_pushButton;
    QLabel *name_label;
    QGroupBox *channelinformation_groupBox;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *channelname_lineEdit;
    QPushButton *back_pushButton;
    QPushButton *confirm_pushButton;

    void setupUi(QDialog *joinchannel_Dialog)
    {
        if (joinchannel_Dialog->objectName().isEmpty())
            joinchannel_Dialog->setObjectName(QString::fromUtf8("joinchannel_Dialog"));
        joinchannel_Dialog->resize(1254, 723);
        joinchannel_Dialog->setStyleSheet(QString::fromUtf8("background-image: url(:/Source/@metawalls.jpg);"));
        chat_groupBox = new QGroupBox(joinchannel_Dialog);
        chat_groupBox->setObjectName(QString::fromUtf8("chat_groupBox"));
        chat_groupBox->setGeometry(QRect(270, 150, 521, 421));
        chat_groupBox->setStyleSheet(QString::fromUtf8("color: rgb(41, 255, 241);\n"
"background-color: rgb(4, 4, 4);\n"
"gridline-color: rgb(255, 71, 25);\n"
"border-color: rgb(15, 255, 11);\n"
"border-color: rgb(255, 23, 23);"));
        gridLayout = new QGridLayout(chat_groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        recieved_channelname_lineEdit = new QLineEdit(chat_groupBox);
        recieved_channelname_lineEdit->setObjectName(QString::fromUtf8("recieved_channelname_lineEdit"));
        QFont font;
        font.setPointSize(8);
        recieved_channelname_lineEdit->setFont(font);

        gridLayout->addWidget(recieved_channelname_lineEdit, 0, 1, 1, 1);

        massege_listView = new QListView(chat_groupBox);
        massege_listView->setObjectName(QString::fromUtf8("massege_listView"));
        massege_listView->setStyleSheet(QString::fromUtf8("gridline-color: rgb(255, 102, 26);\n"
"selection-background-color: rgb(255, 71, 39);\n"
"border-top-color: rgb(255, 101, 24);"));

        gridLayout->addWidget(massege_listView, 0, 2, 1, 1);

        send_lineEdit = new QLineEdit(chat_groupBox);
        send_lineEdit->setObjectName(QString::fromUtf8("send_lineEdit"));
        send_lineEdit->setStyleSheet(QString::fromUtf8("border-color: rgb(11, 255, 235);"));

        gridLayout->addWidget(send_lineEdit, 1, 2, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        back_chat_pushButton = new QPushButton(chat_groupBox);
        back_chat_pushButton->setObjectName(QString::fromUtf8("back_chat_pushButton"));
        QFont font1;
        font1.setPointSize(12);
        back_chat_pushButton->setFont(font1);

        horizontalLayout_2->addWidget(back_chat_pushButton);

        send_pushButton = new QPushButton(chat_groupBox);
        send_pushButton->setObjectName(QString::fromUtf8("send_pushButton"));
        send_pushButton->setFont(font1);

        horizontalLayout_2->addWidget(send_pushButton);


        gridLayout->addLayout(horizontalLayout_2, 2, 2, 1, 1);

        name_label = new QLabel(chat_groupBox);
        name_label->setObjectName(QString::fromUtf8("name_label"));
        name_label->setFont(font);

        gridLayout->addWidget(name_label, 0, 0, 1, 1);

        channelinformation_groupBox = new QGroupBox(joinchannel_Dialog);
        channelinformation_groupBox->setObjectName(QString::fromUtf8("channelinformation_groupBox"));
        channelinformation_groupBox->setGeometry(QRect(390, 270, 251, 161));
        channelinformation_groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(21, 255, 228);"));
        gridLayout_2 = new QGridLayout(channelinformation_groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(channelinformation_groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        channelname_lineEdit = new QLineEdit(channelinformation_groupBox);
        channelname_lineEdit->setObjectName(QString::fromUtf8("channelname_lineEdit"));

        horizontalLayout_3->addWidget(channelname_lineEdit);


        gridLayout_2->addLayout(horizontalLayout_3, 0, 0, 1, 2);

        back_pushButton = new QPushButton(channelinformation_groupBox);
        back_pushButton->setObjectName(QString::fromUtf8("back_pushButton"));

        gridLayout_2->addWidget(back_pushButton, 1, 0, 1, 1);

        confirm_pushButton = new QPushButton(channelinformation_groupBox);
        confirm_pushButton->setObjectName(QString::fromUtf8("confirm_pushButton"));

        gridLayout_2->addWidget(confirm_pushButton, 1, 1, 1, 1);


        retranslateUi(joinchannel_Dialog);

        QMetaObject::connectSlotsByName(joinchannel_Dialog);
    } // setupUi

    void retranslateUi(QDialog *joinchannel_Dialog)
    {
        joinchannel_Dialog->setWindowTitle(QCoreApplication::translate("joinchannel_Dialog", "Dialog", nullptr));
        chat_groupBox->setTitle(QString());
        send_lineEdit->setText(QString());
        back_chat_pushButton->setText(QCoreApplication::translate("joinchannel_Dialog", "back", nullptr));
        send_pushButton->setText(QCoreApplication::translate("joinchannel_Dialog", "send", nullptr));
        name_label->setText(QCoreApplication::translate("joinchannel_Dialog", "name :", nullptr));
        channelinformation_groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("joinchannel_Dialog", "groupname", nullptr));
        back_pushButton->setText(QCoreApplication::translate("joinchannel_Dialog", "back", nullptr));
        confirm_pushButton->setText(QCoreApplication::translate("joinchannel_Dialog", "confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class joinchannel_Dialog: public Ui_joinchannel_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOINCHANNEL_DIALOG_H
