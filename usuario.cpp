#include "usuario.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Usuario::Usuario(string nombre, string apellido, string usu, string pass){
    setNombre(nombre);
    setApellido(apellido);
    setUsu(usu);
    setPass(pass);
}

void Usuario::setNombre(string nombre){
    this->nombre=nombre;
}

void Usuario::setApellido(string apellido){
    this->apellido=apellido;
}

void Usuario::setUsu(string usu){
    this->usu=usu;
}

void Usuario::setPass(string pass){
    this->pass=pass;
}

const string Usuario::getNombre(){
    return nombre;
}

const string Usuario::getApellido(){
    return apellido;
}

const string Usuario::getUsu(){
    return usu;
}

const string Usuario::getPass(){
    return pass;
}

string Usuario::toString(){
    stringstream ss;
    ss<<"Nombre "<<nombre<<" Apellido "<<apellido<<" Usuario "<<usu<<" Contraseña "
        <<pass;
    return ss.str();
}
