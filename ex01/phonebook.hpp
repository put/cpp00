/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mika <mika@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 17:44:38 by mika              #+#    #+#             */
/*   Updated: 2025/08/26 19:21:52 by mika             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
using string = std::string;

class Contact
{
	public:
	int		Index;
	string	FirstName;
	string	LastName;
	string	Nickname;
	string	PhoneNumber;
	string	DarkestSecret;

	Contact() : Index(-1), FirstName(""), LastName(""), Nickname(""), PhoneNumber(""), DarkestSecret("") {}
	Contact(int index, string firstName, string lastName, string nickname,
			string phoneNumber, string darkestSecret);
	void PrintAsColumn();
	void PrintFull();
};

class PhoneBook
{
	private:
	int _index;
	
	public:
	Contact Contacts[8];
	void AddContact(string firstName, string lastName, string nickname,
			string phoneNumber, string darkestSecret);
};
#endif