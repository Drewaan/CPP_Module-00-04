/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamaya-g <aamaya-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 20:04:36 by aamaya-g          #+#    #+#             */
/*   Updated: 2025/12/23 20:14:11 by aamaya-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(const char *type)
{
	if (type)
		_type = std::string(type);
	else
		_type = "default";
}

Weapon::~Weapon() {}

void	Weapon::setType(const std::string& newtype) {_type = newtype ;}

const std::string&	Weapon::getType(void) const { return (_type); }
