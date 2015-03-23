#include "managerwindow.h"
#include "ui_managerwindow.h"
#include <sstream>
#include "addemp.h"

using std::stringstream;
using std::vector;

ManagerWindow::ManagerWindow(QWidget *parent,vector<Usuario*>* usus , vector<Aprobado*>* l) :
    QDialog(parent),
    ui(new Ui::ManagerWindow)
{
    this->users=usus;
    this->listrecovery=l;
    ui->setupUi(this);
    stringstream ss;
    for(int i=0; i<listrecovery->size();i++){
        if(listrecovery->at(i)->getApr()==false){
            ss<<i<<"  "<<(listrecovery->at(i)->getUser());
            ui->ta_changepass->appendPlainText(ss.str().c_str());
            ss.str("");
        }
    }
    for(int i=0;i<users->size();i++){
        if(users->at(i)->getTypeOfClass()==3){
            ss<<i<<"  "<<users->at(i)->toString();
            ui->ta_emplist->appendPlainText(ss.str().c_str());
            ss.str("");
        }
    }


}

ManagerWindow::~ManagerWindow()
{
    delete ui;
}

void ManagerWindow::on_pushButton_2_clicked(){
    int despedido=ui->sp_fire->value();
    if(despedido < users->size()||despedido==0){
    if(users->at(despedido)->getTypeOfClass()==3){
        users->erase(users->begin()+despedido);
    }
        ui->ta_emplist->clear();
        stringstream ss;
        for(int i=0;i<users->size();i++){
            if(users->at(i)->getTypeOfClass()==3){
                ss<<i<<"  "<<users->at(i)->toString();
                ui->ta_emplist->appendPlainText(ss.str().c_str());
                ss.str("");
            }
        }
    }
}

void ManagerWindow::on_pushButton_3_clicked(){
    AddEmp ae(0,users);
    ae.setModal(true);
    ae.exec();
}

void ManagerWindow::on_pushButton_4_clicked(){
    ui->ta_changepass->clear();
    ui->ta_emplist->clear();
    stringstream ss;
    for(int i=0; i<listrecovery->size();i++){
        if(listrecovery->at(i)->getApr()==false){
            ss<<i<<"  "<<(listrecovery->at(i)->getUser());
            ui->ta_changepass->appendPlainText(ss.str().c_str());
            ss.str("");
        }
    }
    for(int i=0;i<users->size();i++){
        if(users->at(i)->getTypeOfClass()==3){
            ss<<i<<"  "<<users->at(i)->toString();
            ui->ta_emplist->appendPlainText(ss.str().c_str());
            ss.str("");
        }
    }
}

void ManagerWindow::on_pushButton_clicked(){
    int seleccionado=ui->sp_auto->value();
    if(seleccionado < listrecovery->size()||seleccionado==0){
        listrecovery->at(seleccionado)->setApr(true);
    }
    ui->ta_changepass->clear();
    stringstream ss;
    for(int i=0; i<listrecovery->size();i++){
        if(listrecovery->at(seleccionado)->getApr()==false){
            ss<<i<<"  "<<(listrecovery->at(i)->getUser());
            ui->ta_changepass->appendPlainText(ss.str().c_str());
            ss.str("");
        }
    }
}
