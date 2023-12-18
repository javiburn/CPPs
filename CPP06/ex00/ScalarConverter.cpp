/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 18:26:46 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/18 15:36:50 by jsarabia         ###   ########.fr       */
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

void	character(std::string str)
{
	std::cout << "char: \'" << str[0] << "'" <<  std::endl;
	std::cout << "int: \'" << int(str[0]) << "'" <<  std::endl;
	std::cout << "float: \'" << int(str[0]) << ".0f'" <<  std::endl;
	std::cout << "double: \'" << int(str[0]) << ".0'" <<  std::endl;
}

void	integer(std::string str)
{
	std::string max = "2147483647";
	std::string min = "-2147483648";
	int aux = std::atoi(str.c_str());
	if (aux < 32 || aux > 126)
		std::cout << "char: " << "Non displayable"  << std::endl;
	else
		std::cout << "char: \'" << char(aux) << "'" << std::endl;
	if (str.length() < max.length() || (strcmp(str.c_str(), max.c_str()) < 1 && str.length() == max.length()))
		std::cout << "int: \'" << std::atoi(str.c_str()) << "'" <<  std::endl;
	else
		std::cout << "int: " << "Non displayable"  << std::endl;
	std::cout << "float: \'" << std::atof(str.c_str()) << ".0f'" <<  std::endl;
	std::cout << "double: \'" << std::atof(str.c_str()) << ".0'" <<  std::endl;
}

void	floating(std::string str)
{
	std::string max = "2147483647";
	std::string min = "-2147483648";
	int aux = std::atoi(str.c_str());
	if (aux < 32 || aux > 126)
		std::cout << "char: " << "Non displayable"  << std::endl;
	else
		std::cout << "char: \'" << char(aux) << "'" << std::endl;
	if (str == "+inff" || str == "-inff" || str  == "nanf")
		std::cout << "int: " << "Non displayable"  << std::endl;
	else if (str.length() < max.length() || (strcmp(str.c_str(), max.c_str()) < 1 && str.length() == max.length()))
		std::cout << "int: \'" << std::atoi(str.c_str()) << "'" <<  std::endl;
	else
		std::cout << "int: " << "Non displayable"  << std::endl;
	if ((str.find(".") < str.length() - 1 && std::atoi(str.c_str() + str.find(".") + 1)) || str == "+inff" || str == "-inff" || str  == "nanf")
		std::cout << "float: \'" << std::atof(str.c_str()) << "f'" <<  std::endl;
	else
		std::cout << "float: \'" << std::atof(str.c_str()) << ".0f'" <<  std::endl;
	if ((str.find(".") < str.length() - 1 && std::atoi(str.c_str() + str.find(".") + 1)) || str == "+inff" || str == "-inff" || str  == "nanf")
		std::cout << "double: \'" << std::atof(str.c_str()) << "'" <<  std::endl;
	else
		std::cout << "double: \'" << std::atof(str.c_str()) << ".0'" <<  std::endl;
}

void	doubles(std::string str)
{
	std::string max = "2147483647";
	std::string min = "-2147483648";
	int aux = std::atoi(str.c_str());
	if (aux < 32 || aux > 126)
		std::cout << "char: " << "Non displayable"  << std::endl;
	else
		std::cout << "char: \'" << char(aux) << "'" << std::endl;
	if (str == "+inf" || str == "-inf" || str  == "nan")
		std::cout << "int: " << "Non displayable"  << std::endl;
	else if (str.length() < max.length() || (strcmp(str.c_str(), max.c_str()) < 1 && str.length() == max.length()))
		std::cout << "int: \'" << std::atoi(str.c_str()) << "'" <<  std::endl;
	else
		std::cout << "int: " << "Non displayable"  << std::endl;
	if ((str.find(".") < str.length() - 1 && std::atoi(str.c_str() + str.find(".") + 1)) || str == "+inf" || str == "-inf" || str  == "nan")
		std::cout << "float: \'" << std::atof(str.c_str()) << "f'" <<  std::endl;
	else
		std::cout << "float: \'" << std::atof(str.c_str()) << ".0f'" <<  std::endl;
	if ((str.find(".") < str.length() - 1 && std::atoi(str.c_str() + str.find(".") + 1)) || str == "+inf" || str == "-inf" || str  == "nan")
		std::cout << "double: \'" << std::atof(str.c_str()) << "'" <<  std::endl;
	else
		std::cout << "double: \'" << std::atof(str.c_str()) << ".0'" <<  std::endl;
}

int	checkType(std::string str){
	std::size_t aux = str.find(".");

	if ((str[0] < '0' || str[0] > '9') && str[0] != '+' && str[0] != '-')
	{
		if (str.length() == 1)
			return 0;
		else if (str == "nan")
			return 3;
		else if (str == "nanf")
			return 2;
		else
			return -1;
	}
	if (str == "-inf" || str == "+inf")
		return 3;
	if (str == "-inff" || str == "+inff")
		return 2;
	for (int i = 0; i < int(str.length()); i++){
		if (!isdigit(str[i])){
			if (i == int(str.length()) - 1 && str[i] == 'f')
				continue;
			else
				return -1;
		}
	}
	if (!str[aux + 1] || (str[aux + 1] < '0' || str[aux + 1] > '9'))
		return -1;
	if (str.back() == 'f')
		return 2;
	if (aux > 0 && aux < str.length() - 1)
		return 3;
	if (!std::atoi(str.c_str()))
			return -1;
	return 1;
}

void	showError(void)
{
	std::cout << "char: " << "Non displayable"  << std::endl;
	std::cout << "int: " << "Non displayable"  << std::endl;
	std::cout << "float: " << "Non displayable"  << std::endl;
	std::cout << "double: " << "Non displayable"  << std::endl;
}

void	ScalarConverter::convert(std::string representation){
	std::string type[] = {"char", "int", "float", "double"};
	int n = 0;
	n = checkType(representation);
	void	(*f[])(std::string) = {&character, &integer, &floating, &doubles};
	if (n < 0)
	{
		std::cerr << "Invalid input" << std::endl;
		return;
	}
	if (representation.length() > 308)
		return showError();
	f[n](representation);
	return;
}
