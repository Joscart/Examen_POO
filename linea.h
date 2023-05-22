#ifndef LINEA_H
#define LINEA_H

#include "punto.h"

class Linea
{
private:
    float d;
    float m;
    Punto* p1;
    Punto* p2;
public:
    static int NUM_LINEAS;
    Linea();
    Linea(Punto *p1, Punto *p2);
    float getD() const;
};

#endif // LINEA_H
