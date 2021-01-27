#include<iostream>

using namespace std;

int main(){
    string const tablaDNI ="TRWAGMYFPDXBNJZSQVHLCKE";
    int numeroDNI;
    cin>>numeroDNI;

    cout<<numeroDNI << "-" << tablaDNI[numeroDNI % 23]<<endl;

}
