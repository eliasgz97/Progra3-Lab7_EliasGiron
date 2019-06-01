#ifndef Ofensivo_H
#define Ofensivo_H
#include "poderespecial.h"

class Ofensivo : public poderespecial
{
private:
    string rango;
    string fuerza;

public:
    Ofensivo();
    Ofensivo(string, string, string, int);

    string getrango();
    void setrango(string);

    string getfuerza();
    void setfuerza(string);

    virtual string toString();
};
#endif
