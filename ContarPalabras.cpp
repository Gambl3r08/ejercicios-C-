#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;

int main(){

    ifstream in("palabras.txt");
    string palabra;
    int cont = 0;
    while(in >> palabra){
        cont+=1;
    }
    cout<<"Numero de palabras: "<<cont<<endl;

    return 0;
}
