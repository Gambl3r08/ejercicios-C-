#include<fstream>
#include<string>

using namespace std;

void CopiarTexto(string, string);

void CopiarTexto(string entrada, string salida){

    /*
    //Copia texto de un archivo a otro
    //Como primer string con el nombre del archivo de entrada
    //Como segundo string con el nombre del archivo de salida
    */
     ifstream in(entrada);
     ofstream out(salida);
     string s;

    while(getline(in, s)){
        out<< s << "\n";
    }
}


int main(){
    CopiarTexto("data.txt", "salida.txt");
    return 0;
}
