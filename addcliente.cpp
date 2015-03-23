#include "addcliente.h"
#include "ui_addcliente.h"
#include <QDialog>
#include "cliente.h"

AddCliente::AddCliente(QWidget *parent,vector<Usuario*>* users) :
    QDialog(parent),
    ui(new Ui::AddCliente)
{
    ui->setupUi(this);
    this->users=users;
}

AddCliente::~AddCliente()
{
    delete ui;
}

void AddCliente::on_pushButton_clicked(){
    string nom = ui->tf_nom->text().toStdString();
    string ape = ui->tf_ape->text().toStdString();
    string usu = ui->tf_usu->text().toStdString();
    string pass = ui->tf_p->text().toStdString();
    cliente *p=new cliente(nom,ape,usu,pass);
    users->push_back(p);
    ui->tf_nom->setText("");
    ui->tf_ape->setText("");
    ui->tf_usu->setText("");
    ui->tf_p->setText("");
}
