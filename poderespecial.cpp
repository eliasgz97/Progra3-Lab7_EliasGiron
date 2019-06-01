#include "poderespecial.h"
#include <string>
#include <iostream>
using std::string;
poderespecial::poderespecial()
{
}
poderespecial::poderespecial(string nombre, int nivel)
{
    this->nombre = nombre;
    this->nivel = nivel;
}
string poderespecial::getnombre()
{
    return nombre;
}
void poderespecial::setnombre(string nombre)
{
    this->nombre = nombre;
}

int poderespecial::getnivel()
{
    return nivel;
}
void poderespecial::setnivel(int nivel)
{
    this->nivel = nivel;
}
string poderespecial::toString(){
    string str = std::to_string(nivel);
    return "nombre: "+nombre+" nivel: "+str;
}
