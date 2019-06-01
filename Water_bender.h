#ifndef Water_bender_H
#define Water_bender_H
#include "Persona.h"
#include "poderespecial.h"
class Water_bender : public Persona
{
private:
    string tribu;
    string arma;
    poderespecial poder;

public:
    Water_bender();
    Water_bender(string, string, string, string, int, string, string, poderespecial);

    string gettribu();
    void settribu(string);

    string getarma();
    void setarma(string);
    poderespecial getpoderespecial();
    void setpoderespecial(poderespecial);
    virtual string toString();
};
#endif
