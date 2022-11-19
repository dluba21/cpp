#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <iomanip>
#include <string>
#include <typeinfo>
#include "contact.hpp"


class PhoneBook
{
	Contact	contact_arr[8];
public:
	PhoneBook(void);
	void	ShiftContacts(void);
	void	PrintFormatted(std::string str);
	void	Exit(void);
	void	Add(void);
	void	Search(void);
private:
	int _contact_counter;
	
};
#endif
