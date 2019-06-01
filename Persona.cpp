#include "Persona.h"

Persona:: Persona()
{

}
Persona::Persona(string origen ,string nombre ,int edad ,string sexo, string elemento)
{
    this->origen=origen;
    this->nombre=nombre;
    this->edad=edad;
    this->sexo=sexo;
    this->elemento=elemento;
}
string Persona::getorigen(){
    return origen;
}
void Persona::setorigen(string origen){
    this->origen=origen;
}

string Persona::getnombre(){
    return nombre;
}
void Persona::setnombre(string nombre){
    this->nombre=nombre;
}

int Persona::getedad(){
    return edad;
}
void Persona::setedad(int edad){
    this->edad=edad;
}

string Persona::getsexo(){
    return sexo;
}
void Persona::setsexo(string sexo){
    this->sexo=sexo;
}
string Persona::getelemento(){
    return elemento;
}
void Persona:: setelemento(string elemento){
    this->elemento = elemento;
}
string Persona::toString(){
    string str = std::to_string(edad);
    return origen+" nombre: "+nombre+ "sexo: "+sexo+ "edad: "+str;
}
