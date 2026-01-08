/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamaya-g <aamaya-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:45:09 by aamaya-g          #+#    #+#             */
/*   Updated: 2026/01/08 17:26:06 by aamaya-g         ###   ########.fr       */
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

		Fixed	&operator=(const Fixed &fixed );
		Fixed	operator+(const Fixed &fixed1) const;
		Fixed	operator-(const Fixed &fixed1) const;
		Fixed	operator*(const Fixed &fixed1) const;
		Fixed	operator/(const Fixed &fixed1) const;

		Fixed	&operator++(void);
		Fixed	&operator--(void);

		//Postincrement
		Fixed	operator++(int n);
		Fixed	operator--(int n);

		bool	operator>(const Fixed &fixed1) const;
		bool	operator<(const Fixed &fixed1) const;
		bool	operator>=(const Fixed &fixed1) const;
		bool	operator<=(const Fixed &fixed1) const;
		bool	operator==(const Fixed &fixed1) const;
		bool	operator!=(const Fixed &fixed1) const;

		int		toInt(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int raw);
		float	toFloat(void)const;

		static Fixed	min(Fixed &fixed1, Fixed &fixed2);
		static Fixed	min(const Fixed &fixed1, const Fixed &fixed2);
		
		static Fixed	max(Fixed &fixed1, Fixed &fixed2);
		static Fixed	max(const Fixed &fixed1, const Fixed &fixed2);
	};

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed);

#endif
