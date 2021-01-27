#include <iostream>
#include <cstdlib>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

//Prototipo
void agregarPila(Nodo *&, int);
void sacarPila(Nodo *&, int &);

int main(int argc, char** argv) {
    int dato;
    char rpt;
    Nodo *pila = NULL;
    do{
        cout<<"Digite un numero: "<<endl;
        cin>>dato;
        agregarPila(pila, dato);
        
        cout<<"Deseas agregar otro elemento a pila ?(S/N) "<<endl;
        cin>>rpt;
    } while((rpt == 'S') || rpt == 's');
     
    cout<<"Sacando todos los elementos de Pila: "<<endl;
    while(pila != NULL){
        sacarPila(pila, dato);
        if(pila != NULL){
            cout<<dato<<" , ";
        } else{
            cout<<dato<<".";
        }
    }
    
    
    return 0;
}

void agregarPila(Nodo *&pila, int n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo -> dato = n;
    nuevo_nodo ->siguiente = pila;
    pila = nuevo_nodo;
    cout<<"El elemento "<<n<<" ha sido agregado a pila correctamente"<<endl;
}

void sacarPila(Nodo *&pila, int &n){
    Nodo *aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;
}