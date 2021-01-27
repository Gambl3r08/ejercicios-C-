#include<iostream>
using namespace std;
int main(){
 string Password, PrimerCaracter, UltimoCaracter;
 int LongitudPassword;
 cout << "ingrese la contraseña: "<<endl;
 cin >> Password;
 LongitudPassword = Password.size();
 PrimerCaracter = Password.substr(0, 1);
 UltimoCaracter = Password.substr(LongitudPassword-1, 1);
 try {
 // Condiciones
 if (LongitudPassword < 2  ) throw 0; // Logitud mayor de 2 caracteres
 if (PrimerCaracter != "A") throw 1; // Primer caracter A
 if (UltimoCaracter != "Z") throw 2; // Ultimo caracter Z
  cout<< "** Pasword Correcta   "<<endl;
 }
 catch(int error){
 cout << "Error.    "<<endl;
 if (error == 0 ) cout << "el password debe tener mas de 1 caracter"<<endl;
 if (error == 1 ) cout << "El primer caracter debe ser una A,   " <<endl;
 if (error == 2 ) cout << "el ultimo caracter debe ser una Z,   " <<endl;
 }
 return 0;
}
