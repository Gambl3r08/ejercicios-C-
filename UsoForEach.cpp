#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
vector<int> v {1, 2, 4, 8, 16};

for_each(v.begin(), v.end(), [](int elem) {cout<<elem<<" ";});
}
