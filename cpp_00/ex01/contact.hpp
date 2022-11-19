#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Contact
{
public:
	Contact(std::string first_name = "", std::string last_name = "",
			std::string nickname = "", std::string phone_number = "", std::string darkest_secret = "");
	void		SetNickname(std::string nickname);
	void		SetFirstName(std::string first_name);
	void		SetLastName(std::string last_name);
	void		SetPhoneNumber(std::string phone_number);
	void		SetDarkestSecret(std::string _darkest_secret);
	int			GetIndex(void);
	std::string	GetNickname(void);
	std::string	GetFirstName(void);
	std::string GetLastName(void);
	std::string GetPhoneNumber(void);
	std::string GetDarkestSecret(void);
	
private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;

};

#endif
