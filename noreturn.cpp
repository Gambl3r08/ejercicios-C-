#include <iostream>
#include <string>
using namespace std;


int main()
{
	[[noreturn]]void ownAssertFailureHandler(string message){
		cerr<<message<<endl;

		if (THROW_EXCEPTION_ON_ASSERT)
			throw AsserException(move(message));
		terminate();
		
	}

}