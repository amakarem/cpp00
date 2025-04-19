/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 14:36:08 by aelaaser          #+#    #+#             */
/*   Updated: 2025/04/19 15:42:21 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
	private:
		std::string first_name, last_name, phone_number, nickname, darkest_secret;
		int index;

	public:
		Contact();
		Contact(std::string first_name, std::string last_name, std::string phone_number, std::string nickname, std::string darkest_secret);
		~Contact(void);
		std::string	getLastName() const;
		std::string getFirstName() const;
		std::string getNickname() const;
		std::string getPhoneNumber() const;
		std::string getDarkestSecret() const;
		int getIndex() const;
		void setIndex(int i);

};

#endif
