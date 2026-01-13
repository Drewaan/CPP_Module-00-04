/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamaya-g <aamaya-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 18:54:34 by aamaya-g          #+#    #+#             */
/*   Updated: 2026/01/13 12:51:42 by aamaya-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

Animal::Animal()
{
	this -> Animal::type = "Animal";
	std::cout << "Animal default constructor called" << std::endl; 
}

Animal::Animal(const Animal &animal)
{
	this -> type = animal.type;
	std::cout << "Animal copy constructor called" << std::endl; 
}

Animal &Animal::operator=(Animal &animal)
{
	if (this != &animal)
		this -> type = animal.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Deafault animal destructor called" << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "(Animal sounds)" << std::endl;
}

std::string	Animal::getType() const
{
	return this -> type;
}
