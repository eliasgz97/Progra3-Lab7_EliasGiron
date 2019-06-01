#ifndef Fire_bender_H
#define Fire_bender_H
#include "Persona.h"
#include "poderespecial.h"

class Fire_bender: public Persona{
    private:
        int cicatrices;
        int victorias;
        poderespecial poder;

    public:
        Fire_bender();
        Fire_bender(int, int, string, string, int, string, string, poderespecial);
        int getcicatrices();
        void setcicatrices(int);
        int getvictorias();
        void setvictorias(int);
        virtual string toString();
        poderespecial getpoder();
        void setpoderespecial(poderespecial);
};
#endif
