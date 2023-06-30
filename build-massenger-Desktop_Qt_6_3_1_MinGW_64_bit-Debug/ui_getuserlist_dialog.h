/********************************************************************************
** Form generated from reading UI file 'getuserlist_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETUSERLIST_DIALOG_H
#define UI_GETUSERLIST_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_getuserlist_Dialog
{
public:
    QGroupBox *user_groupBox;
    QFormLayout *formLayout;
    QPushButton *pushButton;
    QListView *user_listView;

    void setupUi(QDialog *getuserlist_Dialog)
    {
        if (getuserlist_Dialog->objectName().isEmpty())
            getuserlist_Dialog->setObjectName(QString::fromUtf8("getuserlist_Dialog"));
        getuserlist_Dialog->resize(1254, 723);
        getuserlist_Dialog->setStyleSheet(QString::fromUtf8("background-image: url(:/Source/@metawalls.jpg);"));
        user_groupBox = new QGroupBox(getuserlist_Dialog);
        user_groupBox->setObjectName(QString::fromUtf8("user_groupBox"));
        user_groupBox->setGeometry(QRect(290, 120, 631, 461));
        QFont font;
        font.setPointSize(14);
        user_groupBox->setFont(font);
        user_groupBox->setStyleSheet(QString::fromUtf8("color: rgb(10, 235, 255);\n"
"background-color: rgb(0, 0, 0);"));
        formLayout = new QFormLayout(user_groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        pushButton = new QPushButton(user_groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        formLayout->setWidget(1, QFormLayout::LabelRole, pushButton);

        user_listView = new QListView(user_groupBox);
        user_listView->setObjectName(QString::fromUtf8("user_listView"));
        user_listView->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        formLayout->setWidget(0, QFormLayout::SpanningRole, user_listView);


        retranslateUi(getuserlist_Dialog);

        QMetaObject::connectSlotsByName(getuserlist_Dialog);
    } // setupUi

    void retranslateUi(QDialog *getuserlist_Dialog)
    {
        getuserlist_Dialog->setWindowTitle(QCoreApplication::translate("getuserlist_Dialog", "Dialog", nullptr));
        user_groupBox->setTitle(QCoreApplication::translate("getuserlist_Dialog", "Users", nullptr));
        pushButton->setText(QCoreApplication::translate("getuserlist_Dialog", "back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class getuserlist_Dialog: public Ui_getuserlist_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETUSERLIST_DIALOG_H
