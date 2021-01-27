#include<iostream>
#include<thread>
#include<mutex>

using namespace std;

void add_1(int& i, mutex& m){
    m.lock();
    i+=1;
    m.unlock();
}


int main(){
    int var = 1;
    mutex m;

    cout<<var<<endl;

    thread t1(add_1, var, m);
    thread t2(add_1, var, m);
    t1.join();
    cout<<var<<endl;
}
