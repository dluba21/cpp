#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>


typedef struct Data
{
	int		i;
	float	f;
	char	c;
} Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
