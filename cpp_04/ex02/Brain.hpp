#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
public:
	Brain();
	Brain(const Brain &objRef);
	Brain &operator=(const Brain &objRef);
	~Brain();
private:
	std::string	_ideas_string[100];
};

#endif
