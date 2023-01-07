#include "mywindow.h"
#include "ui_mywindow.h"
#include<vector>
#include<string>
#include<QString>


mywindow::mywindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mywindow)
{
    ui->setupUi(this);
    ui-> stackedWidget-> setCurrentIndex(0);
    db = QSqlDatabase :: addDatabase("QSQLITE");
    db.setDatabaseName("E:/neww.db");
    db.open();
  //  qDebug()<<db.open();
}

mywindow::~mywindow()
{
    db.close();
    delete ui;
}

///new

double mywindow :: getLineEditNum(){
    house=ui->house_rent->text().toInt();
    gas=ui->gass_bill->text().toInt();
    current=ui->current_bill->text().toInt();
    wifi=ui->wifi_bill->text().toInt();
    other=ui->other_cost->text().toInt();
    totalmassmember=ui->total_mess_member->text().toInt();
    totalbazarcost=ui->total_bazar_cost->text().toInt();
    totalmeal=ui->total_meal->text().toInt();
}
//void  mywindow :: writelabelresult(int tempresult)
//{
   // ui->l
//}






void mywindow::on_login_clicked()
{
     ui-> stackedWidget-> setCurrentIndex(1);
}


void mywindow::on_login_pushbutton_clicked()
{
    login_emails = ui->login_email->text();
    login_passwords = ui->login_password->text();
    //qDebug() << login_emails;
    QSqlQuery query;
    query.exec("SELECT * FROM user WHERE email ='"+login_emails+"' AND password ='"+login_passwords+"'");

    if( query.next() )
    {
        ui-> stackedWidget-> setCurrentIndex(3);
    }

    else
    {
        QMessageBox :: warning(this,"login","Wrong email Password");
         msgBox.setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
    }
   ui->login_email-> clear();
   ui->login_password->clear();
}


void mywindow::on_signup_clicked()
{
     ui-> stackedWidget-> setCurrentIndex(2);
}


void mywindow::on_exit_button_clicked()
{
   this->close();
}

void mywindow::on_pushButton_clicked()
{
    signup_name = ui->signup_name->text();
    signup_contact = ui->signup_mobile->text();
    signup_address = ui->signup_address->text();
    signup_email = ui->signup_email->text();
    signup_password = ui->signup_password->text();
    QSqlQuery query;
    query.exec("INSERT INTO user (name,contact,address,email,password) VALUES ('"+signup_name+"','"+signup_contact+"','"+signup_address+"','"+signup_email+"','"+signup_password+"') ");
    ui->signup_name-> clear();
    ui->signup_mobile->clear();
    ui->signup_address->clear();
    ui->signup_email->clear();
    ui->signup_password->clear();

    QMessageBox :: information(this,"signup","Signup is successfull , please login");
     ui-> stackedWidget-> setCurrentIndex(1);


}


void mywindow::on_next_buton_1_clicked()
{
    ui-> stackedWidget-> setCurrentIndex(4);
}


void mywindow::on_next_bytton_2_clicked()
{
    getLineEditNum();
    ui-> stackedWidget-> setCurrentIndex(5);
   ui->labeltotalmeal->setText(QString :: number(totalmeal));
   //labelbazar
   ui->labelbazar->setText(QString :: number(totalbazarcost));
   //labelother
   othcost=house+current+gas+wifi+other;
   totalcost=othcost+totalbazarcost;
   mealrate=totalbazarcost/totalmeal;
   perpersontotal=totalcost/totalmassmember;

   ui->labelother->setText(QString :: number(othcost));
   ui->labeltotalcost->setText(QString :: number(totalcost));
   ui->labelmealrate->setText(QString :: number(mealrate));
   ui->labelperperson->setText(QString :: number(perpersontotal));

}


void mywindow::on_pushButton_3_clicked()
{
    this->close();
}

void mywindow::on_about_clicked()
{
    ui-> stackedWidget-> setCurrentIndex(6);
}

void mywindow::on_pushButton_2_clicked()
{
    ui-> stackedWidget-> setCurrentIndex(0);
}

