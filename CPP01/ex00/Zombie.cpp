/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:07:37 by jsarabia          #+#    #+#             */
/*   Updated: 2023/11/20 15:41:10 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name){
	this->name = name;
	announce();
	return;
}

Zombie::~Zombie(void){
	std::cout << "\033[0;31m" << this->name << " was slayed\033[0m" << std::endl;
	return;
}

void	Zombie::announce(void)
{
	std::cout << "\033[0;32m" << this->name << ": BraaiiiiiiinnnzzzZ...\033[0m" << std::endl;
}
