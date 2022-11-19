#include "phonebook.hpp"
#include "contact.hpp"

Contact::Contact(std::string first_name, std::string last_name, \
	std::string nickname, std::string phone_number, std::string darkest_secret)
{
	_first_name = first_name;
	_last_name = last_name;
	_nickname = nickname;
	_phone_number = phone_number;
	_darkest_secret = darkest_secret;
}


void Contact::SetNickname(std::string nickname)
{
	_nickname = nickname;
}

void Contact::SetFirstName(std::string first_name)
{
	_first_name = first_name;
}

void Contact::SetLastName(std::string last_name)
{
	_last_name = last_name;
}

void Contact::SetPhoneNumber(std::string phone_number)
{
	_phone_number = phone_number;
}

void Contact::SetDarkestSecret(std::string darkest_secret)
{
	_darkest_secret = darkest_secret;
}

//int	Contact::GetIndex(void)
//{
//	return (_index);
//}

std::string Contact::GetNickname(void)
{
	return (_nickname);
}

std::string Contact::GetFirstName(void)
{
	return (_first_name);
}

std::string Contact::GetLastName(void)
{
	return (_last_name);
}

std::string Contact::GetPhoneNumber(void)
{
	return (_phone_number);
}

std::string Contact::GetDarkestSecret(void)
{
	return (_darkest_secret);
}
