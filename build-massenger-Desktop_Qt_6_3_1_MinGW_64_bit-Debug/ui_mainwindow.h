/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *Login_Box;
    QGridLayout *gridLayout;
    QPushButton *bottom_log;
    QLineEdit *input_username_log;
    QLabel *log_error;
    QLineEdit *input_password_log;
    QLabel *Label_password_log;
    QPushButton *Button_back_log;
    QLabel *Label_username_log;
    QGroupBox *Signin_Box;
    QFormLayout *formLayout;
    QLabel *Label_username_sign;
    QLineEdit *input_username_sign;
    QLabel *Label_password__sign;
    QLineEdit *input_password_sign;
    QLabel *Label_Fname;
    QLineEdit *input_firstname;
    QLabel *Label_lastname;
    QLineEdit *input_lastname;
    QPushButton *Button_back_sign;
    QPushButton *bottom_sign;
    QLabel *sign_error;
    QGroupBox *main_box;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QPushButton *bottom_log_page;
    QPushButton *bottom_sign_page;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1165, 617);
        MainWindow->setStyleSheet(QString::fromUtf8("background-image: url(:/Source/@metawalls.jpg);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Login_Box = new QGroupBox(centralwidget);
        Login_Box->setObjectName(QString::fromUtf8("Login_Box"));
        Login_Box->setGeometry(QRect(460, 190, 251, 281));
        Login_Box->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);\n"
"background-image: url(:/Source/@metawalls.jpg);"));
        gridLayout = new QGridLayout(Login_Box);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        bottom_log = new QPushButton(Login_Box);
        bottom_log->setObjectName(QString::fromUtf8("bottom_log"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe MDL2 Assets")});
        font.setPointSize(14);
        font.setBold(true);
        bottom_log->setFont(font);

        gridLayout->addWidget(bottom_log, 4, 1, 1, 1);

        input_username_log = new QLineEdit(Login_Box);
        input_username_log->setObjectName(QString::fromUtf8("input_username_log"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Variable Text Semiligh")});
        font1.setPointSize(10);
        input_username_log->setFont(font1);
        input_username_log->setStyleSheet(QString::fromUtf8("color: rgb(39, 0, 116);\n"
""));

        gridLayout->addWidget(input_username_log, 1, 0, 1, 2);

        log_error = new QLabel(Login_Box);
        log_error->setObjectName(QString::fromUtf8("log_error"));
        QFont font2;
        font2.setPointSize(9);
        log_error->setFont(font2);
        log_error->setStyleSheet(QString::fromUtf8("color: rgb(125, 0, 2);"));
        log_error->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(log_error, 5, 0, 1, 2);

        input_password_log = new QLineEdit(Login_Box);
        input_password_log->setObjectName(QString::fromUtf8("input_password_log"));
        input_password_log->setFont(font1);
        input_password_log->setStyleSheet(QString::fromUtf8("color: rgb(39, 0, 116);"));

        gridLayout->addWidget(input_password_log, 3, 0, 1, 2);

        Label_password_log = new QLabel(Login_Box);
        Label_password_log->setObjectName(QString::fromUtf8("Label_password_log"));
        QFont font3;
        font3.setPointSize(12);
        Label_password_log->setFont(font3);

        gridLayout->addWidget(Label_password_log, 2, 0, 1, 1);

        Button_back_log = new QPushButton(Login_Box);
        Button_back_log->setObjectName(QString::fromUtf8("Button_back_log"));
        QFont font4;
        font4.setPointSize(15);
        font4.setBold(true);
        Button_back_log->setFont(font4);

        gridLayout->addWidget(Button_back_log, 4, 0, 1, 1);

        Label_username_log = new QLabel(Login_Box);
        Label_username_log->setObjectName(QString::fromUtf8("Label_username_log"));
        Label_username_log->setFont(font3);
        Label_username_log->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(Label_username_log, 0, 0, 1, 1);

        Signin_Box = new QGroupBox(centralwidget);
        Signin_Box->setObjectName(QString::fromUtf8("Signin_Box"));
        Signin_Box->setGeometry(QRect(470, 100, 228, 461));
        Signin_Box->setStyleSheet(QString::fromUtf8("background-image: url(:/Source/@metawalls.jpg);"));
        Signin_Box->setAlignment(Qt::AlignCenter);
        formLayout = new QFormLayout(Signin_Box);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        Label_username_sign = new QLabel(Signin_Box);
        Label_username_sign->setObjectName(QString::fromUtf8("Label_username_sign"));
        Label_username_sign->setFont(font3);
        Label_username_sign->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, Label_username_sign);

        input_username_sign = new QLineEdit(Signin_Box);
        input_username_sign->setObjectName(QString::fromUtf8("input_username_sign"));
        input_username_sign->setFont(font1);
        input_username_sign->setStyleSheet(QString::fromUtf8("color: rgb(39, 0, 116);\n"
""));

        formLayout->setWidget(1, QFormLayout::SpanningRole, input_username_sign);

        Label_password__sign = new QLabel(Signin_Box);
        Label_password__sign->setObjectName(QString::fromUtf8("Label_password__sign"));
        Label_password__sign->setFont(font3);

        formLayout->setWidget(2, QFormLayout::LabelRole, Label_password__sign);

        input_password_sign = new QLineEdit(Signin_Box);
        input_password_sign->setObjectName(QString::fromUtf8("input_password_sign"));
        input_password_sign->setFont(font1);
        input_password_sign->setStyleSheet(QString::fromUtf8("color: rgb(39, 0, 116);"));

        formLayout->setWidget(3, QFormLayout::SpanningRole, input_password_sign);

        Label_Fname = new QLabel(Signin_Box);
        Label_Fname->setObjectName(QString::fromUtf8("Label_Fname"));
        Label_Fname->setFont(font3);

        formLayout->setWidget(4, QFormLayout::LabelRole, Label_Fname);

        input_firstname = new QLineEdit(Signin_Box);
        input_firstname->setObjectName(QString::fromUtf8("input_firstname"));
        input_firstname->setFont(font1);
        input_firstname->setStyleSheet(QString::fromUtf8("color: rgb(39, 0, 116);"));

        formLayout->setWidget(5, QFormLayout::SpanningRole, input_firstname);

        Label_lastname = new QLabel(Signin_Box);
        Label_lastname->setObjectName(QString::fromUtf8("Label_lastname"));
        Label_lastname->setFont(font3);

        formLayout->setWidget(6, QFormLayout::LabelRole, Label_lastname);

        input_lastname = new QLineEdit(Signin_Box);
        input_lastname->setObjectName(QString::fromUtf8("input_lastname"));
        input_lastname->setFont(font1);
        input_lastname->setStyleSheet(QString::fromUtf8("color: rgb(39, 0, 116);"));

        formLayout->setWidget(7, QFormLayout::SpanningRole, input_lastname);

        Button_back_sign = new QPushButton(Signin_Box);
        Button_back_sign->setObjectName(QString::fromUtf8("Button_back_sign"));
        Button_back_sign->setFont(font4);

        formLayout->setWidget(9, QFormLayout::LabelRole, Button_back_sign);

        bottom_sign = new QPushButton(Signin_Box);
        bottom_sign->setObjectName(QString::fromUtf8("bottom_sign"));
        bottom_sign->setFont(font);

        formLayout->setWidget(9, QFormLayout::FieldRole, bottom_sign);

        sign_error = new QLabel(Signin_Box);
        sign_error->setObjectName(QString::fromUtf8("sign_error"));
        sign_error->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));

        formLayout->setWidget(8, QFormLayout::SpanningRole, sign_error);

        main_box = new QGroupBox(centralwidget);
        main_box->setObjectName(QString::fromUtf8("main_box"));
        main_box->setGeometry(QRect(420, 160, 291, 361));
        verticalLayout = new QVBoxLayout(main_box);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(main_box);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("border-image: url(:/Source/chat2.png) 0 0 0 0 stretch stretch;\n"
"setAlignment:(Qt::AlignCenter);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame);

        bottom_log_page = new QPushButton(main_box);
        bottom_log_page->setObjectName(QString::fromUtf8("bottom_log_page"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(bottom_log_page->sizePolicy().hasHeightForWidth());
        bottom_log_page->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(46, 56, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient(0.636872, 0.301, 0, 1.4);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(43, 204, 189, 100));
        gradient.setColorAt(1, QColor(48, 255, 87, 150));
        QBrush brush1(gradient);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient1(0.636872, 0.301, 0, 1.4);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(43, 204, 189, 100));
        gradient1.setColorAt(1, QColor(48, 255, 87, 150));
        QBrush brush2(gradient1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        QLinearGradient gradient2(0.636872, 0.301, 0, 1.4);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(43, 204, 189, 100));
        gradient2.setColorAt(1, QColor(48, 255, 87, 150));
        QBrush brush3(gradient2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient3(0.636872, 0.301, 0, 1.4);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(43, 204, 189, 100));
        gradient3.setColorAt(1, QColor(48, 255, 87, 150));
        QBrush brush4(gradient3);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient4(0.636872, 0.301, 0, 1.4);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0, QColor(43, 204, 189, 100));
        gradient4.setColorAt(1, QColor(48, 255, 87, 150));
        QBrush brush5(gradient4);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        QLinearGradient gradient5(0.636872, 0.301, 0, 1.4);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0, QColor(43, 204, 189, 100));
        gradient5.setColorAt(1, QColor(48, 255, 87, 150));
        QBrush brush6(gradient5);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        QLinearGradient gradient6(0.636872, 0.301, 0, 1.4);
        gradient6.setSpread(QGradient::PadSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0, QColor(43, 204, 189, 100));
        gradient6.setColorAt(1, QColor(48, 255, 87, 150));
        QBrush brush7(gradient6);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        QLinearGradient gradient7(0.636872, 0.301, 0, 1.4);
        gradient7.setSpread(QGradient::PadSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(0, QColor(43, 204, 189, 100));
        gradient7.setColorAt(1, QColor(48, 255, 87, 150));
        QBrush brush8(gradient7);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        QLinearGradient gradient8(0.636872, 0.301, 0, 1.4);
        gradient8.setSpread(QGradient::PadSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0, QColor(43, 204, 189, 100));
        gradient8.setColorAt(1, QColor(48, 255, 87, 150));
        QBrush brush9(gradient8);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush9);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        bottom_log_page->setPalette(palette);
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font5.setPointSize(23);
        font5.setBold(true);
        font5.setItalic(false);
        font5.setUnderline(false);
        font5.setKerning(true);
        font5.setStyleStrategy(QFont::PreferAntialias);
        bottom_log_page->setFont(font5);
        bottom_log_page->setMouseTracking(false);
        bottom_log_page->setFocusPolicy(Qt::StrongFocus);
        bottom_log_page->setStyleSheet(QString::fromUtf8("border-radius: 25px;\n"
"color: rgb(46, 56, 255);\n"
"background:qlineargradient(spread:pad, x1:0.636872, y1:0.301, x2:0, y2:1.4, stop:0 rgba(43, 204, 189, 100), stop:1 rgba(48, 255, 87, 150));\n"
"\n"
"setAlignment:(Qt::AlignCenter);\n"
""));

        verticalLayout->addWidget(bottom_log_page);

        bottom_sign_page = new QPushButton(main_box);
        bottom_sign_page->setObjectName(QString::fromUtf8("bottom_sign_page"));
        sizePolicy.setHeightForWidth(bottom_sign_page->sizePolicy().hasHeightForWidth());
        bottom_sign_page->setSizePolicy(sizePolicy);
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient9(0.636872, 0.301, 0, 1.4);
        gradient9.setSpread(QGradient::PadSpread);
        gradient9.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient9.setColorAt(0, QColor(43, 204, 189, 100));
        gradient9.setColorAt(1, QColor(48, 255, 87, 150));
        QBrush brush10(gradient9);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient10(0.636872, 0.301, 0, 1.4);
        gradient10.setSpread(QGradient::PadSpread);
        gradient10.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient10.setColorAt(0, QColor(43, 204, 189, 100));
        gradient10.setColorAt(1, QColor(48, 255, 87, 150));
        QBrush brush11(gradient10);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush11);
        QLinearGradient gradient11(0.636872, 0.301, 0, 1.4);
        gradient11.setSpread(QGradient::PadSpread);
        gradient11.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient11.setColorAt(0, QColor(43, 204, 189, 100));
        gradient11.setColorAt(1, QColor(48, 255, 87, 150));
        QBrush brush12(gradient11);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient12(0.636872, 0.301, 0, 1.4);
        gradient12.setSpread(QGradient::PadSpread);
        gradient12.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient12.setColorAt(0, QColor(43, 204, 189, 100));
        gradient12.setColorAt(1, QColor(48, 255, 87, 150));
        QBrush brush13(gradient12);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient13(0.636872, 0.301, 0, 1.4);
        gradient13.setSpread(QGradient::PadSpread);
        gradient13.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient13.setColorAt(0, QColor(43, 204, 189, 100));
        gradient13.setColorAt(1, QColor(48, 255, 87, 150));
        QBrush brush14(gradient13);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush14);
        QLinearGradient gradient14(0.636872, 0.301, 0, 1.4);
        gradient14.setSpread(QGradient::PadSpread);
        gradient14.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient14.setColorAt(0, QColor(43, 204, 189, 100));
        gradient14.setColorAt(1, QColor(48, 255, 87, 150));
        QBrush brush15(gradient14);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush15);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        QLinearGradient gradient15(0.636872, 0.301, 0, 1.4);
        gradient15.setSpread(QGradient::PadSpread);
        gradient15.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient15.setColorAt(0, QColor(43, 204, 189, 100));
        gradient15.setColorAt(1, QColor(48, 255, 87, 150));
        QBrush brush16(gradient15);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush16);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        QLinearGradient gradient16(0.636872, 0.301, 0, 1.4);
        gradient16.setSpread(QGradient::PadSpread);
        gradient16.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient16.setColorAt(0, QColor(43, 204, 189, 100));
        gradient16.setColorAt(1, QColor(48, 255, 87, 150));
        QBrush brush17(gradient16);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush17);
        QLinearGradient gradient17(0.636872, 0.301, 0, 1.4);
        gradient17.setSpread(QGradient::PadSpread);
        gradient17.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient17.setColorAt(0, QColor(43, 204, 189, 100));
        gradient17.setColorAt(1, QColor(48, 255, 87, 150));
        QBrush brush18(gradient17);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush18);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        bottom_sign_page->setPalette(palette1);
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font6.setPointSize(15);
        font6.setBold(true);
        font6.setItalic(false);
        font6.setUnderline(false);
        font6.setKerning(true);
        font6.setStyleStrategy(QFont::PreferAntialias);
        bottom_sign_page->setFont(font6);
        bottom_sign_page->setMouseTracking(false);
        bottom_sign_page->setFocusPolicy(Qt::StrongFocus);
        bottom_sign_page->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"color: rgb(46, 56, 255);\n"
