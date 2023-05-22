#include "linea.h"

float Linea::getD()
{
    d = sqrt(pow((p2->getX() - p1->getX()),2) + pow((p2->getY() - p1->getY()),2));
    m = (p2->getY() - p1->getY())/(p2->getX() - p1->getX());
    return d;
}

Punto *Linea::getP1() const
{
    return p1;
}

Punto *Linea::getP2() const
{
    return p2;
}

string Linea::toString()
{
    return "L" + to_string(id) + "[ " + p1->toString() + "-" + p2->toString() +
            ", d = " + to_string(getD()) +
            ", m = " + to_string(m) + (m==0? " Nula":m>0? " Creciente":" Decreciente") +
            " ]";
}

Linea::Linea()
{

}

Linea::Linea(Punto *p1, Punto *p2)
{
    this->p1 = p1;
    this->p2 = p2;
}
