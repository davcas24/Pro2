#ifndef GERENTE_H
#define GERENTE_H

#include "usuario.h"
#include <string>
#include <vector>

using std::vector;
using std::string;

class Gerente: public Usuario{
vector<string> cambiados;

public:
    Gerente(string,string,string,string);
    virtual string toString();
    void despedir(int,vector<Usuario*>* l=0);
    void setCambiado(string);
    const vector<string> getCambiados();
    virtual string rest_pass();
    virtual int getTypeOfClass();

};

#endif // GERENTE_H
