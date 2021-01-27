#include <iostream>
using namespace std;
inline int cubo (int );

int main ()
{
    int numero = 5;
    cout << "El cubo de "<< numero << " es " << cubo (numero) << endl;


    return 0;
}

inline int cubo (int x)
{
    return (x * x * x);
}
