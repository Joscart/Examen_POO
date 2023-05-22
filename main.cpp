#include <iostream>
#include "linea.h"
#include "punto.h"

using namespace std;

int main()
{
    Punto p1(2,4);
    Punto p2(6,7);

    cout << p1.toString() << endl;
    cout << p2.toString() << endl;

    return 0;
}
