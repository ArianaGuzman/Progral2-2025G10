#include <iostream>
using namespace std;
#include "libAriana.h"
// hacer una libreria, libariana.h 
//n en el main llamar funcion, sumar,dividir y multiplicacion
int main()
{
    int x=0, y=0;
    cout<<"ingresa un numero:"<<endl;
    cin>>x;
    cout<<"ingresa otro numero:"<<endl;
    cin>>y;
    sumar(x, y);
    multiplicar(x, y);
    dividir(x, y);
    return 0;
}