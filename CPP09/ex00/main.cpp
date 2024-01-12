/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:12:56 by jsarabia          #+#    #+#             */
/*   Updated: 2024/01/12 16:49:53 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	checkLineInput(std::string str){
	static int count = 0;

	if (str == "date | value"){
		count++;
		if (count > 1)
			return 0;
		else
			return 1;
	}
	int i = 0;
	while (i < 4){
		if (!isdigit(str[i]) && str[i] != '0')
			return 0;
		i++;
	}
	if (i == 4){
		if (str[i] != '-')
			return 0;
	}
	i++;
	while (i < 7){
		if (!isdigit(str[i]) && str[i] != '0')
			return 0;
		i++;
	}
	if (i == 7){
		if (str[i] != '-')
			return 0;
	}
	i++;
	while (i < 10){
		if (!isdigit(str[i]) && str[i] != '0')
			return 0;
		i++;
	}
	if (i == 10){
		if (str[i] != ' ')
			return 0;
	}
	i++;
	if (i == 11){
		if (str[i] != '|')
			return 0;
	}
	i++;
	if (i == 12){
		if (str[i] != ' ')
			return 0;
	}
	i++;
	while (i < static_cast<int>(str.length())){
		if (!isdigit(str[i]) && str[i] != '0' && str[i] != '.')
			return 0;
		i++;
	}
	Date date(std::atoi(str.substr(0, 4).c_str()), std::atoi(str.substr(5, 2).c_str()), std::atoi(str.substr(8, 2).c_str()));
	return checkDate(date);
}

int	checkLine(std::string str){
	static int count = 0;

	if (str.length() < 1)
		return 1;
	if (str == "date,exchange_rate"){
		count++;
		if (count > 1)
			return 0;
		else
			return 1;
	}
	int i = 0;
	while (i < 4){
		if (!isdigit(str[i]) && str[i] != '0')
			return 0;
		i++;
	}
	if (i == 4){
		if (str[i] != '-')
			return 0;
	}
	i++;
	while (i < 7){
		if (!isdigit(str[i]) && str[i] != '0')
			return 0;
		i++;
	}
	if (i == 7){
		if (str[i] != '-')
			return 0;
	}
	i++;
	while (i < 10){
		if (!isdigit(str[i]) && str[i] != '0')
			return 0;
		i++;
	}
	if (i == 10){
		if (str[i] != ',')
			return 0;
	}
	i++;
	while (i < static_cast<int>(str.length())){
		if (!isdigit(str[i]) && str[i] != '0' && str[i] != '.')
			return 0;
		i++;
	}
	Date date(std::atoi(str.substr(0, 4).c_str()), std::atoi(str.substr(5, 2).c_str()), std::atoi(str.substr(8, 2).c_str()));
	return checkDate(date);
}

void	parseInput(char *argv, std::map<std::string, double> dataParsed)
{
	std::string 	str;
	std::string		num;
	std::ifstream	input(argv);

	while (input){
		std::getline(input, str);
		if (str.length() < 1 || str[0] == '\n')
			continue;
		else if (!checkLineInput(str)){
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
		}
		else{
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
		}
		if (str != "date " && str[0] != '\n' && str[0] != 0)
			BitcoinExchange::exchangeBitcoin(dataParsed, str, std::atof(num.c_str()));
	}
	input.close();
}

std::map<std::string, double>	parseData(void)
{
	std::string 					str;
	std::string						num;
	std::ifstream					datacsv("data.csv");
	std::map<std::string, double>	map;

	while (datacsv){
		std::getline(datacsv, str);
		if (!checkLine(str)){
			std::cerr << "Error" << std::endl;
			exit(1);
		}
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
