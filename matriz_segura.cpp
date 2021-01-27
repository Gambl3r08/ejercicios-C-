//Matriz que se borre de memoria aunque ocurra un error en tiempo de ejecucion

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int int_from( istream& in){
	int x = 0;
	in >> x; 
	return x;
}

int main(int argc, char const *argv[])
{
	cout<<"Organizando enteros"<<endl;
	vector<int> a;

	while(cin){
		cout<<"Un numero: "<<endl;
		int const x = int_from(cin);
		if(!cin.fail()){
			a.push_back(x);
		}
	sort(a.begin(), a.end());
	int const n = a.size();
	for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<' ';
	} cout<<endl;
	}

	return 0;
}