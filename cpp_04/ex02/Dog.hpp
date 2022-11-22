#ifndef Dog_HPP
#define Dog_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal
{
public:
	Dog();
	Dog(const Dog &obj_ref);
	Dog &operator=(const Dog &obj_ref);
	~Dog();

	std::string	getType() const;
	void		makeSound() const;
private:
	Brain	*_brain;
//private:

};

#endif
