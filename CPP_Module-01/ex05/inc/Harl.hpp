/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamaya-g <aamaya-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 13:44:55 by aamaya-g          #+#    #+#             */
/*   Updated: 2025/12/24 15:40:53 by aamaya-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
    private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

    public:
		Harl();
		~Harl();

		void	complain(const char *level);
		void	complain(std::string level);
};

#endif