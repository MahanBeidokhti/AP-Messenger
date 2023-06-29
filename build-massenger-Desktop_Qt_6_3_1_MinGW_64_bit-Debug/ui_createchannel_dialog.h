/********************************************************************************
** Form generated from reading UI file 'createchannel_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATECHANNEL_DIALOG_H
#define UI_CREATECHANNEL_DIALOG_H

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

class Ui_createchannel_Dialog
{
public:
    QGroupBox *channelinformation_groupBox;
    QGridLayout *gridLayout_2;
    QPushButton *back_pushButton_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *channeltitle_lineEdit;
    QPushButton *back_pushButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *channelname_lineEdit;
    QPushButton *confirm_pushButton_2;
    QPushButton *confirm_pushButton;
    QGroupBox *chat_groupBox;
    QGridLayout *gridLayout;
    QLabel *name_label;
    QLineEdit *recieved_channelname_lineEdit;
    QListView *massege_listView;
    QLineEdit *send_lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *back_chat_pushButton;
    QPushButton *send_pushButton;

    void setupUi(QDialog *createchannel_Dialog)
    {
        if (createchannel_Dialog->objectName().isEmpty())
            createchannel_Dialog->setObjectName(QString::fromUtf8("createchannel_Dialog"));
        createchannel_Dialog->resize(1083, 690);
        createchannel_Dialog->setStyleSheet(QString::fromUtf8("background-image: url(:/Source/@metawalls.jpg);"));
        channelinformation_groupBox = new QGroupBox(createchannel_Dialog);
        channelinformation_groupBox->setObjectName(QString::fromUtf8("channelinformation_groupBox"));
        channelinformation_groupBox->setGeometry(QRect(340, 170, 311, 211));
        channelinformation_groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(21, 255, 228);"));
        gridLayout_2 = new QGridLayout(channelinformation_groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        back_pushButton_2 = new QPushButton(channelinformation_groupBox);
        back_pushButton_2->setObjectName(QString::fromUtf8("back_pushButton_2"));

        gridLayout_2->addWidget(back_pushButton_2, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(channelinformation_groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        channeltitle_lineEdit = new QLineEdit(channelinformation_groupBox);
        channeltitle_lineEdit->setObjectName(QString::fromUtf8("channeltitle_lineEdit"));
        QFont font;
        font.setPointSize(13);
        channeltitle_lineEdit->setFont(font);

        horizontalLayout->addWidget(channeltitle_lineEdit);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 2);

        back_pushButton = new QPushButton(channelinformation_groupBox);
        back_pushButton->setObjectName(QString::fromUtf8("back_pushButton"));

        gridLayout_2->addWidget(back_pushButton, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(channelinformation_groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        channelname_lineEdit = new QLineEdit(channelinformation_groupBox);
        channelname_lineEdit->setObjectName(QString::fromUtf8("channelname_lineEdit"));

        horizontalLayout_3->addWidget(channelname_lineEdit);


        gridLayout_2->addLayout(horizontalLayout_3, 2, 0, 1, 2);

        confirm_pushButton_2 = new QPushButton(channelinformation_groupBox);
        confirm_pushButton_2->setObjectName(QString::fromUtf8("confirm_pushButton_2"));

        gridLayout_2->addWidget(confirm_pushButton_2, 3, 1, 1, 1);

        confirm_pushButton = new QPushButton(channelinformation_groupBox);
        confirm_pushButton->setObjectName(QString::fromUtf8("confirm_pushButton"));

        gridLayout_2->addWidget(confirm_pushButton, 1, 1, 1, 1);

        chat_groupBox = new QGroupBox(createchannel_Dialog);
        chat_groupBox->setObjectName(QString::fromUtf8("chat_groupBox"));
        chat_groupBox->setGeometry(QRect(240, 70, 521, 421));
        chat_groupBox->setStyleSheet(QString::fromUtf8("color: rgb(41, 255, 241);\n"
"background-color: rgb(4, 4, 4);\n"
"gridline-color: rgb(255, 71, 25);\n"
"border-color: rgb(15, 255, 11);\n"
"border-color: rgb(255, 23, 23);"));
        gridLayout = new QGridLayout(chat_groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        name_label = new QLabel(chat_groupBox);
        name_label->setObjectName(QString::fromUtf8("name_label"));
        QFont font1;
        font1.setPointSize(8);
        name_label->setFont(font1);

        gridLayout->addWidget(name_label, 0, 0, 1, 1);

        recieved_channelname_lineEdit = new QLineEdit(chat_groupBox);
        recieved_channelname_lineEdit->setObjectName(QString::fromUtf8("recieved_channelname_lineEdit"));
        recieved_channelname_lineEdit->setFont(font1);

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
        QFont font2;
        font2.setPointSize(12);
        back_chat_pushButton->setFont(font2);

        horizontalLayout_2->addWidget(back_chat_pushButton);

        send_pushButton = new QPushButton(chat_groupBox);
        send_pushButton->setObjectName(QString::fromUtf8("send_pushButton"));
        send_pushButton->setFont(font2);

        horizontalLayout_2->addWidget(send_pushButton);


        gridLayout->addLayout(horizontalLayout_2, 2, 2, 1, 1);


        retranslateUi(createchannel_Dialog);

        QMetaObject::connectSlotsByName(createchannel_Dialog);
    } // setupUi

    void retranslateUi(QDialog *createchannel_Dialog)
    {
        createchannel_Dialog->setWindowTitle(QCoreApplication::translate("createchannel_Dialog", "Dialog", nullptr));
        channelinformation_groupBox->setTitle(QString());
        back_pushButton_2->setText(QCoreApplication::translate("createchannel_Dialog", "back", nullptr));
        label->setText(QCoreApplication::translate("createchannel_Dialog", "grouptitle", nullptr));
        channeltitle_lineEdit->setText(QString());
        back_pushButton->setText(QCoreApplication::translate("createchannel_Dialog", "back", nullptr));
        label_2->setText(QCoreApplication::translate("createchannel_Dialog", "groupname", nullptr));
        confirm_pushButton_2->setText(QCoreApplication::translate("createchannel_Dialog", "confirm", nullptr));
        confirm_pushButton->setText(QCoreApplication::translate("createchannel_Dialog", "confirm", nullptr));
        chat_groupBox->setTitle(QString());
        name_label->setText(QCoreApplication::translate("createchannel_Dialog", "name :", nullptr));
        send_lineEdit->setText(QString());
        back_chat_pushButton->setText(QCoreApplication::translate("createchannel_Dialog", "back", nullptr));
        send_pushButton->setText(QCoreApplication::translate("createchannel_Dialog", "send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class createchannel_Dialog: public Ui_createchannel_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATECHANNEL_DIALOG_H
