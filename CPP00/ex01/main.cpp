/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:24:57 by jsarabia          #+#    #+#             */
/*   Updated: 2023/11/13 12:27:23 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main(){
	Phonebook	phonebook;
	std::string	start = "Phonebook initiallizing";
	std::string str;
	int i = 0;
	int status = 0;
	int	elements = 0;

	phonebook = Phonebook();
	std::cout << "\033[0;30mPhonebook initiallizing...\033[0m" << std::endl;
	sleep(1);
	std::cout << "\033[0;32mPhonebook Initiallized\033[0m" << std::endl;
	while (42)
	{
		std::cout << "\e[3mADD / SEARCH / EXIT\e[23m" << std::endl;
		std::cout << "Select an option: ";
		std::cin >> str;
		if (std::cin.eof())
		 	return 1;
		if (!strcmp(str.c_str(), "ADD")){
			if (i == 8)
				i = 0;
			if (elements < 9)
				elements++;
			phonebook.Add(i);
			i++;
		}
		else if (!strcmp(str.c_str(), "SEARCH")){
			status = phonebook.Search(elements);
		}
		else if (!strcmp(str.c_str(), "EXIT")){
			std::cout << "\e[7mGood bye!\e[27m" << std::endl;
			break;
		}
		else{
			std::cout << "\033[0;31mInvalid input\033[0m" << std::endl;
		}
	}
	return (0);
}
