/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamaya-g <aamaya-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 12:50:03 by aamaya-g          #+#    #+#             */
/*   Updated: 2026/01/08 16:37:08 by aamaya-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					_n;
		static const int	_c = 8;

	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float n);
		Fixed(const Fixed &fixed);
		
		~Fixed();

		Fixed	&operator=(const Fixed &Fixed);

		int		toInt(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int raw);
		float	toFloat(void) const;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &Fixed);

#endif