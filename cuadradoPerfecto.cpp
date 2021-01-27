#include<iostream>
#include<cmath>
using namespace std;

int main(){
int m;
cin>>m;
const int n = (int)(rint(sqrt(m)));
if(n*n == m){
    cout<<"Es cuadrado perfecto"<<endl;
} else{cout<<"No es cuadrado perfecto"<<endl;}

}
