
#ifndef Non_bender_H
#define Non_bender_H
#include "Persona.h"
class Non_bender: public Persona{
private:
    string trabajo;
    string fuerza;
    string velocidad;

public:
    Non_bender();
    Non_bender(string, string, string, string, string, int, string, string);
    string gettrabajo();
    void settrabajo(string);
    string getfuerza();
    void setfuerza(string);
    string getvelocidad();
    void setvelocidad(string);
    string toString();
};
#endif
