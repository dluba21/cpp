#ifndef Dog_HPP
#define Dog_HPP

#include "Animal.hpp"

class Dog: public Animal
{
public:
	Dog();
	Dog(Dog &obj_ref);
	Dog &operator=(Dog &obj_ref);
	~Dog();

	std::string	getType() const;
	void		makeSound() const;
//private:

};

#endif
