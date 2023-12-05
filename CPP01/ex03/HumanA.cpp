/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:21:36 by jsarabia          #+#    #+#             */
/*   Updated: 2023/11/20 11:42:04 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): weapon(weapon), name(name)
{
	this->name = name;
	this->weapon = weapon;
	return;
}

HumanA::~HumanA(void)
{
	return;
}

void	HumanA::attack(void)
{
	if (this->weapon.getType().length() < 1)
	{
		std::cout << "\e[31m" << this->name << " can not use his bare hands\e[39m" << std::endl;
		return;
	}
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
	return;
}

void	HumanA::setWeapon(Weapon& weapon)
{
	this->weapon = weapon;
}
