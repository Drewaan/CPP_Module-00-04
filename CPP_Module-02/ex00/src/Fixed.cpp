/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamaya-g <aamaya-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 17:47:55 by aamaya-g          #+#    #+#             */
/*   Updated: 2025/12/29 18:26:33 by aamaya-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed(void) : _rawBits(0) { std::cout << "Default constructor called" << std::endl; }

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	
}

Fixed&	Fixed::operator = (const Fixed& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	
}
