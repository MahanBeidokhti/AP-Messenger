/********************************************************************************
** Form generated from reading UI file 'joingroup_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOINGROUP_DIALOG_H
#define UI_JOINGROUP_DIALOG_H

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

class Ui_joingroup_Dialog
{
public:
    QGroupBox *groupinformation_groupBox;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *groupname_lineEdit;
    QPushButton *back_pushButton;
    QPushButton *confirm_pushButton;
    QGroupBox *chat_groupBox;
    QGridLayout *gridLayout;
    QLabel *name_label;
    QLineEdit *recieved_groupname_lineEdit;
    QListView *massege_listView;
    QLineEdit *send_lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *back_chat_pushButton;
    QPushButton *send_pushButton;

    void setupUi(QDialog *joingroup_Dialog)
    {
        if (joingroup_Dialog->objectName().isEmpty())
            joingroup_Dialog->setObjectName(QString::fromUtf8("joingroup_Dialog"));
        joingroup_Dialog->resize(1254, 723);
        joingroup_Dialog->setStyleSheet(QString::fromUtf8("background-image: url(:/Source/@metawalls.jpg);"));
        groupinformation_groupBox = new QGroupBox(joingroup_Dialog);
        groupinformation_groupBox->setObjectName(QString::fromUtf8("groupinformation_groupBox"));
        groupinformation_groupBox->setGeometry(QRect(390, 280, 281, 171));
        groupinformation_groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(21, 255, 228);"));
        gridLayout_2 = new QGridLayout(groupinformation_groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(groupinformation_groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        groupname_lineEdit = new QLineEdit(groupinformation_groupBox);
        groupname_lineEdit->setObjectName(QString::fromUtf8("groupname_lineEdit"));

        horizontalLayout_3->addWidget(groupname_lineEdit);


        gridLayout_2->addLayout(horizontalLayout_3, 0, 0, 1, 2);

        back_pushButton = new QPushButton(groupinformation_groupBox);
        back_pushButton->setObjectName(QString::fromUtf8("back_pushButton"));

        gridLayout_2->addWidget(back_pushButton, 1, 0, 1, 1);

        confirm_pushButton = new QPushButton(groupinformation_groupBox);
        confirm_pushButton->setObjectName(QString::fromUtf8("confirm_pushButton"));

        gridLayout_2->addWidget(confirm_pushButton, 1, 1, 1, 1);

        chat_groupBox = new QGroupBox(joingroup_Dialog);
        chat_groupBox->setObjectName(QString::fromUtf8("chat_groupBox"));
        chat_groupBox->setGeometry(QRect(290, 160, 501, 421));
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


        retranslateUi(joingroup_Dialog);

        QMetaObject::connectSlotsByName(joingroup_Dialog);
    } // setupUi

    void retranslateUi(QDialog *joingroup_Dialog)
    {
        joingroup_Dialog->setWindowTitle(QCoreApplication::translate("joingroup_Dialog", "Dialog", nullptr));
        groupinformation_groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("joingroup_Dialog", "groupname", nullptr));
        back_pushButton->setText(QCoreApplication::translate("joingroup_Dialog", "back", nullptr));
        confirm_pushButton->setText(QCoreApplication::translate("joingroup_Dialog", "confirm", nullptr));
        chat_groupBox->setTitle(QString());
        name_label->setText(QCoreApplication::translate("joingroup_Dialog", "name :", nullptr));
        send_lineEdit->setText(QString());
        back_chat_pushButton->setText(QCoreApplication::translate("joingroup_Dialog", "back", nullptr));
        send_pushButton->setText(QCoreApplication::translate("joingroup_Dialog", "send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class joingroup_Dialog: public Ui_joingroup_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOINGROUP_DIALOG_H
