#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>
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

	Contact();
	Contact(int index, string firstName, string lastName, string nickname,
			string phoneNumber, string darkestSecret);
	Contact(const Contact& other);
	Contact& operator=(const Contact& other);
	~Contact();
	
	void PrintAsColumn();
	void PrintFull();
};
#endif
