#include "cliente.h"
#include "producto.h"
#include "usuario.h"
#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using std::string;
using std::vector;
using std::stringstream;

cliente::cliente(string nombre,string apellido,string usu,string pass)
 :Usuario(nombre,apellido,usu,pass){

}

string cliente::toString(){
    stringstream ss;
    ss<<Usuario::toString();
    return ss.str();
}



string cliente::rest_pass(){
    return Usuario::getPass();
}

int cliente::getTypeOfClass(){
    return 2;
}
