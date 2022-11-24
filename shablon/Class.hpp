#ifndef CLASS_HPP
#define ClASS_HPP

#include <iostream>
#include <string>

class Class
{
public:
	Class();
	Class(Class &obj_ref);
	Class &operator=(Class &obj_ref);
	~Class();
private:
	
};


#endif
