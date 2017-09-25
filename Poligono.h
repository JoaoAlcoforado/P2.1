#ifndef POLIGONO_H_INCLUDED
#define POLIGONO_H_INCLUDED
#include "Point.h"

class Poligono
{
protected:
    Point *vertices;
	int n;
public:
    Poligono();
	void inserir(Point v);
	int getv();
	float area();
	void transladapol(float a,float b);
	void rotaciona(double angulo,Point p0);
	void imprimepol();
};

#endif // POLIGONO_H_INCLUDED
