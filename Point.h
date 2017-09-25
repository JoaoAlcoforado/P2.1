#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

class Point
{
private:
    float x, y; // x e y sao os pontos
public:
    Point();
    Point(float x, float y);
    void setX(float _x); //define o valor de x
    void setY(float _y); //define o valor de y
    void setXY(float _x, float _y);
    float getX(void); //recupera o valor de x
    float getY(void); //recupera o valor de y
    float norma();  //calcula a norma
    void imprime(void); //imprime

    Point add(Point p1); //soma um ponto
    Point sub(Point p1); //subtrai um ponto
    Point translada(float a, float b); //rotaciona

    friend class Poligono;
};

#endif // POINT_H_INCLUDED
