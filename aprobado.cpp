#include "aprobado.h"

Aprobado::Aprobado(string user, bool apr){
    this->user = user;
    this->apr = apr;
}

const bool Aprobado::getApr(){
    return apr;
}

void Aprobado::setApr(bool apr){
    this->apr = apr;
}

const string Aprobado::getUser(){
    return user;
}
