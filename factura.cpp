#include "factura.h"
#include "ui_factura.h"
#include <sstream>

using std::stringstream;

Factura::Factura(QWidget *parent,vector<Producto*>* products) :
    QDialog(parent),
    ui(new Ui::Factura)
{
    ui->setupUi(this);
    this->products=products;
    stringstream ss;
    double sub=0;
    for(int i=0;i<products->size();i++){
        ss.str("");
        ss<<i<<"  "<<this->products->at(i)->toString();
        ui->ta_productos->appendPlainText(ss.str().c_str());
        sub+=products->at(i)->getPre_ven();
    }
    ss.str("");
    ss<<sub;
    ui->tf_subtotal->setText(ss.str().c_str());
    ss.str("");
    ss<<sub+sub*0.15;
    ui->tf_total->setText(ss.str().c_str());
    ss.str("");
}

Factura::~Factura()
{
    delete ui;
}
