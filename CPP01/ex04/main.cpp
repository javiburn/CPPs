/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:49:11 by jsarabia          #+#    #+#             */
/*   Updated: 2023/11/15 18:42:26 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int	errorHandler(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "\e[31mInvalid number of arguments\e[39m" << std::endl;
		return 1;
	}
	std::ifstream	infile(argv[1]);
	if (!infile.is_open())
	{
		std::cout << "\e[31mUnable to open the file\e[39m" << std::endl;
		return 2;
	}
	std::string str1 = argv[2];
	std::string str2 = argv[3];
	if (str1.length() < 1 || str2.length() < 1)
	{
		std::cout << "\e[31mYou can not enter empty values for the strings\e[39m" << std::endl;
		return 3;
	}
	return 0;
}

std::string	infileToString(char **argv)
{
	char			c;
	std::ifstream	infile(argv[1]);
	std::string		str;

	while (infile.get(c))
		str.push_back(c);
	infile.close();
	return str;
}

std::string	replaceStrings(std::string text, std::string original, std::string replacement)
{
	std::size_t	pos = 0;
	std::size_t	check = text.find(original);
	if (check >= text.length())
	{
		std::cout << "\e[31mThe string does not exist in the chosen document\e[39m" << std::endl;
		return "";
	}
	while (pos < text.length())
	{
		pos = text.find(original);
		if (pos >= text.length())
			break;
		text.erase(pos, original.length());
		text.insert(pos, replacement);
	}
	return text;
}

int main(int argc, char **argv)
{
	if (int error = errorHandler(argc, argv))
		return error;
	std::string 	original = argv[2];
	std::string		replacement = argv[3];
	std::ifstream	infile(argv[1]);
	std::string		aux = ".replace";
	std::string		filename = (const char *)argv[1] + aux;
	std::ofstream	outfile(filename, std::ios::binary);
	std::string		text = infileToString(argv);
	std::string 	newText = replaceStrings(text, original, replacement);
	if (newText.length() < 1)
		return 1;
	outfile << newText;
	outfile.close();
	return 0;
}
