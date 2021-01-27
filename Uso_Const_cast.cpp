int main(){
    const int i = 0;
    int* j = (int*)&i;

    j = const_cast<int*>(&i);


    volatile int k = 0;
    int* u = const_cast<int*>(&k);

}
