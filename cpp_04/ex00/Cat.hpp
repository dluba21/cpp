#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
public:
	Cat();
	Cat(Cat &obj_ref);
	Cat &operator=(Cat &obj_ref);
	~Cat();
	
	std::string	getType() const;
	void		makeSound() const;
};

#endif
