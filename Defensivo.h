#ifndef Defensivo_H
#define Defensivo_H
#include <string>
using std::string;
#include "poderespecial.h"

class Defensivo: public poderespecial
{
private:
    string resistencia;
    string duracion;
    string nombre;
    int nivel;

public:
    Defensivo();
    Defensivo(string, string, string, int);

    string getresistencia();
    void setresistencia(string);

    string getduracion();
    void setduracion(string);

    string getnombre();
    void setnombre(string);

    string getnivel();
    void setnivel(string);

    virtual string toString();
};
#endif
