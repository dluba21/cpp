#include "phonebook.hpp"
#include "contact.hpp"

int main(void)
{
	PhoneBook	Phonebook_instance;
	std::string	str;

	while (1)
	{
		std::cout << "Choose command: ADD or SEARCH or EXIT\n> ";
		std::cin >> str;
		if (str == "ADD")
			Phonebook_instance.Add();
		else if (str == "SEARCH")
			Phonebook_instance.Search();
		else if (str == "EXIT")
			Phonebook_instance.Exit();
		else
			std::cout << "Wrong command. Try again\n";
	}
}
