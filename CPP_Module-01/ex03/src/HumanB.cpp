/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamaya-g <aamaya-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 20:15:48 by aamaya-g          #+#    #+#             */
/*   Updated: 2025/12/23 20:38:33 by aamaya-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(NULL) {}

HumanB::~HumanB () {}

void	HumanB::setWeapon(Weapon& newWeapon) { _weapon = &newWeapon; }

void	HumanB::attack() const
{
	if (_weapon) { std::cout << _name << " attacks with their " << _weapon->getType() << std::endl; }
	else { std::cout << _name << " has no weapon" << std::endl; }
}