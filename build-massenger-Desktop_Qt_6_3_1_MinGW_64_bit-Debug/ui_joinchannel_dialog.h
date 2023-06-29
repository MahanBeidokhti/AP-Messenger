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

QT_BEGIN_NAMESPACE

class Ui_joinchannel_Dialog
{
public:

    void setupUi(QDialog *joinchannel_Dialog)
    {
        if (joinchannel_Dialog->objectName().isEmpty())
            joinchannel_Dialog->setObjectName(QString::fromUtf8("joinchannel_Dialog"));
        joinchannel_Dialog->resize(1091, 682);

        retranslateUi(joinchannel_Dialog);

        QMetaObject::connectSlotsByName(joinchannel_Dialog);
    } // setupUi

    void retranslateUi(QDialog *joinchannel_Dialog)
    {
        joinchannel_Dialog->setWindowTitle(QCoreApplication::translate("joinchannel_Dialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class joinchannel_Dialog: public Ui_joinchannel_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOINCHANNEL_DIALOG_H
