/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamaya-g <aamaya-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 16:17:04 by aamaya-g          #+#    #+#             */
/*   Updated: 2025/12/24 17:08:00 by aamaya-g         ###   ########.fr       */
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
	std::string	s[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*p[4])() = {&Harl:: debug, &Harl::info, &Harl::warning, &Harl::error};
	int			i = 0;

	while(i < 4 && s[i].compare(level) != 0) { i++; }
	
	if (i > 3) { std::cout << "[] Probably complaining about insignificant problems ]" << std::endl; }
	
	while(i < 4) { (this->*p[i++])(); }
}
