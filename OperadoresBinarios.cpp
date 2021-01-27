#include"OperadoresBinarios.h"
#include<iostream>
using namespace std;
#define PR(STR, EXPR) \
    cout<<STR; printBinary(EXPR); cout<<endl;


int main(){
    unsigned int getval;
    unsigned char a, b;
    cout<<"Ingresa un numero entre 0 y 255"<<endl;
    cin>>getval; a = getval;
    PR("a en Binario: ", a);

    cout<<"Ingresa un numero entre 0 y 255"<<endl;
    cin>>getval; b = getval;
    PR("b en Binario: ", b);
    PR("a | b = ", a | b);
    PR("a & b = ", a & b);
    PR("a ^ b = ", a ^ b);
    PR("~a ? = ", ~a);
    PR("~b ? = ", ~b);

    unsigned char c = 0x5A;
    PR("c en Binario = ", c);
    a |= c;
    PR("a |= c; a =  ", a);
    b &= c;
    PR("b &= c; b = ", b);
    b ^= a;
    PR("b^⁼a; b = ", b);


    return 0;
}
