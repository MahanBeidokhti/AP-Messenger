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

QT_BEGIN_NAMESPACE

class Ui_getgrouplist_Dialog
{
public:

    void setupUi(QDialog *getgrouplist_Dialog)
    {
        if (getgrouplist_Dialog->objectName().isEmpty())
            getgrouplist_Dialog->setObjectName(QString::fromUtf8("getgrouplist_Dialog"));
        getgrouplist_Dialog->resize(1168, 787);

        retranslateUi(getgrouplist_Dialog);

        QMetaObject::connectSlotsByName(getgrouplist_Dialog);
    } // setupUi

    void retranslateUi(QDialog *getgrouplist_Dialog)
    {
        getgrouplist_Dialog->setWindowTitle(QCoreApplication::translate("getgrouplist_Dialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class getgrouplist_Dialog: public Ui_getgrouplist_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETGROUPLIST_DIALOG_H
