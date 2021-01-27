#include<iostream>
#include<ostream>
using namespace std;

/*
/Lectura del modelo del color original
/Calculo de las componentes del modelo de color destino
/Escritura de las componentes del modelo de color destino
*/

int main(){
    double r, v, a;
    cout<<"Escribe Rojo, verde y azul: "<<flush;
    cin>> r >> v >> a;
    double const y = 0.299 * r + 0.587 * v + 0.114 * a;
    double const i = 0.596 * r + 0.275 * v + 321 * a;
    double const q = 0.212 * r + 0.528 * v + 0.311 * a;
    cout<<"YIQ= "<<y<<" " << i << " " << q <<endl;

}
