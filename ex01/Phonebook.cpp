/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mika <mika@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 19:16:59 by mika              #+#    #+#             */
/*   Updated: 2025/12/17 19:43:54 by mika             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Contact.hpp"
#include "./Phonebook.hpp"

PhoneBook::PhoneBook() : _total(0), _oldest(0) {}

PhoneBook::PhoneBook(const PhoneBook& other) : _total(other._total), _oldest(other._oldest)
{
	for (int i = 0; i < 8; i++)
		Contacts[i] = other.Contacts[i];
}

/*
I actually don't know for sure if these are necessary but they might be
*/
PhoneBook& PhoneBook::operator=(const PhoneBook& other)
{
	if (this != &other)
	{
		_total = other._total;
		_oldest = other._oldest;
		for (int i = 0; i < 8; i++)
			Contacts[i] = other.Contacts[i];
	}
	return *this;
}

PhoneBook::~PhoneBook() {}

void PhoneBook::AddContact(string firstName, string lastName, string nickname,
		string phoneNumber, string darkestSecret)
{
	if (_total <= 7)
	{
		Contacts[_total] = Contact(_total, firstName, lastName,
			nickname, phoneNumber, darkestSecret);
		_total++;
	}
	else
	{
		Contacts[_oldest] = Contact(_oldest, firstName, lastName,
			nickname, phoneNumber, darkestSecret);
		_oldest++;
		if (_oldest == 8)
			_oldest = 0;
	}
}