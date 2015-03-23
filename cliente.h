#ifndef CLIENTE_H
#define CLIENTE_H

#include "producto.h"
#include "usuario.h"
#include <string>
#include <vector>

using std::string;
using std::vector;

class cliente: public Usuario{
//vector<Producto> list;

public:
    cliente(string,string,string,string);
    virtual string toString();
    //void setList(vector<Producto>);
    //const vector<Producto> getList();
    virtual string rest_pass();
    virtual int getTypeOfClass();
};

#endif // CLIENTE_H
