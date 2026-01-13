/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamaya-g <aamaya-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 12:33:25 by aamaya-g          #+#    #+#             */
/*   Updated: 2026/01/13 17:17:20 by aamaya-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat()
{
	this -> Cat::type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &cat)
{
	this -> type = cat.type;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(Cat &cat)
{
	if (this != &cat)
		this -> type = cat.type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Default cat destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Miau Miau" << std::endl;
}
