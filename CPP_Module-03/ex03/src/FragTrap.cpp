/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamaya-g <aamaya-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 19:05:19 by aamaya-g          #+#    #+#             */
/*   Updated: 2026/01/09 19:24:36 by aamaya-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap(100, 100, 30, "Default")
{
	std::cout << "Default FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(100, 100, 30, name)
{
	std::cout << "FragTrap " << name << " constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragtrap) : ClapTrap(fragtrap)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << this -> _name << " FragTrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &fragtrap)
{
	if (&fragtrap != this)
	{
		std::cout << "FragTrap " << fragtrap._name << " copied into " << this -> _name << std::endl;
		this -> _name = fragtrap._name;
		this -> _HP = fragtrap._HP;
		this -> _EP = fragtrap._EP;
		this -> _AD = fragtrap._AD;
	}
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << this->_name << " requests a positive high five" << std::endl;
}

unsigned int	FragTrap::getHP(void) const
{
	return this -> _HP;
}

unsigned int	FragTrap::getEP(void) const
{
	return this -> _EP;
}

unsigned int	FragTrap::getAD(void) const
{
	return this -> _AD;
}

std::string	FragTrap::getName(void) const
{
	return this -> _name;
}
