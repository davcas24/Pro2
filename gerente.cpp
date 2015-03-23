#include "gerente.h"
#include "usuario.h"
#include <string>
#include <vector>
#include <sstream>

using std::vector;
using std::string;
using std::stringstream;

Gerente::Gerente(string nombre,string apellido,string usu,string pass):
    Usuario::Usuario(nombre,apellido,usu,pass){

}

string Gerente::toString(){
    stringstream ss;
    ss<<"Gerente "<<Usuario::toString();
    return ss.str();
}

void Gerente::despedir(int pos, vector<Usuario*> *lista){
    lista->erase(lista->begin()+pos);
}

void Gerente::setCambiado(string nuevo){
    cambiados.push_back(nuevo);
}

const vector<string> Gerente::getCambiados(){
    return cambiados;
}

string Gerente::rest_pass(){
    return "admin";
}

int Gerente::getTypeOfClass(){
    return 1;
}
