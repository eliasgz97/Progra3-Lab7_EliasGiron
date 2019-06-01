#ifndef PERSONA_H
#define PERSONA_H
#include <string>
#include <iostream>
using std::string;
class Persona
{
protected:
    string origen;
    string nombre;
    int edad;
    string sexo;
    string elemento;

public:
    Persona();
    Persona(string, string, int, string, string);
    string getorigen();
    string getelemento();
    void setelemento(string);
    void setorigen(string);
    string getnombre();
    void setnombre(string);
    int getedad();
    void setedad(int);
    string getsexo();
    void setsexo(string);
    virtual string toString();
};
#endif
