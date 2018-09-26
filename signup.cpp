#include "signup.h"
#include "ui_signup.h"

Signup::Signup(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::signup)
{
    ui->setupUi(this);
    this->setWindowTitle("注册");

    //设置正则
    QRegExp rule1("[0-9a-zA-Z_]{6, 12}");
    ui->idLineEdit->setValidator(new QRegExpValidator(rule1, this));
}

Signup::~Signup()
{
    delete ui;
}

//界面入口
void Signup::run()
{
    this->show();
}

//注册按钮
void Signup::on_registButton_clicked()
{

}
