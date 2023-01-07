/********************************************************************************
** Form generated from reading UI file 'mywindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWINDOW_H
#define UI_MYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mywindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *select_page;
    QPushButton *login;
    QPushButton *signup;
    QPushButton *about;
    QLabel *label_25;
    QWidget *login_page;
    QPushButton *login_pushbutton;
    QLineEdit *login_email;
    QLineEdit *login_password;
    QLabel *label;
    QLabel *label_2;
    QWidget *signup_page;
    QLineEdit *signup_name;
    QLineEdit *signup_mobile;
    QLineEdit *signup_address;
    QLineEdit *signup_email;
    QLineEdit *signup_password;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton;
    QWidget *fourth_page;
    QPushButton *exit_button;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *gass_bill;
    QLineEdit *house_rent;
    QLineEdit *current_bill;
    QLineEdit *wifi_bill;
    QLineEdit *other_cost;
    QPushButton *next_buton_1;
    QWidget *page;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLineEdit *total_mess_member;
    QLineEdit *total_bazar_cost;
    QLineEdit *total_meal;
    QPushButton *next_bytton_2;
    QWidget *page_3;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *labeltotalmeal;
    QLabel *labelmealrate;
    QLabel *labelbazar;
    QLabel *labelother;
    QLabel *labelperperson;
    QLabel *label_24;
    QLabel *labeltotalcost;
    QPushButton *pushButton_3;
    QWidget *page_2;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QPushButton *pushButton_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *mywindow)
    {
        if (mywindow->objectName().isEmpty())
            mywindow->setObjectName("mywindow");
        mywindow->setEnabled(true);
        mywindow->resize(800, 600);
        mywindow->setMinimumSize(QSize(800, 600));
        mywindow->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(mywindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 800, 600));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        select_page = new QWidget();
        select_page->setObjectName("select_page");
        select_page->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"background-color: rgb(0, 0, 0);"));
        login = new QPushButton(select_page);
        login->setObjectName("login");
        login->setGeometry(QRect(140, 140, 111, 29));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe Script")});
        font.setPointSize(16);
        login->setFont(font);
        login->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(111, 111, 111);"));
        signup = new QPushButton(select_page);
        signup->setObjectName("signup");
        signup->setGeometry(QRect(520, 140, 141, 29));
        signup->setFont(font);
        signup->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(111, 111, 111);"));
        about = new QPushButton(select_page);
        about->setObjectName("about");
        about->setGeometry(QRect(70, 478, 131, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Script")});
        about->setFont(font1);
        label_25 = new QLabel(select_page);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(230, 30, 341, 41));
        label_25->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);\n"
"font: 18pt \"Segoe Script\";"));
        stackedWidget->addWidget(select_page);
        login_page = new QWidget();
        login_page->setObjectName("login_page");
        login_page->setStyleSheet(QString::fromUtf8(""));
        login_pushbutton = new QPushButton(login_page);
        login_pushbutton->setObjectName("login_pushbutton");
        login_pushbutton->setGeometry(QRect(240, 210, 83, 29));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("8514oem")});
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setItalic(true);
        login_pushbutton->setFont(font2);
        login_pushbutton->setStyleSheet(QString::fromUtf8("color: rgb(94, 255, 166);\n"
"background-color: rgb(0, 85, 127);"));
        login_email = new QLineEdit(login_page);
        login_email->setObjectName("login_email");
        login_email->setGeometry(QRect(180, 110, 231, 31));
        login_email->setStyleSheet(QString::fromUtf8(""));
        login_password = new QLineEdit(login_page);
        login_password->setObjectName("login_password");
        login_password->setGeometry(QRect(180, 160, 231, 28));
        login_password->setEchoMode(QLineEdit::Password);
        label = new QLabel(login_page);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 110, 101, 20));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Snap ITC")});
        font3.setPointSize(16);
        label->setFont(font3);
        label_2 = new QLabel(login_page);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 160, 151, 20));
        label_2->setFont(font3);
        stackedWidget->addWidget(login_page);
        signup_page = new QWidget();
        signup_page->setObjectName("signup_page");
        signup_page->setStyleSheet(QString::fromUtf8(""));
        signup_name = new QLineEdit(signup_page);
        signup_name->setObjectName("signup_name");
        signup_name->setGeometry(QRect(270, 70, 431, 28));
        signup_mobile = new QLineEdit(signup_page);
        signup_mobile->setObjectName("signup_mobile");
        signup_mobile->setGeometry(QRect(270, 110, 241, 28));
        signup_address = new QLineEdit(signup_page);
        signup_address->setObjectName("signup_address");
        signup_address->setGeometry(QRect(270, 150, 431, 28));
        signup_email = new QLineEdit(signup_page);
        signup_email->setObjectName("signup_email");
        signup_email->setGeometry(QRect(270, 190, 431, 28));
        signup_password = new QLineEdit(signup_page);
        signup_password->setObjectName("signup_password");
        signup_password->setGeometry(QRect(270, 230, 241, 28));
        signup_password->setEchoMode(QLineEdit::Password);
        label_3 = new QLabel(signup_page);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 70, 111, 20));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Wide Latin")});
        font4.setPointSize(12);
        label_3->setFont(font4);
        label_4 = new QLabel(signup_page);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(60, 110, 191, 20));
        label_4->setFont(font4);
        label_5 = new QLabel(signup_page);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(60, 150, 141, 20));
        label_5->setFont(font4);
        label_6 = new QLabel(signup_page);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(60, 190, 131, 20));
        label_6->setFont(font4);
        label_7 = new QLabel(signup_page);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(60, 230, 171, 20));
        label_7->setFont(font4);
        pushButton = new QPushButton(signup_page);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(270, 290, 83, 21));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("8514oem")});
        font5.setBold(true);
        pushButton->setFont(font5);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 85, 127);"));
        stackedWidget->addWidget(signup_page);
        fourth_page = new QWidget();
        fourth_page->setObjectName("fourth_page");
        exit_button = new QPushButton(fourth_page);
        exit_button->setObjectName("exit_button");
        exit_button->setGeometry(QRect(690, 520, 83, 29));
        label_8 = new QLabel(fourth_page);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(210, 0, 381, 61));
        label_8->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";"));
        label_9 = new QLabel(fourth_page);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(50, 110, 101, 20));
        label_10 = new QLabel(fourth_page);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(50, 150, 101, 20));
        label_11 = new QLabel(fourth_page);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(50, 190, 101, 20));
        label_12 = new QLabel(fourth_page);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(50, 230, 111, 20));
        label_13 = new QLabel(fourth_page);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(50, 270, 101, 20));
        gass_bill = new QLineEdit(fourth_page);
        gass_bill->setObjectName("gass_bill");
        gass_bill->setGeometry(QRect(150, 150, 113, 28));
        house_rent = new QLineEdit(fourth_page);
        house_rent->setObjectName("house_rent");
        house_rent->setGeometry(QRect(150, 110, 113, 28));
        current_bill = new QLineEdit(fourth_page);
        current_bill->setObjectName("current_bill");
        current_bill->setGeometry(QRect(150, 190, 113, 28));
        wifi_bill = new QLineEdit(fourth_page);
        wifi_bill->setObjectName("wifi_bill");
        wifi_bill->setGeometry(QRect(150, 230, 113, 28));
        other_cost = new QLineEdit(fourth_page);
        other_cost->setObjectName("other_cost");
        other_cost->setGeometry(QRect(150, 270, 113, 28));
        next_buton_1 = new QPushButton(fourth_page);
        next_buton_1->setObjectName("next_buton_1");
        next_buton_1->setGeometry(QRect(160, 330, 83, 29));
        stackedWidget->addWidget(fourth_page);
        page = new QWidget();
        page->setObjectName("page");
        label_14 = new QLabel(page);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(200, 20, 381, 20));
        label_14->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";"));
        label_15 = new QLabel(page);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(50, 110, 161, 20));
        label_16 = new QLabel(page);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(50, 160, 131, 20));
        label_17 = new QLabel(page);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(50, 200, 131, 31));
        total_mess_member = new QLineEdit(page);
        total_mess_member->setObjectName("total_mess_member");
        total_mess_member->setGeometry(QRect(220, 110, 113, 28));
        total_bazar_cost = new QLineEdit(page);
        total_bazar_cost->setObjectName("total_bazar_cost");
        total_bazar_cost->setGeometry(QRect(220, 160, 113, 28));
        total_meal = new QLineEdit(page);
        total_meal->setObjectName("total_meal");
        total_meal->setGeometry(QRect(220, 200, 113, 28));
        next_bytton_2 = new QPushButton(page);
        next_bytton_2->setObjectName("next_bytton_2");
        next_bytton_2->setGeometry(QRect(240, 250, 83, 29));
        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        label_18 = new QLabel(page_3);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(90, 160, 81, 31));
        label_19 = new QLabel(page_3);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(330, 40, 141, 31));
        label_20 = new QLabel(page_3);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(90, 120, 81, 21));
        label_21 = new QLabel(page_3);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(90, 210, 121, 31));
        label_22 = new QLabel(page_3);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(90, 260, 81, 21));
        label_23 = new QLabel(page_3);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(70, 360, 151, 31));
        labeltotalmeal = new QLabel(page_3);
        labeltotalmeal->setObjectName("labeltotalmeal");
        labeltotalmeal->setGeometry(QRect(210, 120, 63, 20));
        labelmealrate = new QLabel(page_3);
        labelmealrate->setObjectName("labelmealrate");
        labelmealrate->setGeometry(QRect(210, 170, 63, 20));
        labelbazar = new QLabel(page_3);
        labelbazar->setObjectName("labelbazar");
        labelbazar->setGeometry(QRect(210, 220, 63, 20));
        labelother = new QLabel(page_3);
        labelother->setObjectName("labelother");
        labelother->setGeometry(QRect(210, 260, 63, 20));
        labelperperson = new QLabel(page_3);
        labelperperson->setObjectName("labelperperson");
        labelperperson->setGeometry(QRect(250, 370, 63, 20));
        label_24 = new QLabel(page_3);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(90, 310, 71, 21));
        labeltotalcost = new QLabel(page_3);
        labeltotalcost->setObjectName("labeltotalcost");
        labeltotalcost->setGeometry(QRect(210, 310, 63, 20));
        pushButton_3 = new QPushButton(page_3);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(640, 490, 83, 29));
        stackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        label_26 = new QLabel(page_2);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(50, 40, 731, 51));
        label_26->setStyleSheet(QString::fromUtf8("font: italic 10pt \"Sitka\";\n"
""));
        label_27 = new QLabel(page_2);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(50, 100, 731, 31));
        label_27->setStyleSheet(QString::fromUtf8("font: italic 10pt \"Sitka\";"));
        label_28 = new QLabel(page_2);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(50, 149, 731, 41));
        label_28->setStyleSheet(QString::fromUtf8("font: italic 10pt \"Sitka\";"));
        label_29 = new QLabel(page_2);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(50, 210, 741, 31));
        label_29->setStyleSheet(QString::fromUtf8("font: italic 10pt \"Sitka\";"));
        label_30 = new QLabel(page_2);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(50, 260, 731, 41));
        label_30->setStyleSheet(QString::fromUtf8("font: italic 10pt \"Sitka\";"));
        label_31 = new QLabel(page_2);
        label_31->setObjectName("label_31");
        label_31->setGeometry(QRect(50, 320, 331, 20));
        label_31->setStyleSheet(QString::fromUtf8("font: italic 10pt \"Sitka\";\n"
"color: rgb(85, 170, 0);"));
        label_32 = new QLabel(page_2);
        label_32->setObjectName("label_32");
        label_32->setGeometry(QRect(50, 360, 291, 20));
        label_32->setStyleSheet(QString::fromUtf8("font: 10pt \"Sitka\";\n"
"color: rgb(85, 170, 0);\n"
""));
        label_33 = new QLabel(page_2);
        label_33->setObjectName("label_33");
        label_33->setGeometry(QRect(50, 400, 671, 16));
        label_33->setStyleSheet(QString::fromUtf8("font: italic 10pt \"Sitka\";"));
        label_34 = new QLabel(page_2);
        label_34->setObjectName("label_34");
        label_34->setGeometry(QRect(50, 430, 311, 20));
        label_34->setStyleSheet(QString::fromUtf8("font: italic 10pt \"Sitka\";"));
        pushButton_2 = new QPushButton(page_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(640, 500, 83, 29));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: italic 10pt \"Sitka\";\n"
"color: rgb(255, 170, 255);"));
        stackedWidget->addWidget(page_2);
        mywindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(mywindow);
        statusbar->setObjectName("statusbar");
        mywindow->setStatusBar(statusbar);

        retranslateUi(mywindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(mywindow);
    } // setupUi

    void retranslateUi(QMainWindow *mywindow)
    {
        mywindow->setWindowTitle(QCoreApplication::translate("mywindow", "mywindow", nullptr));
        login->setText(QCoreApplication::translate("mywindow", "LOGIN", nullptr));
        signup->setText(QCoreApplication::translate("mywindow", "SIGN UP", nullptr));
        about->setText(QCoreApplication::translate("mywindow", "About", nullptr));
        label_25->setText(QCoreApplication::translate("mywindow", "BACHELOR'S AUDIT", nullptr));
        login_pushbutton->setText(QCoreApplication::translate("mywindow", "LOGIN", nullptr));
        login_email->setPlaceholderText(QCoreApplication::translate("mywindow", "E-mail", nullptr));
        login_password->setPlaceholderText(QCoreApplication::translate("mywindow", "Password", nullptr));
        label->setText(QCoreApplication::translate("mywindow", "E-mail", nullptr));
        label_2->setText(QCoreApplication::translate("mywindow", "Password", nullptr));
        signup_name->setPlaceholderText(QCoreApplication::translate("mywindow", "Name", nullptr));
        signup_mobile->setPlaceholderText(QCoreApplication::translate("mywindow", "Mobile No.", nullptr));
        signup_address->setPlaceholderText(QCoreApplication::translate("mywindow", "Address", nullptr));
        signup_email->setPlaceholderText(QCoreApplication::translate("mywindow", "E-mail", nullptr));
        signup_password->setText(QString());
        signup_password->setPlaceholderText(QCoreApplication::translate("mywindow", "Password", nullptr));
        label_3->setText(QCoreApplication::translate("mywindow", "Name", nullptr));
        label_4->setText(QCoreApplication::translate("mywindow", "Mobile No.", nullptr));
        label_5->setText(QCoreApplication::translate("mywindow", "Address", nullptr));
        label_6->setText(QCoreApplication::translate("mywindow", "E-mail", nullptr));
        label_7->setText(QCoreApplication::translate("mywindow", "Password", nullptr));
        pushButton->setText(QCoreApplication::translate("mywindow", "SIGN UP", nullptr));
        exit_button->setText(QCoreApplication::translate("mywindow", "Exit", nullptr));
        label_8->setText(QCoreApplication::translate("mywindow", "Please enter mess cost details...", nullptr));
        label_9->setText(QCoreApplication::translate("mywindow", "1. House Rent.", nullptr));
        label_10->setText(QCoreApplication::translate("mywindow", "2. Gass Bill.", nullptr));
        label_11->setText(QCoreApplication::translate("mywindow", "3. Current Bill", nullptr));
        label_12->setText(QCoreApplication::translate("mywindow", "4. Wifi Bill", nullptr));
        label_13->setText(QCoreApplication::translate("mywindow", "5. Others Cost", nullptr));
        next_buton_1->setText(QCoreApplication::translate("mywindow", "NEXT", nullptr));
        label_14->setText(QCoreApplication::translate("mywindow", "Enter your Meal & Bazar Expenses.....", nullptr));
        label_15->setText(QCoreApplication::translate("mywindow", "1. Total Mess Member.", nullptr));
        label_16->setText(QCoreApplication::translate("mywindow", "2. Total Bazar Cost.", nullptr));
        label_17->setText(QCoreApplication::translate("mywindow", "3. Total Meal.", nullptr));
        next_bytton_2->setText(QCoreApplication::translate("mywindow", "NEXT", nullptr));
        label_18->setText(QCoreApplication::translate("mywindow", "Meal Rate", nullptr));
        label_19->setText(QCoreApplication::translate("mywindow", "Mass Month Details", nullptr));
        label_20->setText(QCoreApplication::translate("mywindow", " Total meal", nullptr));
        label_21->setText(QCoreApplication::translate("mywindow", " Bazar Cost", nullptr));
        label_22->setText(QCoreApplication::translate("mywindow", "Other's Cost", nullptr));
        label_23->setText(QCoreApplication::translate("mywindow", "Per Person Total Cost", nullptr));
        labeltotalmeal->setText(QString());
        labelmealrate->setText(QCoreApplication::translate("mywindow", "TextLabel", nullptr));
        labelbazar->setText(QCoreApplication::translate("mywindow", "TextLabel", nullptr));
        labelother->setText(QCoreApplication::translate("mywindow", "TextLabel", nullptr));
        labelperperson->setText(QCoreApplication::translate("mywindow", "TextLabel", nullptr));
        label_24->setText(QCoreApplication::translate("mywindow", "Total cost", nullptr));
        labeltotalcost->setText(QCoreApplication::translate("mywindow", "TextLabel", nullptr));
        pushButton_3->setText(QCoreApplication::translate("mywindow", "Exit", nullptr));
        label_26->setText(QCoreApplication::translate("mywindow", "Alhamdulillah; By using this application you can get very few benefits.Notable", nullptr));
        label_27->setText(QCoreApplication::translate("mywindow", " among them, the details of the life of a bachelor! For example, you will get a", nullptr));
        label_28->setText(QCoreApplication::translate("mywindow", " sample of all expenses for the whole month and at the end of the month how", nullptr));
        label_29->setText(QCoreApplication::translate("mywindow", " much money was spent per person.I hope, I can benefit you a little in this", nullptr));
        label_30->setText(QCoreApplication::translate("mywindow", "small work, in sha Allah!", nullptr));
        label_31->setText(QCoreApplication::translate("mywindow", "E-mail :mizanulhoque2021@gmail.com", nullptr));
        label_32->setText(QCoreApplication::translate("mywindow", "Mobile No : 01321872868", nullptr));
        label_33->setText(QCoreApplication::translate("mywindow", "If You Face Any Problem Regarding Bachelor Audit App or want to know ", nullptr));
        label_34->setText(QCoreApplication::translate("mywindow", "anything please contact us.", nullptr));
        pushButton_2->setText(QCoreApplication::translate("mywindow", "Home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mywindow: public Ui_mywindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWINDOW_H
