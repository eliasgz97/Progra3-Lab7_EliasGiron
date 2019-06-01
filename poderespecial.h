#ifndef PODERESPECIAL_H
#define PODERESPECIAL_H
#include <iostream>
#include <string>
using std::cout;
using std::string;
class poderespecial
{
protected:
    string nombre;
    int nivel;

public:
    poderespecial();
    poderespecial(string, int);

    string getnombre();
    void setnombre(string);

    int getnivel();
    void setnivel(int);

    virtual string toString();
};
#endif
