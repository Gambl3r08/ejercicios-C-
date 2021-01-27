#include<iostream>

using namespace std;
int mayor(int, int);
int main(int argc, char const *argv[])
{   
    cout<<"El numero mayor es: "<<mayor(5, 2)<<endl;
    return 0;
}


int mayor(int a, int b){
    /*
    recibe dos enteros y retorna el mayor de ambos 
    */
    if(a > b) return a; else return b;

}