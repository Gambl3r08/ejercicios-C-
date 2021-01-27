/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   forRango.cpp
 * Author: gambl3r
 *
 * Created on 17 de junio de 2019, 07:13 AM
 */

#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

struct Rng{
    float arr[3];
    
    const float* begin() const{return &arr[0];}
    const float* end() const{return &arr[2];}
    
    float* begin() {return &arr[0];}
    float* end() {return &arr[2];}
};


int main(int argc, char** argv) {
    vector<float> v = {0.4f, 12.5f, 16.234f};
    
    for(auto &val: v){
        cout<<val<<" ";
    }
    cout<<"Para estructuras: "<<endl;
    Rng rng = {{0.4f, 12.5f, 16.234f}};
    
    for(auto val: rng){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"funcion begin()"<<endl;
    cout<<*rng.begin()<<endl;
    cout<<"funcion end()"<<endl;
    cout<<*rng.end()<<endl;
    cout<<endl;
    return 0;
}

