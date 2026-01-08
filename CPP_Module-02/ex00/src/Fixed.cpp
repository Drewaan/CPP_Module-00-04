/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamaya-g <aamaya-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 17:47:55 by aamaya-g          #+#    #+#             */
/*   Updated: 2026/01/08 12:39:31 by aamaya-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed(void): _rawBits(0) { std::cout << "Default constructor called" << std::endl; }

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this -> _rawBits = rhs.getRawBits();
	return *this;
}

Fixed::~Fixed(void) { std::cout << "Destructor called" << std::endl; }

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this -> _rawBits;
}

void	Fixed::setRawBits(int const raw) { this -> _rawBits = raw; }

