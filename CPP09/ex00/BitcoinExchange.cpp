/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:28:19 by jsarabia          #+#    #+#             */
/*   Updated: 2024/01/12 16:45:26 by jsarabia         ###   ########.fr       */
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

int	checkDate(Date date){
	int arr[] = {1, 3, 5, 7, 8, 10, 12};
	std::list<int> thirtyone(arr, arr + (sizeof(arr) / sizeof(arr[0])));
	std::list<int>::iterator it = std::find(thirtyone.begin(), thirtyone.end(), date.getMonth());

	if (date.getDay() > 31 || date.getDay() < 1)
		return 0;
	if (date.getMonth() > 12 || date.getMonth() < 1)
		return 0;
	if (date.getYear() < 2009 || date.getYear() > 2024)
		return 0;
	if (date.getMonth() == 2){
		if (date.getDay() > 29)
			return 0;
		if (date.getDay() == 29)
			if (date.getYear() % 4 != 0)
				return 0;
	}
	if (date.getMonth() == 31){
		if (*it < 1)
			return 0;
	}
	return 1;
}

int	checkValidValue(double num){
	if (num < 1)
		return 0;
	else if (num > 1000)
		return 0;
	return 1;
}

void	BitcoinExchange::exchangeBitcoin(std::map<std::string, double> map, std::string date, double num){
	Date dateclass(std::atoi(date.substr(0, 4).c_str()), std::atoi(date.substr(5, 2).c_str()), std::atoi(date.substr(8, 2).c_str()));

	if (checkDate(dateclass) && checkValidValue(num)){
		date.erase(date.begin() + date.length() - 1, date.end());
		std::map<std::string, double>::iterator it = map.lower_bound(date);
		std::map<std::string, double>::iterator prev = it;
		if (date != it->first)
			--prev;
		if (it == map.begin())
			std::cout << "Error: bad input => " << date << std::endl;
		else
			std::cout <<  date << " => " << num << " = " << prev->second * num << std::endl;
	}
	else if (!checkDate(dateclass))
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
