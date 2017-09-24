#include <iostream>
#include <cmath>

using namespace std;

class Point
{
private:
    float x, y;
public:
    void setX(float _x)
    {
        x = _x;
    }
    void setY(float _y)
    {
        y = _y;
    }
    void setXY(float _x, float _y)
    {
        x = _x;
        y = _y;
    }
    float getX(void)
    {
        return x;
    }
    float getY(void)
    {
        return y;
    }
    float norma()
    {
        return (sqrt(x*x+y*y));
    }
    void imprime(void)
    {
        std::cout<< "(" << x << ", " << y << ")" << endl;
    }

    Point add(Point p1)
    {
        Point res;
        res.x = x + p1.x;
        res.y = y + p1.y;
        return res;
    }
    Point sub(Point p1)
    {
        Point res;
        res.x = x - p1.x;
        res.y = y - p1.y;
        return res;
    }
    Point translada(float a, float b)
    {
        Point res;
        res.x = x + a;
        res.y = y + b;
        return res;
    }
};

class Poligono : public Point
{
private:
    float g[100];
    float h[100];
    float r, t;
    int k=0;
public:
    float inserir(float _x, float _y)
    {
        g[k] = _x;
        h[k] = _y;
        k++;
    }
    float getv(void)
    {
        return k;
    }
    float area(float _area)
    {
        Poligono res;

        for(int i=0; i<k-1; i++)
        {
            res.r = res.r + g[i]*h[i+1];
            res.t = res.t + h[i]*g[i+1];
        }
        if (res.r>res.t)
        {
            _area = (res.r - res.t)/2;
        }
        else
        {
            _area = (res.t - res.r)/2;
        }
        return _area;
    }
    float tranladapol(float a, float b)
    {
        for (int i=0; i<k; i++)
        {
            g[i]=g[i]+a;
            h[i]=h[i]+b;
        }
    }
    void imprimepol(void)
    {
        for(int i=0; i<k; i++)
        {
            std::cout<< "(" << g[i] << ", " << h[i] << ")->";
        }
        cout << endl;
    }
};

class Retangulo : public Poligono
{
private:
    float x, y;
public:
    Retangulo();
};

int main()
{
    Point p1, p2, p3, p4;
    Poligono p5, p6, p7;

    p1.setX(3);
    p1.setY(4);
    p2.setX(1);
    p2.setY(-8);
    p1.imprime();
    p3 = p1.add(p2);
    p3.imprime();
    p4 = p1.translada(2, 3);
    p4.imprime();
    cout << p1.getX() << endl;
    cout << p1.norma() << endl;
    p5.inserir(2, 7);
    p6.inserir(10, 12);
    p7.inserir(1, 5);
    p5.imprimepol();
    p6.imprimepol();
    p7.imprimepol();
    p5.tranladapol(2,3);
    p5.imprimepol();
    p6.imprimepol();
    p7.imprimepol();
    cout << p5.getv() << endl;

    return 0;
}
