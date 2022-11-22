#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	
//	AAnimal* j = new Dog();
//	AAnimal* i = new Cat();
	int		n;
	AAnimal **animal_array;

	n = 4;
	animal_array = new AAnimal*[n];
//	j->makeSound();
//	delete j;
	
	for (int i = 0; i < n / 2; i++)
		animal_array[i] = new Dog;
	for (int i = n / 2; i < n; i++)
		animal_array[i] = new Cat;
	
	for (int i = 0; i < n; i++)
		animal_array[i]->makeSound();
	
	for (int i = 0; i < n; i++)
		delete animal_array[i];
	delete animal_array;
//	const AAnimal* i = new Cat();
//	delete j;//should not create a leak
//	delete i;
//	...
	return (0);
}
