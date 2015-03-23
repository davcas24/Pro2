#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <string>
#include "usuario.h"

using std::string;

class empleado: public Usuario {
string Id;
double salario;

public:
    empleado(string,string,string,string,string,double);
    virtual string toString();
    void setId(string);
    void setSalario(double);
    const string getId();
    const double getSalario();
    virtual string rest_pass();
    virtual int getTypeOfClass();

};

#endif // EMPLEADO_H
