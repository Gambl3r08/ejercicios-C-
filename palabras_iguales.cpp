#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;

int main(){

    vector<string> vString;
    string palabras;
    ifstream in("palabras.txt");
    int cont = 0;
    while(in >> palabras){
        vString.push_back(palabras);
    }
    for(int i = 0; i < vString.size(); i++){
        for(int j = 0; j < i; j++){
            if(vString[i] == vString[j]){
                cont+=1;
            }
        }
    }
    cout<<"fin del ciclo"<<endl;

    cout<<"Numero de palabras que se repiten = "<<cont<<endl;
    return 0;
}
