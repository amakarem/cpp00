/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 14:42:52 by aelaaser          #+#    #+#             */
/*   Updated: 2025/04/19 15:39:41 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::Contact(std::string _first_name, std::string _last_name, std::string _phone_number, std::string _nickname, std::string _darkest_secret) {
	first_name = _first_name;
	last_name = _last_name;
	phone_number = _phone_number;
	nickname = _nickname;
	darkest_secret = _darkest_secret;
}

Contact::~Contact()
{
}

std::string	Contact::getLastName() const
{
	return (last_name);
}

std::string	Contact::getFirstName() const
{
	return (first_name);
}

std::string	Contact::getNickname() const
{
	return (nickname);
}

std::string	Contact::getPhoneNumber() const
{
	return (phone_number);
}

std::string	Contact::getDarkestSecret() const
{
	return (darkest_secret);
}

int Contact::getIndex() const {
	return index;
}

void Contact::setIndex(int i) {
	index = i;
}
