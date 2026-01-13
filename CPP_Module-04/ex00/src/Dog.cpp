/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamaya-g <aamaya-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 12:54:45 by aamaya-g          #+#    #+#             */
/*   Updated: 2026/01/13 17:17:20 by aamaya-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog()
{
	this -> Dog::type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &dog)
{
	this -> type = dog.type;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(Dog &dog)
{
	if (this != &dog)
		this -> type = dog.type;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Default dog destructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Woof Woof" << std::endl;
}
