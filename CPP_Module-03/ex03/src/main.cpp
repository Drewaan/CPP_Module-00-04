/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamaya-g <aamaya-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:45:15 by aamaya-g          #+#    #+#             */
/*   Updated: 2026/01/09 19:51:08 by aamaya-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/DiamondTrap.hpp"

int main()
{
	std::cout << "========== DIAMONDTRAP CONSTRUCTOR TEST ==========" << std::endl;
	DiamondTrap diamond("Shiny");

	std::cout << "\n========== WHO AM I TEST ==========" << std::endl;
	diamond.whoAmI();

	std::cout << "\n========== ATTACK TEST (uses ScavTrap::attack) ==========" << std::endl;
	diamond.attack("enemy");

	std::cout << "\n========== INHERITED ABILITIES TEST ==========" << std::endl;
	diamond.guardGate();
	diamond.highFivesGuys();

	std::cout << "\n========== TAKE DAMAGE TEST ==========" << std::endl;
	diamond.takeDamage(30);

	std::cout << "\n========== REPAIR TEST ==========" << std::endl;
	diamond.beRepaired(10);

	std::cout << "\n========== COPY CONSTRUCTOR TEST ==========" << std::endl;
	DiamondTrap diamond2(diamond);
	diamond2.whoAmI();

	std::cout << "\n========== ASSIGNMENT OPERATOR TEST ==========" << std::endl;
	DiamondTrap diamond3("Rusty");
	diamond3 = diamond;
	diamond3.whoAmI();

	std::cout << "\n========== DESTRUCTORS ==========" << std::endl;
	return 0;
}
