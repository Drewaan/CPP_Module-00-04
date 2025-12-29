/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamaya-g <aamaya-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 16:17:04 by aamaya-g          #+#    #+#             */
/*   Updated: 2025/12/29 13:51:34 by aamaya-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

Harl::Harl() {};

Harl::~Harl() {};

void	Harl::debug(void) { std::cout << "[DEBUG]\n" << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl; }

void	Harl::info(void) { std::cout << "[INFO]\n" << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl; }

void	Harl::warning(void) { std::cout << "[WARNING]\n" << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years, whereas you started working here just last month.\n" << std::endl; }

void	Harl::error(void) { std::cout << "[ERROR]\n" << "This is unacceptable! I want to speak to the manager now." << std::endl; }

void	Harl::complain(std::string level)
{
	int	x = -1;
	std::string	arr[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for(int i = 0; i < 4; i++)
		if(arr[i] == level)
		{
				x = i;
				break ;
		}

	switch (x)
	{
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
		break ;
		default:
			break;
	}
}