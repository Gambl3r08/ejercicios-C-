#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> v = {0, 1, 2, 3, 4, 5};
	for(auto n: v){
		cout<<n<<' ';
	}
	cout<<endl;

	auto f = [](){cout<<"lambda\n";};
	f();

	std::vector<string> strings = {"stuff", "things", "misc"};

	for(auto s: strings){ //Solo realiza una copia a s pero no afecta el original
		cout<<s<<endl;
	}
	for(auto& ss: strings){ //por referencia puede modificar
		ss.append(" añadido ");
		cout<<ss<<endl;
	}

	for(const auto& sss: strings){
		cout<<sss<<" constantes"<<endl;
	}

	return 0;
}