#include<iostream>
#include<vector>
using namespace std;

void busqueda(int e, vector<int> v);

int main(){
    vector<int> vec = {1, 2, 3, 4, 5, 6 ,7 ,8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int e = 5;
    cout<<vec.size()<<endl;
    busqueda(e, vec);
    return 0;
}

void busqueda(int e, vector<int> v){
    vector<int>::iterator it;
    if(v.size() % 2 == 0){
            for(it= v.begin(); it != v.end(); ++it){
                cout<<"Entro"<<endl;
            }
        }
    else{cout<<"no es par"<<endl;}
}
