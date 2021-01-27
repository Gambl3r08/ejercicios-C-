#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int f[2];
    int c[2];
    //Movimiento de torre
    if((f[0] == f[1])||(c[0]==c[1])){cout<<"La torre se puede mover"<<endl;}
    //Movimiento de alfil
    if(abs(f[0] - f[1]) == abs(c[0]-c[1])){cout<<"El alfil se puede mover"<<endl;}
    //Movimiento de caballo
    if((f[0]-f[1])*(f[0]-f[1]) + (c[0] - c[2])*(c[0] - c[2]) == 5){cout<<"El caballo se puede mover"<<endl;}
    //Movimiento de reina
    if((f[0] == f[1]) || (c[0] == c[1]) || (abs(f[0]-f[1]) == abs(c[0]-c[1]))){cout<<"La reina se puede mover"<<endl;}
    //Movimiento de rey
    if(((abs(f[0] - f[1]) <= 1)) && (abs(c[0] - c[1]) <= 1)){cout<<"EL rey se puede mover"<<endl;}

}
