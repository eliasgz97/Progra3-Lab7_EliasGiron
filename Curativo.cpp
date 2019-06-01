#include "Curativo.h"

Curativo::Curativo()
{
}
Curativo::Curativo(string curacion, string nombre, int nivel) : poderespecial(nombre, nivel)
{
    this->curacion = curacion;
}
string Curativo::getcuracion()
{
    return curacion;
}
void Curativo::setcuracion(string curacion)
{
    this->curacion = curacion;
}
string Curativo::toString()
{
    return "curacion: "+curacion;
}
