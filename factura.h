#ifndef FACTURA_H
#define FACTURA_H
#include "producto.h"
#include <vector>

using std::vector;

#include <QDialog>

namespace Ui {
class Factura;
}

class Factura : public QDialog
{
    Q_OBJECT

public:
    explicit Factura(QWidget *parent = 0, vector<Producto*>* products = 0);
    ~Factura();

private:
    Ui::Factura *ui;
    vector<Producto*>* products;
};

#endif // FACTURA_H
