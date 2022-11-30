#include "main.hpp"

uintptr_t	serialize(Data* ptr)
{
//	uintptr_t uptr;
	
//	uptr =  reinterpret_cast<uintptr_t> (Data *);
//	return (uptr);
//	return (reinterpret_cast<uintptr_t> (Data *));
	return (reinterpret_cast<uintptr_t>(ptr));

}

Data*	deserialize(uintptr_t raw)
{
//	Data*	dptr;

//	dptr =  reinterpret_cast<Data *> (raw);
	return (reinterpret_cast<Data *> (raw));
}

int main()
{
//	Data test;
	Data *dptr;
	uintptr_t uptr = 0;

	dptr = new Data;
	dptr->i = 42;
	dptr->f = 43.f;
	dptr->c = 'a';
	
	std::cout << dptr->i << " " <<  dptr->f <<  " " << dptr->c << std::endl;
	std::cout <<  "var addresses: " << &dptr->i << " " <<  &dptr->f <<  " " << &dptr->c << std::endl;
	std::cout << dptr << ' ' << uptr << std::endl;
	uptr = serialize(dptr);
	std::cout << dptr << ' ' << uptr << std::endl;
	dptr = deserialize(uptr);
	std::cout <<  "var addresses: " << &dptr->i << " " <<  &dptr->f <<  " " << &ddptr->c << std::endl;
	std::cout << dptr << ' ' << uptr << std::endl;
	std::cout << dptr->i << " " <<  dptr->f <<  " " << dptr->c << std::endl;

}
