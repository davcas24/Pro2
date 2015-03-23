#include "empleado.h"
#include "usuario.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

empleado::empleado(string nombre,string apellido,string usu ,string pass,string Id, double salario)
    :Usuario(nombre,apellido,usu,pass){
    setId(Id);
    setSalario(salario);
}

string empleado::toString(){
    stringstream ss;
    ss<<Usuario::toString()<<" Id "<<Id;
    return ss.str();
}

void empleado::setId(string Id){
     this->Id=Id;
}

const string empleado::getId(){
    return Id;
}

string empleado::rest_pass(){
    return Usuario::getUsu();
}

int empleado::getTypeOfClass(){
    return 3;
}

void empleado::setSalario(double salario){
    this->salario=salario;
}

const double empleado::getSalario(){
    return salario;
}
