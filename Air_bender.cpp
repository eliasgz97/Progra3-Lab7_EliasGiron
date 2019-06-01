#include "Air_bender.h"
#include "Persona.h"
#include <string>
using std::string;

Air_bender::Air_bender()
{

}
Air_bender::Air_bender(string cant_pelo ,string color, string origen, string nombre, int edad, string sexo, string elemento, poderespecial poder): Persona(origen, nombre, edad, sexo, elemento)
{
    this->cant_pelo=cant_pelo;
    this->color=color;
    this->poder;
}
string Air_bender::getcant_pelo(){
    return cant_pelo;
}
void Air_bender::setcant_pelo(string cant_pelo){
    this->cant_pelo=cant_pelo;
}

string Air_bender::getcolor(){
    return color;
}
void Air_bender::setcolor(string color){
    this->color=color;
}

string Air_bender::toString(){
    return "cant_pelo: "+cant_pelo+" color: "+color;
}