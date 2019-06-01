
#include <iostream>
#include <string>
#include "Persona.h"
#include "Air_bender.h"
#include "Fire_bender.h"
#include "Water_bender.h"
#include "Earth_bender.h"
#include "Non_bender.h"
#include "Ofensivo.h"
#include "Defensivo.h"
#include "Curativo.h"
using std::cin;
using std::cout;
#include <vector>
using std::endl;
using std::vector;
int main()
{
    char resp = 's';
    int opcion = 0, opcion2 = 0, cicatrices = 0, victorias = 0, poder = 0, nivel = 0, pos = 0;
    string origen, nombre, sexo, cant_pelo, color_flechas, tribu, arma, coles, graduacion, trabajo, fuerza, velocidad, elemento, rango, fuerza2, nombre2;
    int edad = 0;
    bool always = true;
    vector<Persona *> maestros;
    while (resp == 's' || resp == 'S')
    {
        cout << "1. Agregar: \n"
                "2. Listar: \n"
                "3. Eliminar: \n"
                "Ingrese opcion: ";
        cin >> opcion2;
        switch (opcion2)
        {
        case 1:
            cout << "Ingrese nombre: ";
            cin >> nombre;
            cout << "Ingrese nacion de origen: ";
            cin >> origen;
            cout << "Ingrese la edad";
            cin >> edad;
            cout << "Ingrese sexo: ";
            cin >> sexo;
            cout << "Ingrese elemento: ";
            cin >> elemento;
            cout << "1. Air Bender: \n"
                    "2. Fire Bender: \n"
                    "3. Earth Bender: \n"
                    "4. Water Bender: \n"
                    "5. Non_bender: \n"
                    "Ingrese una opcion: ";
            cin >> opcion;
            switch (opcion)
            {
            case 1:
                cout << "Ingrese cantidad de pelo: ";
                cin >> cant_pelo;
                cout << "Ingrese color de flechas: ";
                cin >> color_flechas;
                cout << "1. Ofensivo: \n"
                        "2. Defensivo: \n"
                        "3. Curativo: \n"
                        "Ingrese opcion: ";
                cin >> poder;
                switch (poder)
                {
                case 1:
                    cout << "Ingrese rango: ";
                    cin >> rango;
                    cout << "Ingrese fuerza: ";
                    cin >> fuerza2;
                    cout << "Ingrese nombre: ";
                    cin >> nombre2;
                    cout << "Ingrese nivel: ";
                    cin >> nivel;
                    if (always)
                    {
                        Ofensivo power(rango, fuerza2, nombre2, nivel);
                        maestros.push_back(new Air_bender(cant_pelo, color_flechas, origen, nombre, edad, sexo, elemento, power));
                    }

                    break;
                case 2:
                    cout << "Ingrese resistencia: ";
                    cin >> rango;
                    cout << "Ingrese duracion: ";
                    cin >> fuerza2;
                    cout << "Ingrese nombre: ";
                    cin >> nombre2;
                    cout << "Ingrese nivel: ";
                    cin >> nivel;
                    if (always)
                    {
                        Defensivo power(rango, fuerza2, nombre2, nivel);
                        maestros.push_back(new Air_bender(cant_pelo, color_flechas, origen, nombre, edad, sexo, elemento, power));
                    }
                    break;
                case 3:
                    cout << "Ingrese curacion: ";
                    cin >> rango;
                    cout << "Ingrese nombre: ";
                    cin >> nombre2;
                    cout << "Ingrese nivel: ";
                    cin >> nivel;
                    if (always)
                    {
                        Curativo power(rango, nombre2, nivel);
                        maestros.push_back(new Air_bender(cant_pelo, color_flechas, origen, nombre, edad, sexo, elemento, power));
                    }
                    break;
                }
                break;
            case 2:
                cout << "Ingrese el número de cicatrices: ";
                cin >> cicatrices;
                cout << "Ingrese la cantidad de victorias: ";
                cin >> victorias;
                cout << "1. Ofensivo: \n"
                        "2. Defensivo: \n"
                        "3. Curativo: \n"
                        "Ingrese opcion: ";
                cin >> poder;
                switch (poder)
                {
                case 1:
                    cout << "Ingrese rango: ";
                    cin >> rango;
                    cout << "Ingrese fuerza: ";
                    cin >> fuerza2;
                    cout << "Ingrese nombre: ";
                    cin >> nombre2;
                    cout << "Ingrese nivel: ";
                    cin >> nivel;
                    if (always)
                    {
                        Ofensivo power(rango, fuerza2, nombre2, nivel);
                        maestros.push_back(new Fire_bender(cicatrices, victorias, origen, nombre, edad, sexo, elemento, power));
                    }
                    break;
                case 2:
                    cout << "Ingrese resistencia: ";
                    cin >> rango;
                    cout << "Ingrese duracion: ";
                    cin >> fuerza2;
                    cout << "Ingrese nombre: ";
                    cin >> nombre2;
                    cout << "Ingrese nivel: ";
                    cin >> nivel;
                    if (always)
                    {
                        Defensivo power(rango, fuerza2, nombre2, nivel);
                        maestros.push_back(new Fire_bender(cicatrices, victorias, origen, nombre, edad, sexo, elemento, power));
                    }
                    break;
                case 3:
                    cout << "Ingrese curacion: ";
                    cin >> rango;
                    cout << "Ingrese nombre: ";
                    cin >> nombre2;
                    cout << "Ingrese nivel: ";
                    cin >> nivel;
                    Curativo power(rango, nombre2, nivel);
                    maestros.push_back(new Fire_bender(cicatrices, victorias, origen, nombre, edad, sexo, elemento, power));
                    break;
                }
            case 3:
                cout << "Ingrese tribu de origen: ";
                cin >> tribu;
                cout << "Ingrese arma de preferencia: ";
                cin >> arma;
                cout << "1. Ofensivo: \n"
                        "2. Defensivo: \n"
                        "3. Curativo: \n"
                        "Ingrese opcion: ";
                cin >> poder;
                switch (poder)
                {
                case 1:
                    cout << "Ingrese rango: ";
                    cin >> rango;
                    cout << "Ingrese fuerza: ";
                    cin >> fuerza2;
                    cout << "Ingrese nombre: ";
                    cin >> nombre2;
                    cout << "Ingrese nivel: ";
                    cin >> nivel;
                    if (always)
                    {
                        Ofensivo power(rango, fuerza2, nombre2, nivel);
                        maestros.push_back(new Earth_bender(tribu, arma, origen, nombre, edad, sexo, elemento, power));
                    }
                    break;
                case 2:
                    cout << "Ingrese resistencia: ";
                    cin >> rango;
                    cout << "Ingrese duracion: ";
                    cin >> fuerza2;
                    cout << "Ingrese nombre: ";
                    cin >> nombre2;
                    cout << "Ingrese nivel: ";
                    cin >> nivel;
                    if (always)
                    {
                        Defensivo power(rango, fuerza2, nombre2, nivel);
                        maestros.push_back(new Earth_bender(tribu, arma, origen, nombre, edad, sexo, elemento, power));
                    }
                    break;
                case 3:
                    cout << "Ingrese curacion: ";
                    cin >> rango;
                    cout << "Ingrese nombre: ";
                    cin >> nombre2;
                    cout << "Ingrese nivel: ";
                    cin >> nivel;
                    Curativo power(rango, nombre2, nivel);
                    maestros.push_back(new Earth_bender(tribu, arma, origen, nombre, edad, sexo, elemento, power));
                    break;
                }
                break;
            case 4:
                cout << "Ingrese cuantas Coles ha cosechado: ";
                cin >> coles;
                cout << "Ingrese su graduacion (no mayor a 20)";
                cin >> graduacion;
                cout << "1. Ofensivo: "
                        "2. Defensivo: "
                        "3. Curativo: "
                        "Ingrese opcion: ";
                cin >> poder;
                switch (poder)
                {
                case 1:
                    cout << "Ingrese rango: ";
                    cin >> rango;
                    cout << "Ingrese fuerza: ";
                    cin >> fuerza2;
                    cout << "Ingrese nombre: ";
                    cin >> nombre2;
                    cout << "Ingrese nivel: ";
                    cin >> nivel;
                    if (always)
                    {
                        Ofensivo power(rango, fuerza2, nombre2, nivel);
                        maestros.push_back(new Water_bender(coles, graduacion, origen, nombre, edad, sexo, elemento, power));
                    }
                    break;
                case 2:
                    cout << "Ingrese resistencia: ";
                    cin >> rango;
                    cout << "Ingrese duracion: ";
                    cin >> fuerza2;
                    cout << "Ingrese nombre: ";
                    cin >> nombre2;
                    cout << "Ingrese nivel: ";
                    cin >> nivel;
                    if (always)
                    {
                        Defensivo power(rango, fuerza2, nombre2, nivel);
                        maestros.push_back(new Water_bender(coles, graduacion, origen, nombre, edad, sexo, elemento, power));
                    }
                    break;
                case 3:
                    cout << "Ingrese curacion: ";
                    cin >> rango;
                    cout << "Ingrese nombre: ";
                    cin >> nombre2;
                    cout << "Ingrese nivel: ";
                    cin >> nivel;
                    Curativo power(rango, nombre2, nivel);
                    maestros.push_back(new Water_bender(coles, graduacion, origen, nombre, edad, sexo, elemento, power));
                    break;
                }
                break;
            case 5:
                cout << "Ingrese trabajo en que labora: ";
                cin >> trabajo;
                cout << "Ingrese fuerza: ";
                cin >> fuerza;
                cout << "Ingrese velocidad: ";
                cin >> velocidad;
                maestros.push_back(new Non_bender(trabajo, fuerza, velocidad, origen, nombre, edad, sexo, elemento));
                break;
            }
            break;
        case 2:
            for (int i = 0; i < maestros.size(); i++)
            {
                cout << i << "." << maestros[i]->toString() << endl;
            }

            break;
        case 3:
            for (int i = 0; i < maestros.size(); i++)
            {
                cout << i << ". " << maestros[i]->toString() << endl;
            }
            cout << "Ingrese la posicion que desea a eliminar: ";
            cin >> pos; 
            maestros.erase(maestros.begin()+pos);
            break;
        }
        cout << "Desea regresar[s/n]: ";
        cin >> resp;
    }
}