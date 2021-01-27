#include<iostream>

using namespace std;

int main(){
    // Para tipos de datos se usa con ()
    cout<<"sizeof(double):"<<sizeof(double)<<" byte"<<endl;
    cout<<"sizeof(int):"<<sizeof(int)<<" byte"<<endl;
    cout<<"sizeof(char):"<<sizeof(char)<<" byte"<<endl;
    cout<<"sizeof(string):"<<sizeof(string)<<" byte"<<endl;
    cout<<"sizeof(bool):"<<sizeof(bool)<<" byte"<<endl;
    cout<<"sizeof(long):"<<sizeof(long)<<" byte"<<endl;
    cout<<"sizeof(short):"<<sizeof(short)<<" byte"<<endl;
    cout<<"sizeof(unsigned):"<<sizeof(unsigned)<<" byte"<<endl;
    cout<<"sizeof(float):"<<sizeof(float)<<" byte"<<endl;


    //Para variables sin ()

    int x = 2;
    int i = sizeof x;

    cout<<i<<endl;

}
