#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    vector<float> vFloat;
    for(int i = 0; i < 25; i++){
        vFloat.push_back(i);
    }

    for(int j = 0; j < 25; j++){
        vFloat[j] = (pow(vFloat[j], 2));
        cout<<vFloat[j]<<endl;
    }
}
