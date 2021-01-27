#include<iostream>

using namespace std;

void suma(int &a, int &b){
        a + b;
}

int main(int argc, char const *argv[])
{
    // char
    // pueden ser signed o unsigned 
    // tiene 1 byte
    signed char cuentas;
    unsigned char letras;
    char caracteres;

    // int
    //  puede ser signed o unsigned, short o long
    // tienen 8, 16, 32, etc byte dependiendo del sistema
    int n = 10;
    long int  m = 204204242;
    short int r = 332;
    unsigned int f = 2;
    signed int rr = -2;

    // float
    // sirve para almacenar valores de gran magnitud
    /*
    si se opera float a = 12345; a = a+1; a = a - 12345;
    el resultado seria 0 porque se sacrificaria la precisión a favor del tamaño
    */ 
    float fa = 123242241241231.000;
    

    //bool
    // solo pueden tomar "true = 1" o "false = 0", se usan para evaluar expresiones logicas 
    bool flag = false;


    // double
    // es el doble de tamaño que un float
    double da = 200.03203;


    // void
    // indica ausencia de tipo, se usa para funciones que no retornan valor o para punteros genericos
    /*
    se añade al principio del codigo fuente para evitar errores
    void suma(int &a, int &b){
        a + b;
    }
    */
    int aaa = 2, bbb = 4;
    suma(aaa, bbb);
    
    return 0;
}
