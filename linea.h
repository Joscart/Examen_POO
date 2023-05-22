#ifndef LINEA_H
#define LINEA_H

#include "punto.h"
#include <string>
#include <cmath>

using namespace std;

class Linea
{
private:
    int id;
    float d;
    float m;
    Punto* p1;
    Punto* p2;
public:
    static int NUM_LINEAS;
    Linea();
    Linea(Punto *p1, Punto *p2);
    float getD();
    Punto *getP1() const;
    Punto *getP2() const;
    string toString();
};

#endif // LINEA_H
