#ifndef MYWINDOW_H
#define MYWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>

QT_BEGIN_NAMESPACE
namespace Ui { class mywindow; }
QT_END_NAMESPACE

class mywindow : public QMainWindow
{
    Q_OBJECT
    double house=0,gas=0,current=0,wifi=0,other=0,cost=0,totalcost=0;
    double totalmassmember=0,totalbazarcost=0,totalmeal=0;
    double othcost=0;
    double mealrate=0,perpersontotal=0;
   double getLineEditNum();
   void writelabelresult(int tempresult);

public:
    mywindow(QWidget *parent = nullptr);
    ~mywindow();

private slots:
   // void on_login_clicked();

    void on_login_pushbutton_clicked();

    void on_login_clicked();

    void on_signup_clicked();

    void on_exit_button_clicked();

    void on_pushButton_clicked();

    void on_next_buton_1_clicked();

    void on_next_bytton_2_clicked();

  //  void on_pushButton_2_clicked();

   // void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    //void on_signup_password_cursorPositionChanged(int arg1, int arg2);

    void on_about_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::mywindow *ui;
    QString login_emails, login_passwords,signup_name,signup_email,signup_contact,signup_address,signup_password;
    QSqlDatabase db;
    QMessageBox msgBox;
};
#endif // MYWINDOW_H
