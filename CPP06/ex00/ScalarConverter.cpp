/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 18:26:46 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/18 12:20:34 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void){
	return;
}

ScalarConverter::ScalarConverter(const ScalarConverter& conv){
	(void)conv;
	return;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& conv){
	(void)conv;
	return *this;
}

ScalarConverter::~ScalarConverter(void){
	return;
}

int	checkType(std::string std){
	if ((std[0] < '0' || std[0] > '9') && std[0] != '+' && std[0] != '-')
	{
		if (std.length() == 1)
			return 0;
		else if (std == "nan")
			return 3;
		else
			return -1;
	}
	return 1;
}

void	ScalarConverter::convert(std::string representation){
	std::string type[] = {"char", "int", "float", "double"};
	int n = 0;
	n = checkType(representation);
	if (n < 0)
	{
		std::cerr << "Invalid input" << std::endl;
		return;
	}
	if (n == 0)
		std::cout << "char: \' " << representation[0] << "'" <<  std::endl;
	else{
		int aux = std::atoi(representation.c_str());
		if (aux < 32 || aux > 126)
			std::cout << "char: " << "The introduced input can not be displayed as a character"  << std::endl;
		else
			std::cout << "char: \'" << char(aux) << "'" << std::endl;
	}
	return;
}
