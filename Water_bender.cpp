#include "Water_bender.h"
#include "Persona.h"
#include "poderespecial.h"
Water_bender::Water_bender(){
}
Water_bender::Water_bender(string tribu ,string arma, string origen, string nombre, int edad, string sexo, string elemento, poderespecial poder): Persona(origen, nombre, edad, sexo, elemento){
    this->tribu=tribu;
    this->arma=arma;
    this->poder=poder;
}
string Water_bender::gettribu(){
    return tribu;
}
void Water_bender::settribu(string tribu){
    this->tribu=tribu;
}

string Water_bender::getarma(){
    return arma;
}
void Water_bender::setarma(string arma){
    this->arma=arma;
}
void Water_bender::setpoderespecial(poderespecial poder){
    this->poder=poder;
}
poderespecial Water_bender::getpoderespecial(){
    return poder;
}
string Water_bender::toString(){
    return "tribu: "+tribu+" arma: "+arma;
}
