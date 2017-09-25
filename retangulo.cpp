#include <iostream>
#include "Retangulo.h"



Retangulo::Retangulo(float x, float y, float altura, float largura)
{
    Point p2;// ponto auxiliar para usar no metodo inserir
    this->altura = altura;
    this->largura = largura;
    this->x = x;
    this->y = y;
    this->CdM.setX(x + largura/2);
    this->CdM.setY(y - altura/2);


    aux = Point(x,y);
    this->inserir(p2);
    aux.translada(largura,0);
    this->inserir(p2);
    aux.translada(0,-altura);
    this->inserir(p2);
    aux.translada(-largura,0);
    this->inserir(p2);

}

void Retangulo::translada(float a,float b)
{
    int i;
    for(i=0; i<N; i++)
    {
        vertices[i].translada(a, b);
    }
    this->CdM.translada(a,b);
}

Point Retangulo::getCdM()
{
    return CdM;
}
