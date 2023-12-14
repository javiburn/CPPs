/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:13:31 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/14 18:51:15 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	std::string str = "";

	if (argc != 2)
		std::cerr << "Invalid number of arguments" << std::endl;
	else
	{
		str += argv[1];
		std::cout << str << std::endl;
		ScalarConverter::convert(argv[1]);
	}
	return 0;
}
