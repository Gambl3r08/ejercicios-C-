#include<iostream>

using namespace std;

void suma(int, int);


void suma(int a, int b){
    static int n = 0;
    cout<<"La suma es: "<<a+b<<endl;
    n += 1;
    cout<<"numeros de veces que se uso la funcion: "<<n<<endl;
}

int main(){
    suma(5, 7);
    suma(4, 7);
    suma(67, 7);
    suma(2, 7);
    suma(9, 7);
    return 0;
}
