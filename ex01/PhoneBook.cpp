/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 15:07:00 by aelaaser          #+#    #+#             */
/*   Updated: 2025/04/19 15:42:05 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

std::string truncate(const std::string& str) {
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

PhoneBook::PhoneBook() {
	contactCount = 0;
	nextIndex = 0;
}

PhoneBook::~PhoneBook() {}

void PhoneBook::addContact(const Contact& contact) {
	Contact newContact = contact;
	newContact.setIndex(nextIndex);
	contacts[nextIndex] = newContact;

	if (contactCount < 8) {
		contactCount++;
		nextIndex++;
	}
	else
		nextIndex = 0;
}

void PhoneBook::displayContacts() const {
	std::cout << std::setw(10) << "Index" << "|"
	          << std::setw(10) << "First Name" << "|"
	          << std::setw(10) << "Last Name" << "|"
	          << std::setw(10) << "Nickname" << "\n";

	for (int i = 0; i < contactCount; ++i) {
		std::cout << std::setw(10) << contacts[i].getIndex() << "|"
		          << std::setw(10) << truncate(contacts[i].getFirstName()) << "|"
		          << std::setw(10) << truncate(contacts[i].getLastName()) << "|"
		          << std::setw(10) << truncate(contacts[i].getNickname()) << "\n";
	}
}

Contact PhoneBook::getContact(int index) const {
	if (index >= 0 && index < contactCount)
		return contacts[index];
	else {
		std::cerr << "Invalid index\n";
		return Contact(); // empty
	}
}
