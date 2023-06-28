/********************************************************************************
** Form generated from reading UI file 'chat_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_DIALOG_H
#define UI_CHAT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_chat_Dialog
{
public:

    void setupUi(QDialog *chat_Dialog)
    {
        if (chat_Dialog->objectName().isEmpty())
            chat_Dialog->setObjectName(QString::fromUtf8("chat_Dialog"));
        chat_Dialog->resize(1193, 684);

        retranslateUi(chat_Dialog);

        QMetaObject::connectSlotsByName(chat_Dialog);
    } // setupUi

    void retranslateUi(QDialog *chat_Dialog)
    {
        chat_Dialog->setWindowTitle(QCoreApplication::translate("chat_Dialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chat_Dialog: public Ui_chat_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_DIALOG_H
