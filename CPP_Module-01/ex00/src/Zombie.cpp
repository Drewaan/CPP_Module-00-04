/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamaya-g <aamaya-g@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 18:51:31 by aamaya-g          #+#    #+#             */
/*   Updated: 2025/12/21 18:51:31 by aamaya-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie::Zombie () {}

Zombie::Zombie(std::string name) : _name(name) { std::cout << "Constructor of " << _name << std::endl; }

Zombie::~Zombie() { std::cout << "Destructor of " << _name << std::endl; }

void	Zombie::announce(void) const { std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl; }
