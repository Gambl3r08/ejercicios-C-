#include<iostream>
#include<fstream>
#include<string>

using namespace std;

ifstream Leer(string nombre){
    ifstream in(nombre);
    return in;
}

void MuestraLineas(ifstream in){
    string s, line;
    while(getline(in, line))
        s += line + "\n";
    cout<<s;
}

int main(){
    MuestraLineas(Leer("textp.cpp"));

}
