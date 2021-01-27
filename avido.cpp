#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int tiempo = 0;
    int v[12] = {10, 25, 20, 5, 22, 11, 24, 30, 14, 30, 3, 5};
    int aux = 0;
    int sumaV = 0;
    int cont = 0;
    int Total = 0;
    int Tt = 0;
    int Marca = 0;
    //Ordenamos con burbuja
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < i; j++){
            if(v[i] < v[j]){
            aux = v[j];
            v[j] = v[i];
            v[i] = aux;
            }
        }
    }
    //Mostramos el vector ordenado
    //Comprobacion
    for(int i = 0; i < 12; i++){
        cout<<" "<<v[i]<<" , ";
    }
    cout<<""<<endl;
    cout<<"Ingres el tiempo para las tareas: "<<endl;
    cin>>tiempo;
    //Calculamos el tiempo total
    for(int i = 0; i < 12; i++){
        Total = Total + v[i];
    }
    //Tiempo de tareas hasta el tiempo total
    for(int i = 0; i < 12; i++){
     Marca = Marca + v[i];
     if(Marca <= tiempo){
         Tt = Marca;
         cont = cont + 1;
     }
    }
    cout<<"la cantidad de tareas realizadas es: "<<cont<<" y el tiempo usado es de : "<<Tt<<" minutos de "<<tiempo<<" minutos dados"<<endl;
    cout<<" las tareas realizadas son: "<<endl;
    for(int i = 0; i < cont; i++){
        cout<<" "<<v[i]<<" ";
    }
return 0;
}
