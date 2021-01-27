#include<iostream>
using namespace std;
int main(){
int resp, mitad;
int tam, pos, piv;

cout<<"ingrese el tamaño del vector"<<endl;
cin>>tam;

int v[tam];

for(int j = 0; j < tam; j++){
    v[j] = j;
}

cout<<"ingrese el numero a adivinar "<<endl;
cin>>pos;
piv = tam/2;

if (pos == piv){
    cout<<"el numero es: "<<piv<<endl;
}else{
    cout<<"su numero esta entre 0 y "<<piv<<"?"<<endl;
    cin>>resp;
    mitad = piv / 2;
    if(pos == piv){
        cout<<"su numero es: "<<piv<<endl;
    }else{
        cout<<"su numero es mayor que"<<mitad<<endl;
        cin>>resp;
        if(resp == 1){

        }
    }

}

return 0;
}
