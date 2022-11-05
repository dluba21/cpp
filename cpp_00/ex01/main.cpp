#include <iostream>
#include <iomanip>

class PhoneBook: private Contact //подумать с защитой
{
public:
	Contact[8];
	PhoneBook()
	{
		for (int i; i < 8; i++)
			Contact[i] = NULL;
	}
	void	add();
	
}

class Contact
{
public:
	int		index;
	string	first_name;
	string	last_name;
	string	nickname;
	string	phone_number;
	string	darkest_secret;
}

void	PhoneBook::get_contact_array_size(Contact)

void	PhoneBook::add()
{
	
}

int main()
{
	
}
