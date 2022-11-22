#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal
{
public:
	Cat();
	Cat(const Cat &obj_ref);
	Cat &operator=(const Cat &obj_ref);
	~Cat();
	
	std::string	getType() const;
	void		makeSound() const;
private:
	Brain	*_brain;
};

#endif
