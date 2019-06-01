#ifndef AIR_BENDER_H
#define AIR_BENDER_H
#include "Persona.h"
#include "poderespecial.h"

class Air_bender: public Persona{
private:
    string cant_pelo;
    string color;
    poderespecial poder;
public:
    Air_bender();
    Air_bender(string, string, string, string, int, string, string, poderespecial);
    string getcant_pelo();
    void setcant_pelo(string);
    string getcolor();
    void setcolor(string);
    string toString();
    poderespecial getpoderespecial();
    void setpoderespecial(poderespecial);
};
#endif