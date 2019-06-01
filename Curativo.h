#include "poderespecial.h"
#ifndef CURATIVO_H
#define CURATIVO_H

class Curativo : public poderespecial
{
private:
    string curacion;

public:
    Curativo();
    Curativo(string, string, int);

    string getcuracion();
    void setcuracion(string);

    virtual string toString();
};
#endif