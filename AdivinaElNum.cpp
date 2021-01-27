#include <iostream>
using namespace std;
int main() {
    int secret = 15;
    int guess;
    do{
        cout<<"Ingresa un numero"<<endl;
        cin>>guess;
    }   while(guess != secret);
        cout<<"Lo tienes!"<<endl;



    return 0;
}