#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;

int main(){
    vector<string> v;
    ifstream in("uso_vector.cpp");
    string line;

    while(getline(in, line)){
        v.push_back(line);
    }

    for(int i = 0; i < v.size(); i++){
        cout<<i<<": "<<v[i]<<endl;
    }

}
