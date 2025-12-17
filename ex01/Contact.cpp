#include "./Contact.hpp"
#include <iomanip>
#include <iostream>

Contact::Contact() : Index(-1), FirstName(""), LastName(""), Nickname(""), PhoneNumber(""), DarkestSecret("") {}

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

Contact::Contact(const Contact& other)
{
	Index = other.Index;
	FirstName = other.FirstName;
	LastName = other.LastName;
	Nickname = other.Nickname;
	PhoneNumber = other.PhoneNumber;
	DarkestSecret = other.DarkestSecret;
}

Contact& Contact::operator=(const Contact& other)
{
	if (this != &other)
	{
		Index = other.Index;
		FirstName = other.FirstName;
		LastName = other.LastName;
		Nickname = other.Nickname;
		PhoneNumber = other.PhoneNumber;
		DarkestSecret = other.DarkestSecret;
	}
	return *this;
}

Contact::~Contact() {}