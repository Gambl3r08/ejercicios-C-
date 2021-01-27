#include<iostream>

using namespace std;

/*
Verificar si es un triangulo, escaleno, equilatero, isosceles
*/

int main(){
    double a, b, c;
    cin >>a, b, c;

    bool const esTriangulo = (a + b > c) && (a + c > b) && (c + b > a);
    bool const esEscaleno = esTriangulo && (a != b) && (b != c) && (a != c);
    bool const esEquilatero = esTriangulo && (a == b) && (b == c);
    bool const esIsosceles = esTriangulo && (((a == b) && (a != c)) || ((b == c) && (b != a)) || ((a == c) && (a != b)));


}
