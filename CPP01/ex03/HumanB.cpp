/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:22:06 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/05 12:43:13 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): weapon(NULL), name(name)
{
	this->weapon = new Weapon("his bare hands");
	this->name = name;
	return;
}

HumanB::~HumanB(void)
{
	delete this->weapon;
	return;
}

void	HumanB::attack(void)
{
	if (!this->weapon)
		return;
	if (this->weapon->getType().length() < 1)
	{
		std::cout << this->name << " attacks with their bare hands" << std::endl;
		return;
	}
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	return;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	delete this->weapon;
	this->weapon = new Weapon();
	this->weapon->setType(weapon.getType());
	return;
}
