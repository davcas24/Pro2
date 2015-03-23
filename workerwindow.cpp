#include "workerwindow.h"
#include "ui_workerwindow.h"
#include "producto.h"
#include "usuario.h"
#include <sstream>
#include <vector>
#include "addproducto.h"
#include "addcliente.h"

using std::vector;
using std::stringstream;

WorkerWindow::WorkerWindow(QWidget *parent, vector<Producto*>* products, vector <Usuario*>* users) :
    QDialog(parent),
    ui(new Ui::WorkerWindow)
{
    ui->setupUi(this);
    this->products=products;
    this->users=users;
    stringstream ss;
    for(int i=0; i<users->size();i++){
        if(users->at(i)->getTypeOfClass()==2){
            ss.str("");
            ss<<i<<"   "<<users->at(i)->toString();
            ui->ta_clientes->appendPlainText(ss.str().c_str());
        }
    }
    for(int i=0; i<products->size();i++){
        ss.str("");
        ss<<i<<"   "<<users->at(i)->toString();
        ui->ta_productos ->appendPlainText(ss.str().c_str());
    }
}

WorkerWindow::~WorkerWindow()
{
    delete ui;
}

void WorkerWindow::on_pushButton_3_clicked(){
    int sel=ui->sp_clientdel->value();
    if(sel<users->size()&&users->at(sel)->getTypeOfClass()==2){
        users->erase(users->begin()+sel);
    }
    ui->ta_clientes->clear();
    stringstream ss;
    for(int i=0; i<users->size();i++){
        if(users->at(i)->getTypeOfClass()==2){
            ss.str("");
            ss<<i<<"   "<<users->at(i)->toString();
            ui->ta_clientes->appendPlainText(ss.str().c_str());
        }
    }
}

void WorkerWindow::on_pushButton_4_clicked(){
    int sel=ui->sp_productdel->value();
    if(sel<products->size()){
        products->erase(products->begin()+sel);
    }
    ui->ta_productos->clear();
    stringstream ss;
    for(int i=0; i<products->size();i++){
            ss.str("");
            ss<<i<<"   "<<products->at(i)->toString();
            ui->ta_productos->appendPlainText(ss.str().c_str());
    }
}

void WorkerWindow::on_pushButton_5_clicked(){
    ui->ta_clientes->clear();
    ui->ta_productos->clear();
    stringstream ss;
    for(int i=0; i<users->size();i++){
        if(users->at(i)->getTypeOfClass()==2){
            ss.str("");
            ss<<i<<"   "<<users->at(i)->toString();
            ui->ta_clientes->appendPlainText(ss.str().c_str());
        }
    }
    for(int i=0; i<products->size();i++){
        ss.str("");
        ss<<i<<"   "<<products->at(i)->toString();
        ui->ta_productos ->appendPlainText(ss.str().c_str());
    }
}

void WorkerWindow::on_pushButton_2_clicked(){
    AddProducto ap(0,products);
    ap.setModal(true);
    ap.exec();
}

void WorkerWindow::on_pushButton_clicked(){
    AddCliente ac(0,users);
    ac.setModal(true);
    ac.exec();
}
