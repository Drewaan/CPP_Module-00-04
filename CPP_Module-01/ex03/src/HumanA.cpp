/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamaya-g <aamaya-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 20:16:09 by aamaya-g          #+#    #+#             */
/*   Updated: 2025/12/23 20:29:26 by aamaya-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& type): _name(name), _weapon(type) {}

HumanA::~HumanA() {}


void	HumanA::attack() const { std::cout << _name << " attacks with their " << _weapon.getType() << std::endl; }
