#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	
//	Animal* j = new Dog();
//	Animal* i = new Cat();
	int		n;
	Animal **animal_array;

	n = 4;
	animal_array = new Animal*[n];
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
//	const Animal* i = new Cat();
//	delete j;//should not create a leak
//	delete i;
//	...
	return (0);
}
