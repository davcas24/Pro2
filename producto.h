#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>

using std::string;

class Producto{
string nombre;
double pre_ven,pre_com;

public:
    Producto(string,double,double);
    string toString();
    void setNombre(string);
    void setPre_ven(double);
    void setPre_com(double);
    const string getNombre();
    const double getPre_ven();
    const double getPre_com();
    double Total();
};

#endif // PRODUCTO_H
