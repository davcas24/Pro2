#ifndef ADDPRODUCTO_H
#define ADDPRODUCTO_H
#include "producto.h"
#include <vector>

using std::vector;

#include <QDialog>

namespace Ui {
class AddProducto;
}

class AddProducto : public QDialog
{
    Q_OBJECT

public:
    explicit AddProducto(QWidget *parent = 0, vector<Producto*>* products = 0);
    ~AddProducto();

private slots:
    void on_pushButton_clicked();

private:
    Ui::AddProducto *ui;
    vector<Producto*>* products;
};

#endif // ADDPRODUCTO_H
