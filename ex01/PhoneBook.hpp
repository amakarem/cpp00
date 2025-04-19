/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 15:06:17 by aelaaser          #+#    #+#             */
/*   Updated: 2025/04/19 15:32:33 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int contactCount;
		int nextIndex;

	public:
		PhoneBook();
		~PhoneBook(void);
		void addContact(const Contact& contact);
		void displayContacts() const;
		Contact getContact(int index) const;
};

#endif
