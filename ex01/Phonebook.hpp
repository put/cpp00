/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mika <mika@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 17:44:38 by mika              #+#    #+#             */
/*   Updated: 2025/12/17 19:39:07 by mika             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>
#include "./Contact.hpp"

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
using string = std::string;

class PhoneBook
{
	private:
	int _total;
	int _oldest;
	
	public:
	Contact Contacts[8];
	
	PhoneBook();
	PhoneBook(const PhoneBook& other);
	PhoneBook& operator=(const PhoneBook& other);
	~PhoneBook();
	
	void AddContact(string firstName, string lastName, string nickname,
			string phoneNumber, string darkestSecret);
};
#endif