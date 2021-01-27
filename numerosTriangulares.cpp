#include<iostream>
#include<cmath>
using namespace std;

int main(){
int t;
cin>>t;

int const m = 1 + 8*t;

const int n = (int)(rint(sqrt(m)));
if(n*n == m){
    cout<<"Es cuadrado perfecto"<<endl;
} else{cout<<"No es cuadrado perfecto"<<endl;}


}
