#include "Defensivo.h"
#include "poderespecial.h"

Defensivo::Defensivo()
{
}
Defensivo::Defensivo(string resistencia, string duracion, string nombre, int nivel): poderespecial(nombre, nivel)
{
    this->resistencia = resistencia;
    this->duracion = duracion;
}
string Defensivo::getresistencia()
{
    return resistencia;
}
void Defensivo::setresistencia(string resistencia)
{
    this->resistencia = resistencia;
}

string Defensivo::getduracion()
{
    return duracion;
}
void Defensivo::setduracion(string duracion)
{
    this->duracion = duracion;
}
string Defensivo::toString()
{
    return "resistencia: "+resistencia+" duracion: "+duracion;
}
