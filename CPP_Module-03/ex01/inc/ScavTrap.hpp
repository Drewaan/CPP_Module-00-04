/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamaya-g <aamaya-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 16:44:00 by aamaya-g          #+#    #+#             */
/*   Updated: 2026/01/09 16:50:18 by aamaya-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap
{
	private:

	public:	
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &scavtrap);
		
		~ScavTrap();
		
		ScavTrap &operator=(const ScavTrap &scavtrap);
		
		void	guardGate(void);
		void	getHP(void);
		void	getEP(void);
		void	getAD(void);
		
		std::string	getName(void);
};

#endif