"background:qlineargradient(spread:pad, x1:0.636872, y1:0.301, x2:0, y2:1.4, stop:0 rgba(43, 204, 189, 100), stop:1 rgba(48, 255, 87, 150));\n"
"\n"
"setAlignment:(Qt::AlignCenter);\n"
""));

        verticalLayout->addWidget(bottom_sign_page);

        MainWindow->setCentralWidget(centralwidget);
        main_box->raise();
        Login_Box->raise();
        Signin_Box->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Login_Box->setTitle(QString());
        bottom_log->setText(QCoreApplication::translate("MainWindow", "LogIn", nullptr));
        input_username_log->setPlaceholderText(QCoreApplication::translate("MainWindow", "Ex : AkbarAbdi", nullptr));
        log_error->setText(QCoreApplication::translate("MainWindow", "Username or Password is invalid!", nullptr));
        input_password_log->setText(QString());
        input_password_log->setPlaceholderText(QCoreApplication::translate("MainWindow", "Ex : AkbarAbdi", nullptr));
        Label_password_log->setText(QCoreApplication::translate("MainWindow", "Password :", nullptr));
        Button_back_log->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        Label_username_log->setText(QCoreApplication::translate("MainWindow", "UserName :", nullptr));
        Signin_Box->setTitle(QString());
        Label_username_sign->setText(QCoreApplication::translate("MainWindow", "UserName :", nullptr));
        input_username_sign->setPlaceholderText(QCoreApplication::translate("MainWindow", "Ex : AkbarAbdi", nullptr));
        Label_password__sign->setText(QCoreApplication::translate("MainWindow", "Password :", nullptr));
        input_password_sign->setText(QString());
        input_password_sign->setPlaceholderText(QCoreApplication::translate("MainWindow", "Ex : AkbarAbdi", nullptr));
        Label_Fname->setText(QCoreApplication::translate("MainWindow", "FirstName :", nullptr));
        input_firstname->setText(QString());
        input_firstname->setPlaceholderText(QCoreApplication::translate("MainWindow", "Ex : Akbar", nullptr));
        Label_lastname->setText(QCoreApplication::translate("MainWindow", "LastName :", nullptr));
        input_lastname->setText(QString());
        input_lastname->setPlaceholderText(QCoreApplication::translate("MainWindow", "Ex : Abdi", nullptr));
        Button_back_sign->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        bottom_sign->setText(QCoreApplication::translate("MainWindow", "SingIn", nullptr));
        sign_error->setText(QCoreApplication::translate("MainWindow", "Last name warning...", nullptr));
        main_box->setTitle(QString());
#if QT_CONFIG(tooltip)
        bottom_log_page->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        bottom_log_page->setText(QCoreApplication::translate("MainWindow", "LogIn", nullptr));
#if QT_CONFIG(tooltip)
        bottom_sign_page->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        bottom_sign_page->setText(QCoreApplication::translate("MainWindow", "SignIn", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
