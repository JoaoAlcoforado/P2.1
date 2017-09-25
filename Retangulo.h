#ifndef RETANGULO_H_INCLUDED
#define RETANGULO_H_INCLUDED

#include "Poligono.h"

class Retangulo: public Poligono
{
private:
    float altura,largura,x,y; //x e y sao coord. do vertice superior esquerdo do retangulo
    Point CdM;

public:

    Retangulo(float x, float y, float altura, float largura);
    void translada(float a,float b);
    Point getCdM();

};


#endif // RETANGULO_H_INCLUDED
