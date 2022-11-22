#ifndef Animal_HPP
#define Animal_HPP

#include <iostream>
#include <string>

class AAnimal
{
protected:
	std::string	type;
public:
	AAnimal();
	AAnimal(AAnimal &obj_ref);
	AAnimal &operator=(AAnimal &obj_ref);
	virtual ~AAnimal();

	virtual std::string		getType() const = 0;
	virtual void			makeSound() const = 0;
};


#endif
