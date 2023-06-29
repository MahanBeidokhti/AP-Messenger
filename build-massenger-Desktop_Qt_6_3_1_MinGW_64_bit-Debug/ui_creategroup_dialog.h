/********************************************************************************
** Form generated from reading UI file 'creategroup_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEGROUP_DIALOG_H
#define UI_CREATEGROUP_DIALOG_H

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

class Ui_creategroup_Dialog
{
public:
    QGroupBox *chat_groupBox;
    QGridLayout *gridLayout;
    QLabel *name_label;
    QLineEdit *recieved_groupname_lineEdit;
    QListView *massege_listView;
    QLineEdit *send_lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *back_chat_pushButton;
    QPushButton *send_pushButton;
    QGroupBox *groupinformation_groupBox;
    QGridLayout *gridLayout_2;
    QPushButton *back_pushButton_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *grouptitle_lineEdit;
    QPushButton *back_pushButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *groupname_lineEdit;
    QPushButton *confirm_pushButton_2;
    QPushButton *confirm_pushButton;

    void setupUi(QDialog *creategroup_Dialog)
    {
        if (creategroup_Dialog->objectName().isEmpty())
            creategroup_Dialog->setObjectName(QString::fromUtf8("creategroup_Dialog"));
        creategroup_Dialog->resize(1254, 723);
        creategroup_Dialog->setStyleSheet(QString::fromUtf8("background-image: url(:/Source/@metawalls.jpg);"));
        chat_groupBox = new QGroupBox(creategroup_Dialog);
        chat_groupBox->setObjectName(QString::fromUtf8("chat_groupBox"));
        chat_groupBox->setGeometry(QRect(270, 160, 501, 421));
        chat_groupBox->setStyleSheet(QString::fromUtf8("color: rgb(41, 255, 241);\n"
"background-color: rgb(4, 4, 4);\n"
"gridline-color: rgb(255, 71, 25);\n"
"border-color: rgb(15, 255, 11);\n"
"border-color: rgb(255, 23, 23);"));
        gridLayout = new QGridLayout(chat_groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        name_label = new QLabel(chat_groupBox);
        name_label->setObjectName(QString::fromUtf8("name_label"));
        QFont font;
        font.setPointSize(8);
        name_label->setFont(font);

        gridLayout->addWidget(name_label, 0, 0, 1, 1);

        recieved_groupname_lineEdit = new QLineEdit(chat_groupBox);
        recieved_groupname_lineEdit->setObjectName(QString::fromUtf8("recieved_groupname_lineEdit"));
        recieved_groupname_lineEdit->setFont(font);

        gridLayout->addWidget(recieved_groupname_lineEdit, 0, 1, 1, 1);

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

        groupinformation_groupBox = new QGroupBox(creategroup_Dialog);
        groupinformation_groupBox->setObjectName(QString::fromUtf8("groupinformation_groupBox"));
        groupinformation_groupBox->setGeometry(QRect(360, 260, 311, 211));
        groupinformation_groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(21, 255, 228);"));
        gridLayout_2 = new QGridLayout(groupinformation_groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        back_pushButton_2 = new QPushButton(groupinformation_groupBox);
        back_pushButton_2->setObjectName(QString::fromUtf8("back_pushButton_2"));

        gridLayout_2->addWidget(back_pushButton_2, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupinformation_groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        grouptitle_lineEdit = new QLineEdit(groupinformation_groupBox);
        grouptitle_lineEdit->setObjectName(QString::fromUtf8("grouptitle_lineEdit"));
        QFont font2;
        font2.setPointSize(13);
        grouptitle_lineEdit->setFont(font2);

        horizontalLayout->addWidget(grouptitle_lineEdit);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 2);

        back_pushButton = new QPushButton(groupinformation_groupBox);
        back_pushButton->setObjectName(QString::fromUtf8("back_pushButton"));

        gridLayout_2->addWidget(back_pushButton, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(groupinformation_groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        groupname_lineEdit = new QLineEdit(groupinformation_groupBox);
        groupname_lineEdit->setObjectName(QString::fromUtf8("groupname_lineEdit"));

        horizontalLayout_3->addWidget(groupname_lineEdit);


        gridLayout_2->addLayout(horizontalLayout_3, 2, 0, 1, 2);

        confirm_pushButton_2 = new QPushButton(groupinformation_groupBox);
        confirm_pushButton_2->setObjectName(QString::fromUtf8("confirm_pushButton_2"));

        gridLayout_2->addWidget(confirm_pushButton_2, 3, 1, 1, 1);

        confirm_pushButton = new QPushButton(groupinformation_groupBox);
        confirm_pushButton->setObjectName(QString::fromUtf8("confirm_pushButton"));

        gridLayout_2->addWidget(confirm_pushButton, 1, 1, 1, 1);


        retranslateUi(creategroup_Dialog);

        QMetaObject::connectSlotsByName(creategroup_Dialog);
    } // setupUi

    void retranslateUi(QDialog *creategroup_Dialog)
    {
        creategroup_Dialog->setWindowTitle(QCoreApplication::translate("creategroup_Dialog", "Dialog", nullptr));
        chat_groupBox->setTitle(QString());
        name_label->setText(QCoreApplication::translate("creategroup_Dialog", "name :", nullptr));
        send_lineEdit->setText(QString());
        back_chat_pushButton->setText(QCoreApplication::translate("creategroup_Dialog", "back", nullptr));
        send_pushButton->setText(QCoreApplication::translate("creategroup_Dialog", "send", nullptr));
        groupinformation_groupBox->setTitle(QString());
        back_pushButton_2->setText(QCoreApplication::translate("creategroup_Dialog", "back", nullptr));
        label->setText(QCoreApplication::translate("creategroup_Dialog", "grouptitle", nullptr));
        grouptitle_lineEdit->setText(QString());
        back_pushButton->setText(QCoreApplication::translate("creategroup_Dialog", "back", nullptr));
        label_2->setText(QCoreApplication::translate("creategroup_Dialog", "groupname", nullptr));
        confirm_pushButton_2->setText(QCoreApplication::translate("creategroup_Dialog", "confirm", nullptr));
        confirm_pushButton->setText(QCoreApplication::translate("creategroup_Dialog", "confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class creategroup_Dialog: public Ui_creategroup_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEGROUP_DIALOG_H
