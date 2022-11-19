#include "phonebook.hpp"
#include "contact.hpp"

PhoneBook::PhoneBook(void)
: _contact_counter(0)
{
}

int	IsNumber(std::string str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (!std::isdigit(str[i]))
			return (-1);
	return (0);
}

void	PhoneBook::PrintFormatted(std::string str)
{
	std::cout << std::right << std::setw(10);

	if (str.length() > 10)
		std::cout << str.substr(0, 9).replace(9, 1, ".");
	else
		std::cout << str;
}

void	PhoneBook::Exit(void)
{
	std::cout << "Goodbye!\n";
	exit(0);
}

void	PhoneBook::ShiftContacts(void)
{
		_contact_counter = 7;
		for (int i = 0; i < 7; i++) //сдвигаю контакты к левому краю на один
			contact_arr[i] = contact_arr[i + 1];
}

void	PhoneBook::Add(void)
{
	std::string	str;
//	str1.replace(pos,len,str2);

	if (_contact_counter == 8)
		ShiftContacts();
	std::cout << "Adding new contact...\n\n";
	std::cout << "Enter first name:\n> ";
	std::cin >> str;
	contact_arr[_contact_counter].SetFirstName(str);
	std::cout << "Enter last name:\n> ";
	std::cin >> str;
	contact_arr[_contact_counter].SetLastName(str);
	std::cout << "Enter nickname:\n> ";
	std::cin >> str;
	contact_arr[_contact_counter].SetNickname(str);
	std::cout << "Enter phone number:\n> ";
	std::cin >> str;
	contact_arr[_contact_counter].SetPhoneNumber(str);
	std::cout << "Enter darkest secret:\n> ";
	std::cin >> str;
	contact_arr[_contact_counter].SetDarkestSecret(str);
	_contact_counter++;
}

void	PhoneBook::Search(void)
{
	int			inserted_ind;
	std::string	tmp;

	std::cout << "\nShowing contact list...\n\n"; //колонки завести еще
	std::cout << std::right << std::setw(11) << "index|";
	std::cout << std::right << std::setw(11) << "first_name|";
	std::cout << std::right << std::setw(11) << "last_name|";
	std::cout << std::right << std::setw(11) << "nickname\n";
	
	for (int i = 0; i < _contact_counter; i++)
	{
		std::cout << std::right << std::setw(10);
		std::cout << i + 1;
		std::cout << "|";
		PrintFormatted(contact_arr[i].GetFirstName());
		std::cout << "|";
		PrintFormatted(contact_arr[i].GetLastName());
		std::cout << "|";
		PrintFormatted(contact_arr[i].GetNickname());
		std::cout << std::endl;
	}
	std::cout << "\nInsert contact index:\n";
	std::cin >> tmp;
	if (IsNumber(tmp) == -1)
	{
		std::cout << "Inserted index is not number\n";
		return ;
	}
	inserted_ind = std::stoi(tmp);
	if (inserted_ind > 8 || inserted_ind <= 0 || inserted_ind > _contact_counter)
	{
		std::cout << "Error: Inserted index is out of range\n";
		return ;
	}
	inserted_ind--;
	std::cout << "index: " << inserted_ind + 1;
	std::cout << "\nfirst name: " << contact_arr[inserted_ind].GetFirstName();
	std::cout << "\nlast name: " << contact_arr[inserted_ind].GetLastName();
	std::cout << "\nnickname: " << contact_arr[inserted_ind].GetNickname();
	std::cout << "\nphone number: " << contact_arr[inserted_ind].GetPhoneNumber();
	std::cout << "\ndarkest secret " << contact_arr[inserted_ind].GetDarkestSecret();
	std::cout << std::endl;
}
