#include<iostream>

using namespace std;



int main(){
    int n[4][4];
    int nn = 0;
    for(int i = 0; i < 4; i++){

        for(int j = 0; j < 4; j++){
                cout<<"Ingrese el valor de la posición "<<"["<<i<<"]"<<"["<<j<<"]"<<endl;
                cin>>n[i][j];
            }
    }
    cout<<"\n\n\n";

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout<<" "<<n[i][j]<<" ";
        }
        cout<<endl;
    }

}
