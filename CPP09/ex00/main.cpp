/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:12:56 by jsarabia          #+#    #+#             */
/*   Updated: 2024/01/08 13:09:15 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::map<std::string, int>	parseData(void)
{
	std::string 				str;
	std::ifstream				datacsv("data.csv");
	std::map<std::string, int>	map;

	while (datacsv){
		std::getline(datacsv, str);
		try{
			str.erase(str.find(","), str.length());
		}
		catch(std::exception& e){
			//std::cerr << e.what() << std::endl;
			break;
		}
		std::cout << "|" << str << "|" << std::endl;
	}
	datacsv.close();
	return map;
}

int main(int argc, char **argv)
{
	std::string str;

	if (argc != 2)
	{
		std::cerr << "Error: could not open file." << std::endl;
		return 1;
	}
	std::ifstream	datacsv("data.csv");
	if (!datacsv.is_open())
	{
		std::cerr << "Error: could not open data file." << std::endl;
		return 2;
	}
	std::ifstream	infile(argv[1]);
	if (!infile.is_open())
	{
		std::cerr << "Error: could not open file." << std::endl;
		return 3;
	}
	std::map<std::string, int> dataParsed = parseData();

	return 0;
}
