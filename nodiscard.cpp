#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	template<typename Function>
	[[nodiscard]] Finally<std::decay_t<Function>> onExit(Function &&f);

	void f(int &i){
		assert(i==0);
		++i;
		auto exit1 = onExit([&i]{--i;});
		++i;
		onExit([&i]{--i;});

		cout<<i<<endl;
	}
	
}