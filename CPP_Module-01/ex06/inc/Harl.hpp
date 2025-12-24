/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamaya-g <aamaya-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 16:15:44 by aamaya-g          #+#    #+#             */
/*   Updated: 2025/12/24 16:28:05 by aamaya-g         ###   ########.fr       */
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

		void	complain(std::string level);
};

#endif
