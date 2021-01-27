#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;

int main(){
    vector<string> v;
    ifstream in("palabras.txt");
    string line;

    while((in >> line)){
        v.push_back(line);
    }

    for(int i = v.size(); i > 0; i--){
        cout<<v[i]<<endl;
    }

}
