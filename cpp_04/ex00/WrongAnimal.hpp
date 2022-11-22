#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
	std::string	type;
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal &obj_ref);
	WrongAnimal &operator=(WrongAnimal &obj_ref);
	~WrongAnimal();

	std::string		getType() const;
	virtual void			makeSound() const;
};


#endif
