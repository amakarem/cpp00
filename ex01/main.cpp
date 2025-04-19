/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 14:37:52 by aelaaser          #+#    #+#             */
/*   Updated: 2025/04/19 15:44:29 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <limits> // for std::numeric_limits

void printWelcome() {
	std::cout << "📞 Welcome to Your Awesome PhoneBook 📖\n";
	std::cout << "Available commands:\n";
	std::cout << "  - ADD    ➤ Add a new contact\n";
	std::cout << "  - SEARCH ➤ View contacts\n";
	std::cout << "  - EXIT   ➤ Quit the program\n\n";
}

std::string prompt(const std::string& field) {
	std::string input;
	while (true) {
		std::cout << "Enter " << field << ": ";
		std::getline(std::cin, input);

		if (std::cin.eof()) {
			std::cout << "\nEOF received. Exiting.\n";
			exit(0);
		}

		if (!input.empty()) return input;
		std::cout << "Field cannot be empty. Please try again.\n";
	}
}

int main() {
	PhoneBook phoneBook;
	std::string command;

	printWelcome();

	while (true) {
		std::cout << "\n> ";
		std::getline(std::cin, command);

		if (std::cin.eof()) {
			std::cout << "\nEOF received. Exiting.\n";
			break;
		}

		if (command == "ADD") {
			std::string first = prompt("first name");
			std::string last = prompt("last name");
			std::string nick = prompt("nickname");
			std::string phone = prompt("phone number");
			std::string secret = prompt("darkest secret");

			Contact c(first, last, phone, nick, secret);
			phoneBook.addContact(c);

			std::cout << "✅ Contact added successfully!";
		}
		else if (command == "SEARCH") {
			phoneBook.displayContacts();

			std::cout << "Enter the index of the contact to view details: ";
			std::string input;
			std::getline(std::cin, input);

			if (std::cin.eof()) break;

			try {
				int index = std::stoi(input);
				Contact c = phoneBook.getContact(index);

				std::cout << "\n📇 Contact Details:\n";
				std::cout << "First Name:     " << c.getFirstName() << "\n";
				std::cout << "Last Name:      " << c.getLastName() << "\n";
				std::cout << "Nickname:       " << c.getNickname() << "\n";
				std::cout << "Phone Number:   " << c.getPhoneNumber() << "\n";
				std::cout << "Darkest Secret: " << c.getDarkestSecret() << "\n";

			} catch (std::exception& e) {
				std::cout << "❌ Invalid input. Please enter a number between 0 and 7.\n";
			}
		}
		else if (command == "EXIT") {
			std::cout << "👋 Exiting PhoneBook. Goodbye!\n";
			break;
		}
		else {
			std::cout << "Unknown command. Type ADD, SEARCH, or EXIT.\n";
		}
	}

	return 0;
}
