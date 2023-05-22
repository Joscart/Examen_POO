/*
Autor: Guallasamion Jose
Correo: jguallasaminc@est.ups.edu.ec
fecha: 22/05/2023
*/
#include <iostream>
#include "linea.h"
#include "punto.h"

using namespace std;

int Linea::NUM_LINEAS = 0;
int main()
{
    Punto p1(-7,4);
    Punto p2(2,9);

    Linea l1(&p1,&p2);
    Linea l2(&p2,&p1);

    cout << l1.toString() << endl;
    cout << l2.toString() << endl;

    return 0;
}
