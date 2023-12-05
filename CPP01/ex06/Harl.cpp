/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:32:00 by jsarabia          #+#    #+#             */
/*   Updated: 2023/11/16 17:26:42 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "\e[1;3;32mI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\e[22;23;39m" << std::endl;
	return;
}

void	Harl::info(void)
{
	std::cout << "\e[1;3;34mI cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\e[22;23;39m" << std::endl;
	return;
}

void	Harl::warning(void)
{
	std::cout << "\e[1;3;33mI think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\e[22;23;39m" << std::endl;
	return;
}

void	Harl::error(void)
{
	std::cout << "\e[1;3;31mThis is unacceptable! I want to speak to the manager now.\e[22;23;39m" << std::endl;
	return;
}

Harl::Harl(void)
{
	return;
}

Harl::~Harl(void)
{
	return;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*f[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string options[] =  {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	for (i = 0;i < 4; i++){
		if (options[i] == level)
			break;
	}
	switch (i)
	{
	case 0:
		(this->*f[0])();
	case 1:
		(this->*f[1])();
	case 2:
		(this->*f[2])();
	case 3:
		(this->*f[3])();
		break;
	default:
		std::cout << "\e[1;3;37mYou left Harl speechless\e[22;23;39m" << std::endl;
	}
	return;
}
