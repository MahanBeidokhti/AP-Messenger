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

QT_BEGIN_NAMESPACE

class Ui_sendmessagegroup_Dialog
{
public:

    void setupUi(QDialog *sendmessagegroup_Dialog)
    {
        if (sendmessagegroup_Dialog->objectName().isEmpty())
            sendmessagegroup_Dialog->setObjectName(QString::fromUtf8("sendmessagegroup_Dialog"));
        sendmessagegroup_Dialog->resize(1044, 623);

        retranslateUi(sendmessagegroup_Dialog);

        QMetaObject::connectSlotsByName(sendmessagegroup_Dialog);
    } // setupUi

    void retranslateUi(QDialog *sendmessagegroup_Dialog)
    {
        sendmessagegroup_Dialog->setWindowTitle(QCoreApplication::translate("sendmessagegroup_Dialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sendmessagegroup_Dialog: public Ui_sendmessagegroup_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDMESSAGEGROUP_DIALOG_H
