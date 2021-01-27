#include <iostream>
using namespace std;
void uno(){
    cout<<"Sub menu 1"<<endl;
}


void Menu(){
    cout<<"Seleccione una opcion: "<<endl;
    cout<<"1. para entrar, 2. para salir"<<endl;
    int n;
    cin>>n;

    switch(n){
        case 1: uno();
            break;
        case 2 : cout<<"fin"<<endl;
            break;
    }
}


int main() {


    Menu();


    return 0;
}