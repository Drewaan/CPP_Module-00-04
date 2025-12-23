/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamaya-g <aamaya-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 19:59:15 by aamaya-g          #+#    #+#             */
/*   Updated: 2025/12/23 20:10:25 by aamaya-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	private:
		std::string _type;

	public:
		Weapon();
		Weapon(const char *type);
		~Weapon();

		void				setType(const std::string& newType);
		const std::string&	getType(void) const;	
};

#endif