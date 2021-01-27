#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> v;
	v.push_back(6);
	v.push_back(2);
	v.push_back(5);

	vector<int>::iterator it;

	for (it = v.begin(); it != v.end(); it++)
	{
		cout<<*it<<endl;
	}


	return 0;
}