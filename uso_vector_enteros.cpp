#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;

int main(){
    vector<int>vecInt;
    for(int i = 0; i < 20; i++){
        vecInt.push_back(i);
    }

    for(int j = 0; j < vecInt.size(); j++){
        cout<<vecInt[j]<<endl;
    }

}
