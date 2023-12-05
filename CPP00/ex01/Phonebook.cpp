/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:15:47 by jsarabia          #+#    #+#             */
/*   Updated: 2023/11/13 12:27:36 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void){
	return;
}

Phonebook::~Phonebook(void){
	return;
}

Contact	Phonebook::GetContact(int i)
{
	return this->list[i];
}

void	Phonebook::SetEmptiness(Contact contact){
	contact.SetFirstName("");
	contact.SetLastName("");
	contact.SetNickname("");
	contact.SetPhoneNum("");
	contact.SetSecret("");
	return ;
}

void	Phonebook::Add(int i){

	std::string	str;

	Phonebook::list[i] = Contact();
	std::cin.clear();
	std::cin.ignore(10000,'\n');
	//std::getline(std::cin, str);
	std::cout << "\033[0;30mAdding new contact...\033[0m" << std::endl;
	std::cout << "_______________________________" << std::endl;
	Phonebook::list[i].SetFirstName(str);
	while (Phonebook::list[i].GetFirstName().empty())
	{
		std::cout << "First name: ";
		std::getline(std::cin, str);
		Phonebook::list[i].SetFirstName(str);
		if (std::cin.eof())
		 	exit (1);
	}
	while (Phonebook::list[i].GetLastName().empty())
	{
		std::cout << "Last name: ";
		std::getline(std::cin, str);
		Phonebook::list[i].SetLastName(str);
		if (std::cin.eof())
		 	exit (1);
	}
	while (Phonebook::list[i].GetNickname().empty())
	{
		std::cout << "Nickname: ";
		std::getline(std::cin, str);
		Phonebook::list[i].SetNickname(str);
		if (std::cin.eof())
		 	exit (1);
	}
	while (Phonebook::list[i].GetPhoneNum().empty())
	{
		std::cout << "Phone number: ";
		std::getline(std::cin, str);
		Phonebook::list[i].SetPhoneNum(str);
		if (std::cin.eof())
		 	exit (1);
	}
	while (Phonebook::list[i].GetSecret().empty())
	{
		std::cout << "Darkest secret: ";
		std::getline(std::cin, str);
		Phonebook::list[i].SetSecret(str);
		if (std::cin.eof())
		 	exit (1);
	}
	std::cout << "_______________________________" << std::endl;
	std::cout << "\033[0;32mContact added successfully\033[0m" << std::endl;
}

int	SearchInfo(Contact list[8]){
	std::string	n;
	int			num;

	std::cout << "Enter a number to open contact's information: ";
	std::cin >> n;
	if (std::cin.eof())
		 	exit(1);
	num = atoi(n.c_str());
	if (num <= 0 || num >= 9 || list[num - 1].GetFirstName().length() == 0){
		std::cout << "\033[0;31mInvalid number\033[0m" << std::endl;
		return 1;
	}
	std::cout << "First name: " << list[num - 1].GetFirstName() << std::endl;
	std::cout << "Last name: " << list[num - 1].GetLastName() << std::endl;
	std::cout << "Nickname: " << list[num - 1].GetNickname() << std::endl;
	std::cout << "Phone number: " << list[num - 1].GetPhoneNum() << std::endl;
	std::cout << "Darkest secret: " << list[num - 1].GetSecret() << std::endl;
	return 1;
}

int	Phonebook::Search(int elements){
	std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cin.clear();
	std::cin.ignore(10000,'\n');
	if (elements > 8)
		elements = 8;
	for (int n = 1; n <= elements; n++)
	{
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout << n;
		std::cout << "|";
		if (list[n - 1].GetFirstName().size() < 10)
		{
			std::cout << std::setw(10);
			std::cout << list[n - 1].GetFirstName();
			std::cout << "|";
		}
		else
		{
			for (int j = 0; j < 9; j++){
				std::putchar(list[n - 1].GetFirstName()[j]);
			}
			std::cout << ".";
			std::cout << "|";
		}
		if (list[n - 1].GetLastName().size() < 10)
		{
			std::cout << std::setw(10);
			std::cout << list[n - 1].GetLastName();
			std::cout << "|";
		}
		else {
			for (int j = 0; j < 9; j++){
				std::putchar(list[n - 1].GetLastName()[j]);
			}
			std::cout << ".";
			std::cout << "|";
		}
		if (list[n - 1].GetNickname().size() < 10)
		{
			std::cout << std::setw(10);
			std::cout << list[n - 1].GetNickname();
			std::cout << "|" << std::endl;
		}
		else {
			for (int j = 0; j < 9; j++){
				std::putchar(list[n - 1].GetNickname()[j]);
			}
			std::cout << ".";
			std::cout << "|" << std::endl;
		}
		std::cout << "|----------|----------|----------|----------|" << std::endl;
	}
	if (SearchInfo(list))
		return (1);
	return (0);
}
