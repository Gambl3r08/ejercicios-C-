#include<iostream>

using namespace std;

struct test{
    int n;
    double m;
};


int main(){

    test a;

    a.n = 2;
    a.m = 4.4;

    int* PtrN = &a.n;
    test* PtrA =&a;
    double* PtrM = &a.m;

    cout<<"Memoria de a: "<<PtrA<<endl;
    cout<<"Memoria de a.n: "<<PtrN<<endl;
    cout<<"Memoria de a.m "<<PtrM<<endl;

    return 0;
}
