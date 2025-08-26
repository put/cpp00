/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mika <mika@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 17:44:21 by mika              #+#    #+#             */
/*   Updated: 2025/08/26 19:06:51 by mika             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./phonebook.hpp"

string GetContactDetail(string type)
{
	string result = "";
	
	while (result.length() == 0)
	{
		std::cout << "Enter " << type << " -> ";
		getline(std::cin, result);
	}
	return result;
}

void AddNewContact(PhoneBook& pb)
{
	string firstName = GetContactDetail("first name");
	string lastName = GetContactDetail("last name");
	string nickname = GetContactDetail("nickname");
	string phoneNumber = GetContactDetail("phone number");
	string darkestSecret = GetContactDetail("darkest secret");

	pb.AddContact(firstName, lastName, nickname, phoneNumber, darkestSecret);
}

void SearchContact(PhoneBook& pb)
{
	string result = "";
	
	if (pb.Contacts[0].Index == -1)
	{
		std::cout << "No contacts in phone book yet!" << std::endl;
		return;
	}
	for (Contact c : pb.Contacts)
	{
		if (c.Index == -1)
			continue;
		c.PrintAsColumn();
	}
	while (result.length() != 1 || !(result[0] >= '0' && result[0] <= '8'))
	{
		std::cout << "Enter index -> ";
		getline(std::cin, result);
	}
	pb.Contacts[result[0] - 48].PrintFull();
}

int main()
{
	PhoneBook pb = PhoneBook();
	string result = "";

	std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
	while (true)
	{
		std::cout << "Enter command -> ";
		getline(std::cin, result);
		if (result == "EXIT")
			return (0);
		if (result == "ADD")
			AddNewContact(pb);
		if (result == "SEARCH")
			SearchContact(pb);
	}
}