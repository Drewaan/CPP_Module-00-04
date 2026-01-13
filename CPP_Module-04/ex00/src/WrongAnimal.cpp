/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamaya-g <aamaya-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 13:29:46 by aamaya-g          #+#    #+#             */
/*   Updated: 2026/01/13 13:31:21 by aamaya-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this -> WrongAnimal::type = "WrongAnimal";
	std::cout << "WrongAnimal default constructor called" << std::endl; 
}

WrongAnimal::WrongAnimal(const WrongAnimal &wronganimal)
{
	this -> type = wronganimal.type;
	std::cout << "WrongAnimal copy constructor called" << std::endl; 
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal &wronganimal)
{
	if (this != &wronganimal)
		this -> type = wronganimal.type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Deafault wronganimal destructor called" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "(WrongAnimal sounds)" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return this -> type;
}
