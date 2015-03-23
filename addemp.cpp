#include "addemp.h"
#include "ui_addemp.h"
#include "usuario.h"
#include "empleado.h"
#include <vector>

using std::vector;

AddEmp::AddEmp(QWidget *parent, vector<Usuario*>* users) :
    QDialog(parent),
    ui(new Ui::AddEmp)
{
    ui->setupUi(this);
    this->users=users;
    ui->label_existe->setText(".");
}

AddEmp::~AddEmp()
{
    delete ui;
}

void AddEmp::on_pushButton_clicked(){
    string nom,ap,us,pa,id;
    double sal;
    bool proc=true;
    nom=ui->tf_nombre->text().toStdString();
    ap=ui->tf_apellido->text().toStdString();
    us=ui->tf_usuario->text().toStdString();
    pa=ui->tf_pass->text().toStdString();
    id=ui->tf_Id->text().toStdString();
    sal=ui->sp_salario->value();
    for(int i=0;i<users->size();i++){
        if(us==users->at(i)->getUsu()){
            ui->label_existe->setText("Usuario Ya Existe");
            proc=false;
            break;
        }
    }
    if(proc){
        ui->label_existe->setText(".");
        empleado *nuevo=new empleado(nom,ap,us,pa,id,sal);
        users->push_back(nuevo);
        ui->tf_nombre->setText("");
        ui->tf_apellido->setText("");
        ui->tf_usuario->setText("");
        ui->tf_pass->setText("");
        ui->tf_Id->setText("");
        ui->sp_salario->setValue(0.0);
    }
}
