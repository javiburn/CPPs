/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:54:00 by jsarabia          #+#    #+#             */
/*   Updated: 2023/11/13 13:07:03 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "Memory address of the string is: " << &str << std::endl;
	std::cout << "Memory address of the pointer is: " << stringPTR << std::endl;
	std::cout << "Memory address of the reference is: " << &stringREF << std::endl;
	std::cout << "______________________________________________________" << std::endl;
	std::cout << "Value of the string is: " << str << std::endl;
	std::cout << "Value of the pointer is: " << *(stringPTR) << std::endl;
	std::cout << "Value of the reference is: " << stringREF << std::endl;
	return 0;
}
