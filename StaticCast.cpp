#include<iostream>
using namespace std;

int main(){
    int i = 0x7fff;
    long l;
    float f;

    l = i;
    f = i;

    cout<<"Valor de i: "<<i<<endl;
    cout<<"Valor de l: "<<l<<endl;
    cout<<"Valor de f: "<<f<<endl;

    cout<<"Aplicamos el static_cast"<<endl;
    l = static_cast<long>(i);
    f = static_cast<float>(i);

    cout<<"Valor de i: "<<i<<endl;
    cout<<"Valor de l: "<<l<<endl;
    cout<<"Valor de f: "<<f<<endl;



    i = l; // Tal vez se pierdan digitos
    cout<<" i = l "<<i<<endl;
    i = f; // Tal vez se pierda info
    cout<<" i = f "<<i<<endl;

    i = static_cast<int>(l);
    cout<<"static_cast<int>(l)"<<i<<endl;
    i = static_cast<int>(f);
    cout<<"static_cast<int>(f)"<<i<<endl;

    char c = static_cast<int>(i);
    cout<<"char con static_cast<int>(i)"<<endl;



    return 0;
}
