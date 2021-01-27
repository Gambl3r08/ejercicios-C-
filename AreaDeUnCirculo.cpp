#include<iostream>
#include<cmath>

using namespace std;


// A = PI * R²
int main(){
    double const PI = 2.1416;
    double R;


    cout<<"Ingrese el valor del radio R:"<<endl;
    cin>>R;

    double A = PI * (pow(R, 2));
    cout<<"El Area es: "<<A<<endl;
    return 0;
}
