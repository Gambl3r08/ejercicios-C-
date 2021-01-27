#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
int main ()
{
	int a, b, c;
	
	cout<<"Buenas este programa le permitira convertir un numero de grados Celsius a grados Fahrenheit  \n";
	cout<<"Digite el numero a convertir: ";
	cin>>a;
	
	b=1.8*a+32;
	
	cout<<"su numero en grados Fahrenheit es:  "<<b;
	
	return 0;
	system ("pause");
	}
