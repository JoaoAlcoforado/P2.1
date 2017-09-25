#include <iostream>
#include "Poligono.h"
#include "Retangulo.h"
#include <stdlib.h>
#include <cmath>

using namespace std;




int main()
{

    Retangulo ret = Retangulo(0,0,4,3);//retangulo com origem no ponto (0,0) e tem 4 de largura e 3 de altura

    Point CdM = ret.getCdM();// centro de massa do ret


    ret.imprimepol();
    cout << "Area:" <<ret.area() << endl;
    ret.translada(-3,4);


    ret.imprimepol();
    cout << "Area:" <<ret.area() << endl;
    ret.rotaciona(M_PI/6,CdM);
    ret.imprimepol();
    cout << "Area:" <<ret.area() << endl;

    cout << "numero de vertices ret:" <<ret.getv() << endl;

    return 0;
}
