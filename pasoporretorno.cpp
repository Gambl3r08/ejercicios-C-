#include<iostream>

using namespace std;

struct Big{
    char buf[100];
    int i;
    long d;

}B, B2;

Big bigfun(Big b){
    b.i = 100;
    return b;
}




int main(){

B2 = bigfun(B);
B2.d = 25;
cout<<B2.i<<endl;
cout<<B2.d<<endl;
return 0;
}
