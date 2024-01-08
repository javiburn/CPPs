/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:28:19 by jsarabia          #+#    #+#             */
/*   Updated: 2024/01/08 17:49:08 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void){
	return;
}
BitcoinExchange::BitcoinExchange(const BitcoinExchange& bit){
	(void)bit;
	return;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& bit){
	(void)bit;
	return *this;
}

BitcoinExchange::~BitcoinExchange(void){
	return;
}

int	checkValidID(std::string date){
	std::string year = date;
	std::string month = date;
	std::string day = date;

	if (date[4] != '-' || date[7] != '-' || std::isdigit(date[10]))
		return 0;
	year = year.erase(4, date.length());
	month = month.erase(7, date.length());
	month.erase(month.begin(), month.end() - 2);
	day.erase(day.begin(), day.end() - 3);
	if (std::atoi(year.c_str()) < 2009 || std::atoi(year.c_str()) > 2024)
		return 0;
	if (std::atoi(month.c_str()) < 1 || std::atoi(month.c_str()) > 12)
		return 0;
	if (std::atoi(day.c_str()) < 1 || std::atoi(day.c_str()) > 31)
		return 0;
	return 1;
}

int	checkValidValue(double num){
	if (num < 1)
		return 0;
	else if (num > 10000)
		return 0;
	return 1;
}

std::string	setDate(std::string date){
	std::string year = date;
	std::string month = date;
	std::string day = date;
	std::string newDate;

	year = year.erase(4, date.length());
	month = month.erase(7, date.length());
	month.erase(month.begin(), month.end() - 2);
	day.erase(day.begin(), day.end() - 2);
	if (std::atoi(day.c_str()) > 1){
		if (std::atoi(day.c_str()) > 9)
			day = std::to_string(std::atoi(day.c_str()) - 1);
		else
			day = "0" + std::to_string(std::atoi(day.c_str()) - 1);
		newDate = year + "-" + month + "-" + day;
		return newDate;
	}
	if (std::atoi(day.c_str()) == 1){
		day = "31";
		month = std::to_string(std::atoi(month.c_str()) - 1);
		if (std::atoi(month.c_str()) > 9)
			month = std::to_string(std::atoi(month.c_str()) - 1);
		else
			month = "0" + std::to_string(std::atoi(month.c_str()) - 1);
		newDate = year + "-" + month + "-" + day;
	}
	if (std::atoi(month.c_str()) == 0){
		month = "12";
		year = std::to_string(std::atoi(year.c_str()) - 1);
		newDate = year + "-" + month + "-" + day;
	}
	if (std::atoi(year.c_str()) < 2009)
		return "-1";
	return newDate;
}

void	BitcoinExchange::exchangeBitcoin(std::map<std::string, double> map, std::string date, double num){
	if (checkValidID(date) && checkValidValue(num)){
		date.erase(date.begin() + date.length() - 1, date.end());
		std::string aux = date;
		while (!map[aux]){
			aux = setDate(aux);
			if (aux == "-1"){
				std::cout << "Error: bad input => " << date << std::endl;
				return;
			}
		}
		if (aux != "-1")
			std::cout <<  date << " => " << num << " = " << map[aux] * num << std::endl;
	}
	else if (!checkValidID(date))
	{
		date.erase(date.begin() + date.length() - 1, date.end());
		std::cout << "Error: bad input => " << date << std::endl;
	}
	else
	{
		if (num < 1)
			std::cout << "Error: not a positive number." << std::endl;
		else
			std::cout << "Error: too large a number." << std::endl;
	}
}
