/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mika <mika@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 19:16:59 by mika              #+#    #+#             */
/*   Updated: 2025/08/26 19:20:34 by mika             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./phonebook.hpp"

Contact::Contact(int index, string firstName, string lastName, string nickname,
			string phoneNumber, string darkestSecret)
{
		Index = index;
		FirstName = firstName;
		LastName = lastName;
		Nickname = nickname;
		PhoneNumber = phoneNumber;
		DarkestSecret = darkestSecret;
}

void Contact::PrintAsColumn()
{
	string shortFirst = FirstName.substr(0, 10);
	string shortLast = LastName.substr(0, 10);
	string shortNick = Nickname.substr(0, 10);
	if (shortFirst.length() == 10)
		shortFirst[9] = '.';
	if (shortLast.length() == 10)
		shortLast[9] = '.';
	if (shortNick.length() == 10)
		shortNick[9] = '.';
	std::cout << std::setw(10) << Index << "|"
				<< std::setw(10) << shortFirst << "|"
				<< std::setw(10) << shortLast << "|"
				<< std::setw(10) << shortNick << std::endl;
}

void Contact::PrintFull()
{
	std::cout << "First name: " << FirstName << "\n"
				<< "Last name: " << LastName << "\n"
				<< "Nickname: " << Nickname << "\n"
				<< "Phone: " << PhoneNumber << "\n"
				<< "Darkest secret: " << DarkestSecret << std::endl;
}

void PhoneBook::AddContact(string firstName, string lastName, string nickname,
		string phoneNumber, string darkestSecret)
{
	Contacts[_index] = Contact(_index, firstName, lastName, 
								nickname, phoneNumber, darkestSecret);
	if (_index < 7)
		_index++;
}