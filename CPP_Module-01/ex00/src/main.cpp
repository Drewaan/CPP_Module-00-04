/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamaya-g <aamaya-g@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 18:19:16 by aamaya-g          #+#    #+#             */
/*   Updated: 2025/12/21 18:19:16 by aamaya-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int	main()
{
	std::cout << "----- CREATING A STACK ZOMBIE -----" << std::endl;
	Zombie	zombie("Eleder");
	zombie.announce();
	std::cout << std::endl;

	std::cout << "------ CREATING ANOTHER STACK ZOMBIE -----" << std::endl;
	std::cout << "Calling randomChump function" << std::endl;
	randomChump("Dani");
	std::cout << "Back in main after randomChump" << std::endl;
	std::cout << std::endl;

	std::cout << "------ CREATING A HEAP ZOMBIE -----" << std::endl;
	std::cout << "Calling newZombie function" << std::endl;
	Zombie	*heapZombie = newZombie("Zeco");
	heapZombie->announce();
	std::cout << std::endl;

	delete heapZombie;
	return 0;
}
