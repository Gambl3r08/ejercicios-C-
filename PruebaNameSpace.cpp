#include <iostream>
/*
Tambien se puede sobrecargar la funcion, solo es una
prueba del uso de namespace
*/
namespace testdos{
	void cambiaValor(int& i){
		i = 10;
	}
}

namespace test{
	void cambiaValor(int& i){
		i = 5;
	}
}


int main(int argc, char const *argv[])
{
	int n = 2;
	std::cout<<n<<std::endl;
	std::cout<<"test::cambiaValor"<<std::endl;
	test::cambiaValor(n);
	std::cout<<n<<std::endl;
	std::cout<<"testdos::cambiaValor"<<std::endl;
	testdos::cambiaValor(n);
	std::cout<<n<<std::endl;
	return 0;
}