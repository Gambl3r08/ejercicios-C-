#include <iostream>
#include <ostream>
using namespace std;

class Animal
{
	private:
		double weight;
		double height;

	public:
		friend void printWeight(Animal animal);
		friend class AnimalPrinter;

		friend ostream& operator<<(ostream& os, Animal animal);

		Animal(double a, double b){
			this->weight = a;
			this->height = b;
		}
};

void printWeight(Animal animal){
	cout<<animal.weight<<endl;
}

class AnimalPrinter
{
public:
	void print(const Animal& animal){
		cout<<animal.weight << ", " << animal.height <<endl;
	}
};

ostream& operator<<(ostream& os, Animal animal){
	os<<"Animal height: "<<animal.height<<"\n";
	return os;
}

int main(int argc, char const *argv[])
{
	Animal animal = {10, 5};
	printWeight(animal);
	AnimalPrinter aPrinter;
	aPrinter.print(animal);
	cout<<animal;
	return 0;
}