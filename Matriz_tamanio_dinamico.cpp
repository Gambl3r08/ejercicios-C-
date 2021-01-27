#include <iostream>
#include <algorithm>

using namespace std;

auto int_from( istream& in) -> int {int x; in >> x; return x;}


auto main() -> int
{
	cout<<"Ordenando n enteros "<<endl;
	int const n = int_from(cin);
	int* a = new int[n];

	for (int i = 0; i <= n; ++i)
	{
		cout<<"el # "<<i<< " numero, por favor: "<<endl;
		a[i-1] = int_from(cin);
	}

	sort(a, a+n);
	for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<' ';
	}

	cout<<endl;

	delete[] a;
	return 0;
}