#include<iostream>

using namespace std;

int main(){

int y=0;
int& r = y; //El valor de Y queda guardado en r y si Y incrementa el valor de r tambien lo hará

for(int i=0; i < 10; i++){
    cout<<r<<endl;
    y+=1;
}


return 0;
}
