/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamaya-g <aamaya-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 13:34:25 by aamaya-g          #+#    #+#             */
/*   Updated: 2026/01/13 13:37:02 by aamaya-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"

WrongCat::WrongCat()
{
	this -> WrongCat::type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongcat)
{
	this -> type = wrongcat.type;
	std::cout << "WrongCat copy cosntructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat &wrongcat)
{
	if (this != &wrongcat)
		this -> type = wrongcat.type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "Default wrongcat destructor called" << std::endl;
}
