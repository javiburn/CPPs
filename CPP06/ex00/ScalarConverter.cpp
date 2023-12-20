/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 18:26:46 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/20 15:09:53 by jsarabia         ###   ########.fr       */
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
	int i = static_cast<int>(str[0]);
	float f = static_cast<int>(str[0]);
	double d = static_cast<int>(str[0]);

	std::cout << "char: \'" << str[0] << "'" <<  std::endl;
	std::cout << "int: \'" << i << "'" <<  std::endl;
	std::cout << "float: \'" << f << ".0f'" <<  std::endl;
	std::cout << "double: \'" << d << ".0'" <<  std::endl;
}

void	integer(std::string str)
{
	std::string max = "2147483647";
	std::string min = "-2147483648";
	int i = std::atoi(str.c_str());
	float f = std::atof(str.c_str());
	double d = std::atof(str.c_str());
	if (i < 32 || i > 126)
		std::cout << "char: " << "Non displayable"  << std::endl;
	else
		std::cout << "char: \'" << static_cast<char>(i) << "'" << std::endl;
	if (str.length() < max.length() || (strcmp(str.c_str(), max.c_str()) < 1 && str.length() == max.length()))
		std::cout << "int: \'" << i << "'" <<  std::endl;
	else
		std::cout << "int: " << "Non displayable"  << std::endl;
	std::cout << "float: \'" << f << ".0f'" <<  std::endl;
	std::cout << "double: \'" << d << ".0'" <<  std::endl;
}

void	floating(std::string str)
{
	std::string max = "2147483647";
	std::string min = "-2147483648";
	int i = std::atoi(str.c_str());
	float f = std::atof(str.c_str());
	double d = std::atof(str.c_str());
	if (i < 32 || i > 126)
		std::cout << "char: " << "Non displayable"  << std::endl;
	else
		std::cout << "char: \'" << static_cast<char>(i) << "'" << std::endl;
	if (str == "+inff" || str == "-inff" || str  == "nanf")
		std::cout << "int: " << "Non displayable"  << std::endl;
	else if (str.length() < max.length() || (strcmp(str.c_str(), max.c_str()) < 1 && str.length() == max.length()))
		std::cout << "int: \'" << i << "'" <<  std::endl;
	else
		std::cout << "int: " << "Non displayable"  << std::endl;
	if ((str.find(".") < str.length() - 1 && std::atoi(str.c_str() + str.find(".") + 1)) || str == "+inff" || str == "-inff" || str  == "nanf")
		std::cout << "float: \'" << f << "f'" <<  std::endl;
	else
		std::cout << "float: \'" << f << ".0f'" <<  std::endl;
	if ((str.find(".") < str.length() - 1 && std::atoi(str.c_str() + str.find(".") + 1)) || str == "+inff" || str == "-inff" || str  == "nanf")
		std::cout << "double: \'" << d << "'" <<  std::endl;
	else
		std::cout << "double: \'" << d << ".0'" <<  std::endl;
}

void	doubles(std::string str)
{
	std::string max = "2147483647";
	std::string min = "-2147483648";
	int i = std::atoi(str.c_str());
	float f = std::atof(str.c_str());
	double d = std::atof(str.c_str());
	if (i < 32 || i > 126)
		std::cout << "char: " << "Non displayable"  << std::endl;
	else
		std::cout << "char: \'" << static_cast<char>(i) << "'" << std::endl;
	if (str == "+inf" || str == "-inf" || str  == "nan")
		std::cout << "int: " << "Non displayable"  << std::endl;
	else if (str.length() < max.length() || (strcmp(str.c_str(), max.c_str()) < 1 && str.length() == max.length()))
		std::cout << "int: \'" << i << "'" <<  std::endl;
	else
		std::cout << "int: " << "Non displayable"  << std::endl;
	if ((str.find(".") < str.length() - 1 && std::atoi(str.c_str() + str.find(".") + 1)) || str == "+inf" || str == "-inf" || str  == "nan")
		std::cout << "float: \'" << f << "f'" <<  std::endl;
	else
		std::cout << "float: \'" << f << ".0f'" <<  std::endl;
	if ((str.find(".") < str.length() - 1 && std::atoi(str.c_str() + str.find(".") + 1)) || str == "+inf" || str == "-inf" || str  == "nan")
		std::cout << "double: \'" << d << "'" <<  std::endl;
	else
		std::cout << "double: \'" << d << ".0'" <<  std::endl;
}

int	checkType(std::string str){
	std::size_t aux = str.find(".");
	int count = 0;
	int count2 = 0;

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
		if (str[i] == '.')
		{
			count++;
			if (count != 1)
				return -1;
		}
		else if (str[i] == '-' || str[i] == '+'){
			count2++;
			if (count2 != 1 || i != 0)
				return -1;
		}
		else if (!isdigit(str[i])){
			if (i == int(str.length()) - 1 && str[i] == 'f')
				continue;
			else
				return -1;
		}
	}
	if (aux < str.length() && (!str[aux + 1] || (str[aux + 1] < '0' || str[aux + 1] > '9')))
		return -1;
	if (str.back() == 'f')
		return 2;
	if (aux > 0 && aux < str.length() - 1)
		return 3;
	if (!std::atoi(str.c_str()) && str[0] != '0')
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
