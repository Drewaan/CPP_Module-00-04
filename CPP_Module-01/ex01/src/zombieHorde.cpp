/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamaya-g <aamaya-g@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 21:14:26 by aamaya-g          #+#    #+#             */
/*   Updated: 2025/12/21 21:14:26 by aamaya-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie *zombieHorde(int N, const char *name)
{
	if (!name) 
	{
		std::cerr << "Error: invalid name" << std::endl;
		return NULL;
	}
	else
		return zombieHorde(N, std::string(name));
}

Zombie	*zombieHorde(int N, std::string name)
{
	if (N <= 0)
	{
		std::cerr << "Error: invalid number" << std::endl;
		return NULL;
	}
	if (N > 1000)
	{
		std::cerr << "Error: Irrational quantity" << std::endl;
		return NULL;
	}
	if (name.empty())
		name = "default";
	Zombie	*newHorde = new Zombie[N];
	for (int i = 0; i < N; i++)
		newHorde[i].setName(name);
	return newHorde;
}
