/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamaya-g <aamaya-g@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 20:14:25 by aamaya-g          #+#    #+#             */
/*   Updated: 2025/12/19 20:14:25 by aamaya-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <iomanip>
# include <string>

class PhoneBook
{
	private:
		int			_nextIndex;
		int			_totalContacts;
		Contact		_contacts[8];

		int			_getDisplayId(void) const;
		void		_displayContact(int index) const;
		std::string	_trimString(std::string str, size_t len) const;
		bool		_isOnlySpace(std::string buffer) const;

	public:
		PhoneBook(void);
		~PhoneBook(void);

		void		addContact(void);
		void		searchContact(void) const;
		std::string	fieldFill(std::string fieldId);
};

#endif
