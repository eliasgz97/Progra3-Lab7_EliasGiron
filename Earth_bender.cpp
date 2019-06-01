#include "Earth_bender.h"
#include "Persona.h"

Earth_bender::Earth_bender(){

}
Earth_bender::Earth_bender(string coles ,string graduacion, string origen, string nombre, int edad, string sexo, string elemento, poderespecial poder): Persona(origen, nombre, edad, sexo, elemento){

    this->coles=coles;
    this->graduacion=graduacion;
    this->poder=poder;
}
string Earth_bender::getcoles(){
    return coles;
}
void Earth_bender::setcoles(string coles){
    this->coles=coles;
}

string Earth_bender::getgraduacion(){
    return graduacion;
}
void Earth_bender::setgraduacion(string graduacion){
    this->graduacion=graduacion;
}
void Earth_bender::setpoderespecial(poderespecial poder){
    this->poder=poder;
}
poderespecial Earth_bender::getpoderespecial(){
    return poder;
}
string Earth_bender::toString(){
    return "Coles: "+coles+" graduacion: "+graduacion;
}
