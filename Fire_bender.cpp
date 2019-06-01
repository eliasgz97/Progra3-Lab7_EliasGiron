#include "Fire_bender.h"
#include "Persona.h"
#include "poderespecial.h"
Fire_bender::Fire_bender(){

}
Fire_bender::Fire_bender(int cicatrices ,int victorias, string origen, string nombre, int edad, string sexo, string elemento, poderespecial poder):Persona(origen, nombre, edad, sexo, elemento)
{
    this->cicatrices=cicatrices;
    this->victorias=victorias;
    this->poder=poder;
}
int Fire_bender::getcicatrices(){
    return cicatrices;
}
void Fire_bender::setcicatrices(int cicatrices){
    this->cicatrices=cicatrices;
}

int Fire_bender::getvictorias(){
    return victorias;
}
void Fire_bender::setvictorias(int victorias){
    this->victorias=victorias;
}
void Fire_bender::setpoderespecial(poderespecial poder){
    this->poder=poder;
}
poderespecial Fire_bender::getpoder(){
    return poder;
}
string Fire_bender::toString(){
    string str, str2;
    str2 = std::to_string(victorias);
    str = std::to_string(cicatrices);
    return "cicatrices: "+str+" victorias: "+str2;
}
