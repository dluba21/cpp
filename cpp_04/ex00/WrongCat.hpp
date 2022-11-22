#ifndef WrongCat_HPP
#define WrongCat_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
public:
	WrongCat();
	WrongCat(WrongCat &obj_ref);
	WrongCat &operator=(WrongCat &obj_ref);
	~WrongCat();
	
	std::string	getType() const;
	void		makeSound() const;
};

#endif

