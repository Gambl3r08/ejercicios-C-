// determinar si una secuencia de enteros acadaba en 0 hay algun numero negativo
#include <iostream>
using namespace std;

int main ()
{
    bool encontrado = false;
    int n;
    cin>>n;

    while (n != 0 && !encontrado)
    {
        if (n < 0) encontrado = true;

        cin >> n;
    }

    if (encontrado)
    {cout << "Hay un numero negativo "<<endl;}
    else {cout << "NO hay numero negativo"<<endl;}
}
