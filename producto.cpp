#include "producto.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Producto::Producto(string nombre, double pre_com, double pre_ven){
    setNombre(nombre);
    setPre_com(pre_com);
    setPre_ven(pre_ven);
}

void Producto::setNombre(string nombre){
    this->nombre=nombre;
}

void Producto::setPre_com(double pre_com){
    this->pre_com=pre_com;
}

void Producto::setPre_ven(double pre_ven){
    this->pre_ven=pre_ven;
}

const string Producto::getNombre(){
    return nombre;
}

const double Producto::getPre_com(){
    return pre_com;
}

const double Producto::getPre_ven(){
    return pre_ven;
}

string Producto::toString(){
    stringstream ss;
    ss<<"Nombre "<<nombre<<", Precio de Compra "<<pre_com;
    return ss.str();
}

