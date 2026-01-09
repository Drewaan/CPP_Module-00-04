/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamaya-g <aamaya-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 10:20:12 by aamaya-g          #+#    #+#             */
/*   Updated: 2026/01/09 15:23:13 by aamaya-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string		_name;
		unsigned int	_HP;
		unsigned int	_EP;
		unsigned int	_AD;

	public:
		ClapTrap(void);
		ClapTrap(const ClapTrap &claptrap);
		ClapTrap &operator=(const ClapTrap &claptrap);
		ClapTrap(std::string name);
		~ClapTrap();

		void	attack(const std::string& target );
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif

