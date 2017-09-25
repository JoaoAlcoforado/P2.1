#include "Poligono.h"
#include <iostream>
#include <cmath>

using namespace std;

Poligono::Poligono()
{
    n=0;
    vertices = new Point[100];
}
void Poligono::inserir(Point v)
{
    vertices[n++] = v;
}
int Poligono::getv()
{
    return n;
}
float Poligono::area()
{
    float area=0;
    for(int i=0; i<n-1; i++)
    {
        area = area + vertices[i].x * vertices[i+1].y;
        area = area + (vertices[i+1].x * vertices[i].y)*(-1);
    }
    area = area + vertices[n-1].getX() * vertices[0].getY();
    area = area + (vertices[0].getX() * vertices[n-1].getY())*(-1);
    area = abs(area/2.0);
    return area;
}
void Poligono::transladapol(float a,float b)
{
    for(int i=0; i<n; i++)
    {
        vertices[i].translada(a, b);
    }
}
void Poligono::rotaciona(double angulo,Point p0)
{
    Point aux;
    float tx;
    for(int i=0; i<n; i++)
    {
        aux = vertices[i].sub(p0);


        tx = aux.x;
        aux.setX(tx*cos(angulo)  - aux.y*sin(angulo));
        aux.setY(tx*sin(angulo)  + aux.y*cos(angulo));

        aux = aux.add(p0);

        this->vertices[i].setX(aux.x);
        this->vertices[i].setY(aux.y);
    }
}
void Poligono::imprimepol(){
	int i;
	for(i = 0;i<n-1;i++){
		this->vertices[i].imprime();
		cout << "->";
	}
	this->vertices[i].imprime();
	cout << "->";
	this->vertices[0].imprime();
	cout << "\n";
}
