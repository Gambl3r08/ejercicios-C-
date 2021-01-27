#include <iostream>
#include <cstdlib>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void insertarLista(Nodo *&, int);
void mostrarLista(Nodo *);
void buscarLista(Nodo *, int);
int main(int argc, char** argv) {
    Nodo *lista = NULL;
    
    int dato; 
    cout<<"numero ? "<<endl;
    cin>>dato;
    insertarLista(lista, dato);
    
    
    return 0;
}

void insertarLista(Nodo *&lista, int n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo -> dato = n;
    
    Nodo *aux1 = lista;
    Nodo *aux2;
    
    while((aux1 != NULL) && ( aux1->dato < n)){
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }
    if(lista == aux1){
        lista = nuevo_nodo;
    }
    else{
        aux2->siguiente = nuevo_nodo;
    }
    
    nuevo_nodo->siguiente = aux1;
    
    cout<<"Elemento insertado a la lista"<<endl;
}

void mostrarLista(Nodo *lista){
    Nodo *actual = new Nodo();
    actual = lista;
    
    while(actual != NULL){
        cout<<actual->dato<<" -> ";
        actual = actual->siguiente;
    }
}

void buscarLista(Nodo *lista, int n){
    Nodo *actual = new Nodo();
    actual = lista;
}
