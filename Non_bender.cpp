#include "Non_bender.h"
#include "Persona.h"

Non_bender::Non_bender()
{

}
Non_bender::Non_bender(string trabajo ,string fuerza ,string velocidad, string origen, string nombre, int edad, string sexo, string elemento): Persona(origen, nombre, edad, sexo, elemento){

    this->trabajo=trabajo;
    this->fuerza=fuerza;
    this->velocidad=velocidad;
}
string Non_bender::gettrabajo(){
    return trabajo;
}
void Non_bender::settrabajo(string trabajo){
    this->trabajo=trabajo;
}

string Non_bender::getfuerza(){
    return fuerza;
}
void Non_bender::setfuerza(string fuerza){
    this->fuerza=fuerza;
}

string Non_bender::getvelocidad(){
    return velocidad;
}
void Non_bender::setvelocidad(string velocidad){
    this->velocidad=velocidad;
}
string Non_bender::toString(){
    return "trabajo: "+trabajo+" fuerza: "+fuerza+"velocidad: "+velocidad;
}
