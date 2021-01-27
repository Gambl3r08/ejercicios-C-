#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<float> vFloat;
    vector<float> vFloat2;
    vector<float> vFloat3;
    for(int i = 0; i < 25; i++){
        vFloat.push_back(i);
    }
    for(int k = 0; k < 25; k++){
        vFloat2.push_back(k);
    }
    for(int j = 0; j < 25; j++){
        vFloat3.push_back(vFloat[j] + vFloat2[j]);
    }
    for(int m = 0; m < 25; m++){
        cout<<vFloat3[m]<<endl;
    }

}
