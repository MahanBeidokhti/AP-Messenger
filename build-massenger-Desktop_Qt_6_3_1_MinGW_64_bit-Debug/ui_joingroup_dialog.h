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

QT_BEGIN_NAMESPACE

class Ui_joingroup_Dialog
{
public:

    void setupUi(QDialog *joingroup_Dialog)
    {
        if (joingroup_Dialog->objectName().isEmpty())
            joingroup_Dialog->setObjectName(QString::fromUtf8("joingroup_Dialog"));
        joingroup_Dialog->resize(1117, 698);

        retranslateUi(joingroup_Dialog);

        QMetaObject::connectSlotsByName(joingroup_Dialog);
    } // setupUi

    void retranslateUi(QDialog *joingroup_Dialog)
    {
        joingroup_Dialog->setWindowTitle(QCoreApplication::translate("joingroup_Dialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class joingroup_Dialog: public Ui_joingroup_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOINGROUP_DIALOG_H
