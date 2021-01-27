#include<iostream>

using namespace std;

typedef struct {
    char c;
    short s;
    int i;
    long l;
    float f;
    double d;
    long double ld;


} Primitives;


int main(){
    Primitives p[10];
    Primitives* pp = p;
    cout<<"sizeof(primitives) = "<<sizeof(Primitives)<<endl;
    cout<<"pp = "<<(long)pp<<endl;
    pp++;
    cout<<"pp = "<<(long)pp<<endl;

    return 0;
}
