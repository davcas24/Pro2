#include "clientwindow.h"
#include "ui_clientwindow.h"
#include <sstream>
#include "factura.h"

using std::stringstream;

ClientWindow::ClientWindow(QWidget *parent,vector<Producto*>* products) :
    QDialog(parent),
    ui(new Ui::ClientWindow)
{
    ui->setupUi(this);
    this->products=products;
    stringstream ss;
    for(int i=0;i<this->products->size();i++){
        ss.str("");
        ss<<i<<this->products->at(i)->toString();
        ui->ta_productos->appendPlainText(ss.str().c_str());
    }
}

ClientWindow::~ClientWindow()
{
    delete ui;
}

void ClientWindow::on_pushButton_clicked(){
    if(ui->sp_buy->value()<products->size()){
        products1->push_back(products->at(ui->sp_buy->value()));
    }
}

void ClientWindow::on_pushButton_2_clicked(){
    if(products1->size()==0){
        ui->label_adv->setText("No ha comprado nada");
    }else{
        ui->label_adv->setText(".");
        Factura f(0,products1);
        f.setModal(true);
        f.exec();

    }
}
