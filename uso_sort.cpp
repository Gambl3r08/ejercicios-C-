#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>
using namespace std;
void printVec(vector<int> v);
void printVec(vector<int> v){
	for (int i = 0; i < v.size(); ++i)
	{
		cout<<v[i]<<", ";
	}
	cout<<endl;
}


int main(int argc, char const *argv[])
{
	vector<int> v = {5, 1, 2, 4, 3};
	//Orden acendente
	sort(v.begin(), v.end(), std::less<int>());
	cout<<"Acendente"<<endl;
	printVec(v);

	cout<<"Decendente"<<endl;
	//Orden decendente
	sort(v.begin(), v.end(), greater<int>());
	
	printVec(v);

	return 0;
}