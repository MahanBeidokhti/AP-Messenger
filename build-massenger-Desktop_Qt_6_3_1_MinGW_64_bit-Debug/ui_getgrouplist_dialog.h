/********************************************************************************
** Form generated from reading UI file 'getgrouplist_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETGROUPLIST_DIALOG_H
#define UI_GETGROUPLIST_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_getgrouplist_Dialog
{
public:
    QGroupBox *groups_groupBox;
    QFormLayout *formLayout;
    QPushButton *pushButton;
    QListView *groups_listView;

    void setupUi(QDialog *getgrouplist_Dialog)
    {
        if (getgrouplist_Dialog->objectName().isEmpty())
            getgrouplist_Dialog->setObjectName(QString::fromUtf8("getgrouplist_Dialog"));
        getgrouplist_Dialog->resize(1168, 787);
        getgrouplist_Dialog->setStyleSheet(QString::fromUtf8("background-image: url(:/Source/@metawalls.jpg);"));
        groups_groupBox = new QGroupBox(getgrouplist_Dialog);
        groups_groupBox->setObjectName(QString::fromUtf8("groups_groupBox"));
        groups_groupBox->setGeometry(QRect(240, 150, 631, 461));
        QFont font;
        font.setPointSize(14);
        groups_groupBox->setFont(font);
        groups_groupBox->setStyleSheet(QString::fromUtf8("color: rgb(10, 235, 255);\n"
"background-color: rgb(0, 0, 0);"));
        formLayout = new QFormLayout(groups_groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        pushButton = new QPushButton(groups_groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        formLayout->setWidget(1, QFormLayout::LabelRole, pushButton);

        groups_listView = new QListView(groups_groupBox);
        groups_listView->setObjectName(QString::fromUtf8("groups_listView"));
        groups_listView->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        formLayout->setWidget(0, QFormLayout::SpanningRole, groups_listView);


        retranslateUi(getgrouplist_Dialog);

        QMetaObject::connectSlotsByName(getgrouplist_Dialog);
    } // setupUi

    void retranslateUi(QDialog *getgrouplist_Dialog)
    {
        getgrouplist_Dialog->setWindowTitle(QCoreApplication::translate("getgrouplist_Dialog", "Dialog", nullptr));
        groups_groupBox->setTitle(QCoreApplication::translate("getgrouplist_Dialog", "Groups", nullptr));
        pushButton->setText(QCoreApplication::translate("getgrouplist_Dialog", "back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class getgrouplist_Dialog: public Ui_getgrouplist_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETGROUPLIST_DIALOG_H
