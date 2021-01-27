#include <iostream>
#include <cstdlib>

using namespace std;

struct Nodo{
    int dato;
    Nodo *der;
    Nodo *izq;
};
// Prototipos

Nodo *crearNodo(int);
void insertarNodo(Nodo *&, int);
void menu();
void mostrarArbol(Nodo *, int);
bool busqueda(Nodo *, int);
void preOrden(Nodo *);
void inOrden(Nodo *);
Nodo *arbol = NULL;

int main(int argc, char** argv) {
    menu();
    return 0;
}

Nodo *crearNodo(int n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->der = NULL;
    nuevo_nodo->izq = NULL;
}

void insertarNodo(Nodo *&arbol, int n){
    if(arbol == NULL){
        Nodo *nuevo_nodo = crearNodo(n);
        arbol = nuevo_nodo;
    } else{
        int valorRaiz = arbol->dato;
        if(n < valorRaiz){
            insertarNodo(arbol->izq, n);
        } else{
            insertarNodo(arbol->der, n);
        }
    }
}

void menu(){
    int dato, opcion, contadorr = 0, busque;
    do{
        cout<<":MENU:"<<endl;
        cout<<"1. Para insertar un nuevo nodo"<<endl;
        cout<<"2. Para mostrar el arbol"<<endl;
        cout<<"3. Para buscar en el arbol"<<endl;
        cout<<"4. Salir"<<endl;
        cin>>opcion;
        
        switch(opcion){
            case 1: cout<<"Digita un numero"<<endl;
            cin>>dato;
            insertarNodo(arbol, dato);
            break;
            
            case 2:
                cout<<"mostrando arbol"<<endl;
                mostrarArbol(arbol, contadorr);
                cout<<endl;
                break;
                
            case 3:
                cout<<"ingrese el dato a buscar: "<<endl;
                cin>>busque;
                cout<<"buscando..."<<endl;
                busqueda(arbol, busque );
        }
    } while(opcion != 4); 
}

void mostrarArbol(Nodo *arbol, int contador){
    if(arbol == NULL){
        return;
    } else{
        mostrarArbol(arbol->der, contador+1);
        for(int i=0; i<contador; i++){
            cout<<""<<endl;
        }
        cout<<arbol->dato<<endl;
        
        mostrarArbol(arbol->izq, contador+1);
    }
}

bool busqueda(Nodo *arbol, int n){
    if(arbol == NULL){
        return false;
    } else if(arbol->dato == n){
        return true;
    } else if(n < arbol->dato){
        return busqueda(arbol->izq, n);
    } else{
        return busqueda(arbol->der, n);
    }
}


void preOrden(Nodo *arbol){
    if(arbol == NULL){
        return;
    } else{
        cout<<arbol->dato<<"-";
        preOrden(arbol->izq);
        preOrden(arbol->der);
    }
}

void inOrden(Nodo *arbol){
    if(arbol == NULL){
        return;
    } else{
        inOrden(arbol->izq);
        cout<<arbol->dato<<" - ";
        inOrden(arbol->der);
    }
}