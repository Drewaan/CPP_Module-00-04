/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamaya-g <aamaya-g@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 17:59:34 by aamaya-g          #+#    #+#             */
/*   Updated: 2025/12/19 17:59:34 by aamaya-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::setFirstName(std::string input)
{
	_firstName = input;
}

void	Contact::setLastName(std::string input)
{
	_lastName = input;
}

void	Contact::setNickName(std::string input)
{
	_nickName = input;
}

void	Contact::setPhoneNumber(std::string input)
{
	_phoneNumber = input;
}

void	Contact::setDarkestSecret(std::string input)
{
	_darkestSecret = input;
}

std::string Contact::getFirstName(void) const
{
	return (_firstName);
}

std::string Contact::getLastName(void) const
{
	return (_lastName);
}

std::string Contact::getNickName(void) const
{
	return (_nickName);
}

std::string Contact::getPhoneNumber(void) const
{
	return (_phoneNumber);
}

std::string Contact::getDarkestSecret(void) const
{
	return (_darkestSecret);
}