/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamaya-g <aamaya-g@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 20:42:54 by aamaya-g          #+#    #+#             */
/*   Updated: 2025/12/21 20:42:54 by aamaya-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie() { std::cout << "Destructor of " << _name << std::endl; }

void	Zombie::setName(std::string input) { _name = input; }

void Zombie::announce(void) const { std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl; }