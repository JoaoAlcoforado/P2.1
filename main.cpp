#include <iostream>
#include "Poligono.h"
#include "Retangulo.h"
#include <stdlib.h>
#include <cmath>

using namespace std;




int main()
{

    Retangulo ret;
    ret.Retangulo(0,0,4,3);//retangulo com origem no ponto (0,0) e tem 4 de largura e 3 de altura

    Point CdM(4/2,-3/2);// centro de massa do ret


    ret.imprime();
    cout << "Area:" <<ret.area() << endl;
    ret.translada(-3,4);
    CdM.translada(-3,4);


    ret.imprime();
    cout << "Area:" <<ret.area() << endl;
    ret.rotaciona(M_PI/6,CdM);
    ret.imprime();
    cout << "Area:" <<ret.area() << endl;

    cout << "numero de vertices ret:" <<ret.getv() << endl;

    return 0;
}
