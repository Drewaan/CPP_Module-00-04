/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamaya-g <aamaya-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 16:57:22 by aamaya-g          #+#    #+#             */
/*   Updated: 2026/01/09 18:47:54 by aamaya-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap(100, 50, 20, "Default")
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << this -> _name << " ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap) : ClapTrap(scavtrap)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavtrap)
{
	if (&scavtrap != this)
	{
		std::cout << "ScravTrap " << scavtrap._name << " copied into " << this -> _name << std::endl;
		this -> _name = scavtrap._name;
		this -> _HP = scavtrap._HP;
		this -> _EP = scavtrap._EP;
		this -> _AD = scavtrap._AD;
	}
	return *this;
}

void ScavTrap::attack(const std::string &target)
{
	if (_HP == 0 || _EP == 0)
	{
		std::cout << "ScavTrap " << _name << " can't attack" << std::endl;
		return;
	}
	_EP--;
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _AD << " points of damage!" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(100, 50, 20, name)
{
	std::cout << "ScavTrap " << this -> _name << " constructor called" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this -> _name << " is now in Gate keeper mode" << std::endl;
}

unsigned int	ScavTrap::getHP(void) const
{
	return this -> _HP;
}

unsigned int	ScavTrap::getEP(void) const
{
	return this -> _EP;
}

unsigned int	ScavTrap::getAD(void) const
{
	return this -> _AD;
}

std::string	ScavTrap::getName(void) const
{
	return this -> _name;
}
