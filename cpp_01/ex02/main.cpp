#include <iostream>
#include <iomanip>
#include <string>

int main(void)
{
	std::string	str;
	std::string	*stringPTR;
	std::string	&stringREF = str;

	str = "HI THIS IS BRAIN";
	stringPTR = &str;
	std::cout << "address of string: " << &str << std::endl;
	std::cout << "address of stringREF: " << &stringREF << std::endl;
	std::cout << "address of stringPTR: " << stringPTR << "\n" << std::endl;
	std::cout << "value of string: " << str << std::endl;
	std::cout << "value of stringREF: " << stringREF << std::endl;
	std::cout << "value of stringPTR" << *stringPTR << std::endl;
	
	return (0);
}
