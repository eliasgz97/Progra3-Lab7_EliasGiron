#ifndef Earth_bender_H
#define Earth_bender_H
#include "Persona.h"
#include "poderespecial.h"
class Earth_bender : public Persona
{
private:
    string coles;
    string graduacion;
    poderespecial poder;

public:
    Earth_bender();
    Earth_bender(string, string, string, string, int, string, string, poderespecial);
    string getcoles();
    void setcoles(string);
    string getgraduacion();
    void setgraduacion(string);
    virtual string toString();
    poderespecial getpoderespecial();
    void setpoderespecial(poderespecial);
};
#endif
