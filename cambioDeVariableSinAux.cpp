#include <iostream>

using namespace std;

void cambio(int&, int&);

int main(){
    int a, b;
    cout<<"Ingrese el valor de A: "<<endl;
    cin>>a;
    cout<<"Ingrese el valor de B: "<<endl;
    cin>>b;
    cambio(a, b);
    cout<<"el valor de A es: "<<a<<endl;
    cout<<"el valor de B es: "<<b<<endl;

return 0;
}
void cambio(int& a, int& b){
    a = a + b;
    b = a - b;
    a = a - b;

}
