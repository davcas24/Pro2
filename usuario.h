#ifndef USUARIO_H
#define USUARIO_H

#include <string>

using std::string;

class Usuario{
string nombre, apellido, usu, pass;

public:
    Usuario(string,string,string,string);
    virtual string toString();
    void setNombre(string);
    void setApellido(string);
    void setUsu(string);
    void setPass(string);
    const string getNombre();
    const string getApellido();
    const string getUsu();
    const string getPass();
    virtual string rest_pass()=0;
    virtual int getTypeOfClass()=0;
};

#endif // USUARIO_H
