#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <iomanip>
#include <string>



enum complaint
{
	debug,
	info,
	warning,
	error,
	insignifcant
};

class Harl
{
public:
	Harl(){};
	~Harl(){};
	void complain(std::string level);
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};

typedef	void (Harl::*HarlPTR)(void);

#endif
