#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;

int main(){
    vector<string> words;
    ifstream in("obtener_palabras.cpp");
    string word;

    while(in >> word){
        words.push_back(word);
    }

    for(int i = 0; i < words.size(); i++){
        cout<<words[i] <<endl;
    }


}
