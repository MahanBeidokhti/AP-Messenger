/********************************************************************************
** Form generated from reading UI file 'getchannellist_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETCHANNELLIST_DIALOG_H
#define UI_GETCHANNELLIST_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_getchannellist_Dialog
{
public:

    void setupUi(QDialog *getchannellist_Dialog)
    {
        if (getchannellist_Dialog->objectName().isEmpty())
            getchannellist_Dialog->setObjectName(QString::fromUtf8("getchannellist_Dialog"));
        getchannellist_Dialog->resize(1168, 777);

        retranslateUi(getchannellist_Dialog);

        QMetaObject::connectSlotsByName(getchannellist_Dialog);
    } // setupUi

    void retranslateUi(QDialog *getchannellist_Dialog)
    {
        getchannellist_Dialog->setWindowTitle(QCoreApplication::translate("getchannellist_Dialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class getchannellist_Dialog: public Ui_getchannellist_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETCHANNELLIST_DIALOG_H
