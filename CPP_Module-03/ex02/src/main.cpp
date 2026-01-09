/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamaya-g <aamaya-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:45:15 by aamaya-g          #+#    #+#             */
/*   Updated: 2026/01/09 19:24:39 by aamaya-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"


int main()
{
	std::cout << "========== CONSTRUCTORS TEST ==========" << std::endl;
	FragTrap a;
	FragTrap b("Felipe");
	FragTrap c(b);
	FragTrap d("Me");

	std::cout << "\n========== STATS TEST ==========" << std::endl;
	std::cout << b.getName() << " - HP: " << b.getHP() << " EP: " << b.getEP() << " AD: " << b.getAD() << std::endl;

	std::cout << "\n========== ATTACK TEST ==========" << std::endl;
	b.attack("enemy");
	std::cout << b.getName() << " - EP after attack: " << b.getEP() << std::endl;

	std::cout << "\n========== TAKE DAMAGE TEST ==========" << std::endl;
	std::cout << b.getName() << " - HP before damage: " << b.getHP() << std::endl;
	b.takeDamage(50);
	std::cout << b.getName() << " - HP after 50 damage: " << b.getHP() << std::endl;
	
	std::cout << "\n========== REPAIR TEST ==========" << std::endl;
	b.beRepaired(20);
	std::cout << b.getName() << " - HP after repair: " << b.getHP() << " EP: " << b.getEP() << std::endl;

	std::cout << "\n========== HIGH FIVE TEST ==========" << std::endl;
	b.highFivesGuys();

	std::cout << "\n========== COPY OPERATOR TEST ==========" << std::endl;
	a = d;

	std::cout << "\n========== DESTRUCTORS ==========" << std::endl;
	return 0;
}
