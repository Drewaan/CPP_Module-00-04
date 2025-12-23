/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamaya-g <aamaya-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 18:44:09 by aamaya-g          #+#    #+#             */
/*   Updated: 2025/12/23 19:13:33 by aamaya-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "--- MEMORY ADRESSES ---" << std::endl;
	std::cout << "Adress of str :" << str << std::endl;
	std::cout << "Adress held by stringPTR:" << stringPTR << std::endl;
	std::cout << "Adress held by stringREF:" << &stringREF << std::endl;
	std::cout << std::endl;

	std::cout << "--- VALUES ---" << std::endl;
	std::cout << "Value of str :" << str << std::endl;
	std::cout << "Value pointed by stringPTR:" << stringPTR << std::endl;
	std::cout << "Value pointed by stringREF:" << &stringREF << std::endl;

	return 0;
}
