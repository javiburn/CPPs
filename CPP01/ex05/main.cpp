/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:57:20 by jsarabia          #+#    #+#             */
/*   Updated: 2023/11/16 14:52:45 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl		harl;
	std::string	input;

	std::cout << "-->  Some examples so you can see how it works:" << std::endl;
	std::cout << "DEBUG:" << std::endl;
	harl.complain("DEBUG");
	std::cout << "INFO:" << std::endl;
	harl.complain("INFO");
	std::cout << "WARNING:" << std::endl;
	harl.complain("WARNING");
	std::cout << "ERROR:" << std::endl;
	harl.complain("ERROR");
	std::cout << "INVALID INPUT:" << std::endl;
	harl.complain("WHATEVER");
	while (42)
	{
		std::cout << "-->  Now try yourself: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			break;
		if (input == "EXIT")
			break;
		harl.complain(input);
	}
	std::cout << std::endl;
	std::cout << "\e[7mHarl says good bye!\e[27m" << std::endl;
	return 0;
}
