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

QT_BEGIN_NAMESPACE

class Ui_createchannel_Dialog
{
public:

    void setupUi(QDialog *createchannel_Dialog)
    {
        if (createchannel_Dialog->objectName().isEmpty())
            createchannel_Dialog->setObjectName(QString::fromUtf8("createchannel_Dialog"));
        createchannel_Dialog->resize(1083, 690);

        retranslateUi(createchannel_Dialog);

        QMetaObject::connectSlotsByName(createchannel_Dialog);
    } // setupUi

    void retranslateUi(QDialog *createchannel_Dialog)
    {
        createchannel_Dialog->setWindowTitle(QCoreApplication::translate("createchannel_Dialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class createchannel_Dialog: public Ui_createchannel_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATECHANNEL_DIALOG_H
