#include<iostream>
#include<stdlib.h>

using namespace std;

int main(int argc, char const *argv[])
{
    char nombre[5] = "1234";

    if (atoi(nombre) == 0)
    {
        cout<<"Se pudo convertir"<<endl;
    } else
    {
        cout<<"No se pudo convertir"<<endl;
    }
    
    

    return 0;
}
