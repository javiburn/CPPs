/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:12:56 by jsarabia          #+#    #+#             */
/*   Updated: 2024/01/08 16:57:18 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void	parseInput(char *argv, std::map<std::string, double> dataParsed)
{
	std::string 							str;
	std::string								num;
	std::ifstream							input(argv);

	while (input){
		std::getline(input, str);
		try{
			num = str;
			str.erase(str.find("|"), str.length());
			num.erase(0, num.find("|") + 1);
		}
		catch(std::exception& e){
			if (str != "date" && str[0] != '\n' && str[0] != 0)
				str += "_";
			num = "-1";
		}
		if (str != "date " && str[0] != '\n' && str[0] != 0)
			BitcoinExchange::exchangeBitcoin(dataParsed, str, std::atof(num.c_str()));
	}
	input.close();
}

std::map<std::string, double>	parseData(void)
{
	std::string 							str;
	std::string								num;
	std::ifstream							datacsv("data.csv");
	std::map<std::string, double>			map;

	while (datacsv){
		std::getline(datacsv, str);
		try{
			num = str;
			str.erase(str.find(","), str.length());
			num.erase(0, num.find(",") + 1);
		}
		catch(std::exception& e){
			if (str != "date" && str[0] != '\n')
				str += "_";
			num = "-1";
		}
		if (str != "date " && str[0] != '\n')
			map.insert(std::pair<std::string, double>(str, std::atof(num.c_str())));
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
	std::map<std::string, double> dataParsed = parseData();
	parseInput(argv[1], dataParsed);

	return 0;
}
