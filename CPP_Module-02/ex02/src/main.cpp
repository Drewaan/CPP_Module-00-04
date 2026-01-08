/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamaya-g <aamaya-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:45:15 by aamaya-g          #+#    #+#             */
/*   Updated: 2026/01/08 18:59:33 by aamaya-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

int main( void )
{
	Fixed	a;
	Fixed	const b( Fixed( 5.05f ) / Fixed( 2 ));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	
	std::cout << "a is: "<< a << std::endl;
	std::cout << "b is: "<< b << std::endl;
	std::cout << "max is: "<< Fixed::max( a, b ) << std::endl;

	while (b >= a)
		a++;

	std::cout << "a is: "<< a << std::endl;
	std::cout << "b is: "<< b << std::endl;
	std::cout << "max is: "<< Fixed::max( a, b ) << std::endl;
}
