/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamaya-g <aamaya-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 10:25:54 by aamaya-g          #+#    #+#             */
/*   Updated: 2026/01/09 16:16:22 by aamaya-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

int main()
{
	ClapTrap andres("Andres");
	ClapTrap samuel("Samuel");
	ClapTrap foreign;
	foreign = samuel;

	andres.attack("Samuel");
	samuel.takeDamage(0);
	samuel.takeDamage(132);
	samuel.attack("Me");
	samuel.beRepaired(2);
	samuel.takeDamage(10);
	foreign.attack("Andres");
	return 0;
}
