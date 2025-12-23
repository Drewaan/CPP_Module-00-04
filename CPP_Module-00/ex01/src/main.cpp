/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamaya-g <aamaya-g@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 20:51:19 by aamaya-g          #+#    #+#             */
/*   Updated: 2025/12/19 20:51:19 by aamaya-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"

int	main(void)
{
	std::string		buffer;
	PhoneBook		MyPhoneBook;

	std::cout << "** Welcome in this awesome PhoneBook **" << std::endl;
	std::cout << "> Type int ADD, SEARCH or EXIT:" << std::endl;

	while (std::getline(std::cin, buffer))
	{
		if (buffer == "ADD")
			MyPhoneBook.addContact();
		else if (buffer == "SEARCH")
			MyPhoneBook.searchContact();
		else if (buffer == "EXIT")
			break ;
		else
			std::cout << "** UNKNOWN COMMAND **" << std::endl;

		if (std::cin.eof())
			break ;

		std::cout << "> type in ADD, SEARCH or EXIT:" << std::endl;
	}
	std::cout << "** Leaving PhoneBook bye **" << std::endl;
	return 0;
}