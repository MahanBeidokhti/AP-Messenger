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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_getchannellist_Dialog
{
public:
    QGroupBox *channels_groupBox;
    QFormLayout *formLayout;
    QPushButton *pushButton;
    QListView *channels_listView;

    void setupUi(QDialog *getchannellist_Dialog)
    {
        if (getchannellist_Dialog->objectName().isEmpty())
            getchannellist_Dialog->setObjectName(QString::fromUtf8("getchannellist_Dialog"));
        getchannellist_Dialog->resize(1254, 723);
        getchannellist_Dialog->setStyleSheet(QString::fromUtf8("background-image: url(:/Source/@metawalls.jpg);"));
        channels_groupBox = new QGroupBox(getchannellist_Dialog);
        channels_groupBox->setObjectName(QString::fromUtf8("channels_groupBox"));
        channels_groupBox->setGeometry(QRect(300, 110, 631, 461));
        QFont font;
        font.setPointSize(14);
        channels_groupBox->setFont(font);
        channels_groupBox->setStyleSheet(QString::fromUtf8("color: rgb(10, 235, 255);\n"
"background-color: rgb(0, 0, 0);"));
        formLayout = new QFormLayout(channels_groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        pushButton = new QPushButton(channels_groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        formLayout->setWidget(1, QFormLayout::LabelRole, pushButton);

        channels_listView = new QListView(channels_groupBox);
        channels_listView->setObjectName(QString::fromUtf8("channels_listView"));
        channels_listView->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        formLayout->setWidget(0, QFormLayout::SpanningRole, channels_listView);


        retranslateUi(getchannellist_Dialog);

        QMetaObject::connectSlotsByName(getchannellist_Dialog);
    } // setupUi

    void retranslateUi(QDialog *getchannellist_Dialog)
    {
        getchannellist_Dialog->setWindowTitle(QCoreApplication::translate("getchannellist_Dialog", "Dialog", nullptr));
        channels_groupBox->setTitle(QCoreApplication::translate("getchannellist_Dialog", "Channels", nullptr));
        pushButton->setText(QCoreApplication::translate("getchannellist_Dialog", "back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class getchannellist_Dialog: public Ui_getchannellist_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETCHANNELLIST_DIALOG_H
