/********************************************************************************
** Form generated from reading UI file 'sendmessagechannel_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDMESSAGECHANNEL_DIALOG_H
#define UI_SENDMESSAGECHANNEL_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_sendmessagechannel_Dialog
{
public:

    void setupUi(QDialog *sendmessagechannel_Dialog)
    {
        if (sendmessagechannel_Dialog->objectName().isEmpty())
            sendmessagechannel_Dialog->setObjectName(QString::fromUtf8("sendmessagechannel_Dialog"));
        sendmessagechannel_Dialog->resize(1069, 650);

        retranslateUi(sendmessagechannel_Dialog);

        QMetaObject::connectSlotsByName(sendmessagechannel_Dialog);
    } // setupUi

    void retranslateUi(QDialog *sendmessagechannel_Dialog)
    {
        sendmessagechannel_Dialog->setWindowTitle(QCoreApplication::translate("sendmessagechannel_Dialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sendmessagechannel_Dialog: public Ui_sendmessagechannel_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDMESSAGECHANNEL_DIALOG_H
