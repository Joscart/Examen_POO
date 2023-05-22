#ifndef PUNTO_H
#define PUNTO_H


class Punto
{
private:
    int x;
    int y;
public:
    Punto();
    Punto(int x, int y);
    int getX() const;
    int getY() const;
};

#endif // PUNTO_H
