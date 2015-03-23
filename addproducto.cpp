#include "addproducto.h"
#include "ui_addproducto.h"

AddProducto::AddProducto(QWidget *parent,vector<Producto*>* products) :
    QDialog(parent),
    ui(new Ui::AddProducto)
{
    ui->setupUi(this);
    this->products=products;
}

AddProducto::~AddProducto()
{
    delete ui;
}

void AddProducto::on_pushButton_clicked(){
    string nom = ui->tf_nomp->text().toStdString();
    double pv=ui->sp_pv->value();
    double pc=ui->sp_pc->value();
    Producto* p=new Producto(nom,pv,pc);
    products->push_back(p);
    ui->tf_nomp->setText("");
    ui->sp_pc->setValue(0);
    ui->sp_pv->setValue(0);
}
