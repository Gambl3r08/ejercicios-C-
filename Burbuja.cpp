#include<iostream>
using namespace std;

int main(){
int v[] = {23, 45, 34, 22, 19, 2, 4, 6, 3, 6};
int n, aux;
// Para ordernar sin importar el tamaño de la lista
n = sizeof(v);
// Iteraciones
for(int i = 0; i < n; i++){
    for(int j = i; j < n; j++){
        if(v[i] > v[j]){
            aux = v[j];
            v[j] = v[i];
            v[i] = aux;
            }
    }
}
for(int i = 0; i < n; i++){
    cout<<" "<<v[i]<<" "<<endl;
}


return 0;
}
