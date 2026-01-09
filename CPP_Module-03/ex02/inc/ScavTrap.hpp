/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamaya-g <aamaya-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 16:44:00 by aamaya-g          #+#    #+#             */
/*   Updated: 2026/01/09 19:20:34 by aamaya-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:	
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &scavtrap);
		
		~ScavTrap();
		
		ScavTrap &operator=(const ScavTrap &scavtrap);
		
		void	guardGate(void);
		void 	attack(const std::string &target);
		
		unsigned int	getHP(void) const;
		unsigned int	getEP(void) const;
		unsigned int	getAD(void) const;
		std::string		getName(void) const;
};

#endif
