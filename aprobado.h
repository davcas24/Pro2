#ifndef APROBADO_H
#define APROBADO_H
#include <string>

using std::string;

class Aprobado{
string user;
bool apr;

public:
    Aprobado(string,bool);
    const bool getApr();
    void setApr(bool);
    const string getUser();
};

#endif // APROBADO_H
