#include<iostream>
#include<fstream>
using namespace std;
int main(){
  ofstream fichero("fsociety00.dat");
   fichero << "leave me here" << endl;
  fichero.close();
 return 0;
}
