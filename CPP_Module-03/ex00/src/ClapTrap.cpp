/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamaya-g <aamaya-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 10:25:18 by aamaya-g          #+#    #+#             */
/*   Updated: 2026/01/09 16:12:11 by aamaya-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("Default"), _HP(10), _EP(10), _AD(0)
{
	std::cout << "ClapTrap named Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap): _name(claptrap._name), _HP(claptrap._HP), _EP(claptrap._EP), _AD(claptrap._AD)
{
	std::cout << "ClapTrap copied " << claptrap._name << " constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap)
{
	if (&claptrap != this)
	{
		std::cout << "ClapTrap " << claptrap._name << " copied into " << this -> _name << std::endl;
		this -> _name = claptrap._name;
		this -> _HP = claptrap._HP;
		this -> _EP = claptrap._EP;
		this -> _AD = claptrap._AD;
	}
	return *this;
}

ClapTrap::ClapTrap(std::string name): _name(name), _HP(10), _EP(10), _AD(0)
{
	std::cout << "ClapTrap named " << name << " constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap named " << this -> _name << " destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (_HP <= 0)
    {
        std::cout << "ClapTrap " << _name << " cannot attack because it has no hit points\n";
        return;
    }
    if (_EP <= 0)
    {
        std::cout << "ClapTrap " << _name << " has no energy points left\n";
        return;
    }
    _EP--;
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _AD << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_HP <= 0)
    {
        std::cout << "ClapTrap " << _name << " has no hit points left\n";
        return;
    }

    _HP -= amount;
    if (_HP < 0)
        _HP = 0;

    std::cout << "ClapTrap " << _name << " takes " << amount << " damage!\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_HP <= 0)
    {
        std::cout << "ClapTrap " << _name << " cannot repair because it has no hit points\n";
        return;
    }
    if (_EP <= 0)
    {
        std::cout << "ClapTrap " << _name << " has no energy points left\n";
        return;
    }

    _EP--;
    _HP += amount;

    std::cout << "ClapTrap " << _name << " repairs itself for " << amount << " hit points!\n";
}
