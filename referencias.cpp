#include<iostream>

using namespace std;

void increment(int*& i){i++;}

int& g(int &i){
    i++;
    return i;
}

int main(){
    int i = 0;
    cout<<"i = "<<i<<endl;
    g(i);
    cout<<"i = "<<i<<endl;

return 0;
}
