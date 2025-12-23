/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamaya-g <aamaya-g@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 20:28:50 by aamaya-g          #+#    #+#             */
/*   Updated: 2025/12/19 20:28:50 by aamaya-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	_nextIndex = 0;
	_totalContacts = 0;
}

PhoneBook::~PhoneBook(void)
{
}

bool	PhoneBook::_isOnlySpace(std::string buffer) const
{
	for (size_t i = 0; i < buffer.length(); i++)
	{
		if (!std::isspace(buffer[i]))
			return false;
	}
	return true;
}

std::string	PhoneBook::_trimString(std::string str, size_t len) const
{
	if (str.length() > len)
		return str.substr(0, len - 1) + ".";
	return str;
}

std::string	PhoneBook::fieldFill(std::string fieldId)
{
	std::string	buffer;

	while (true)
	{
		std::cout << "> Enter " << fieldId << ": ";
		if (!std::getline(std::cin, buffer))
			return "";
		if (buffer.empty() || _isOnlySpace(buffer))
			std::cout << "** Field cannot be empty **" << std::endl;
		else
			break ;
	}
	return buffer;
}

void	PhoneBook::_displayContact(int index) const
{
	std::cout << std::endl;
	std::cout << "First name: " << _contacts[index].getFirstName() << std::endl;
	std::cout << "Last name: " << _contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << _contacts[index].getNickName() << std::endl;
	std::cout << "Phone number: " << _contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << _contacts[index].getDarkestSecret() << std::endl;
	std::cout << std::endl;
}

void	PhoneBook::searchContact(void) const
{
	std::string	buffer;
	int			index;

	if (_totalContacts == 0)
	{
		std::cout << "** PHONEBOOK IS EMPTY **" << std::endl;
		return ;
	}

	std::cout << std::endl;
	std::cout << "|" << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;

	for (int i = 0; i < _totalContacts; i++)
	{
		std::cout << "|" << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << _trimString(_contacts[i].getFirstName(), 10) << "|";
		std::cout << std::setw(10) << _trimString(_contacts[i].getLastName(), 10) << "|";
		std::cout << std::setw(10) << _trimString(_contacts[i].getNickName(), 10) << "|" << std::endl;
	}
	std::cout << std::endl;

	std::cout << "> Enter index to display: ";
	if (!std::getline(std::cin, buffer))
		return ;

	if (buffer.length() != 1 || buffer[0] < '1' || buffer[0] > '8')
	{
		std::cout << "** INVALID INDEX **" << std::endl;
		return ;
	}

	index = buffer[0] - '1';
	if (index >= _totalContacts)
	{
		std::cout << "** CONTACT NOT FOUND **" << std::endl;
		return ;
	}

	_displayContact(index);
}

void	PhoneBook::addContact(void)
{
	Contact		newContact;
	std::string	buffer;

	std::cout << "** CREATING CONTACT " << _nextIndex + 1 << "/8 **" << std::endl;

	buffer = fieldFill("first name");
	if (std::cin.eof())
		return ;
	newContact.setFirstName(buffer);

	buffer = fieldFill("last name");
	if (std::cin.eof())
		return ;
	newContact.setLastName(buffer);

	buffer = fieldFill("nickname");
	if (std::cin.eof())
		return ;
	newContact.setNickName(buffer);

	buffer = fieldFill("phone number");
	if (std::cin.eof())
		return ;
	newContact.setPhoneNumber(buffer);

	buffer = fieldFill("darkest secret");
	if (std::cin.eof())
		return ;
	newContact.setDarkestSecret(buffer);

	_contacts[_nextIndex] = newContact;

	if (_totalContacts < 8)
		_totalContacts++;

	_nextIndex = (_nextIndex + 1) % 8;

	std::cout << "** NEW CONTACT ADDED SUCCESSFULLY **" << std::endl;
}
