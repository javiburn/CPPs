/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:13:49 by jsarabia          #+#    #+#             */
/*   Updated: 2024/01/12 15:11:41 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <map>
# include <time.h>
# include "Date.hpp"

class BitcoinExchange{
	private:
		BitcoinExchange(void);
		BitcoinExchange(const BitcoinExchange& bit);
		BitcoinExchange& operator=(const BitcoinExchange& bit);
	public:
		~BitcoinExchange(void);
		static void	exchangeBitcoin(std::map<std::string, double> datacsv, std::string date, double num);
};

#endif
