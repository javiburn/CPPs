/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:08:39 by jsarabia          #+#    #+#             */
/*   Updated: 2023/11/20 11:41:28 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
	return;
}
Weapon::Weapon(void)
{
	return;
}

Weapon::~Weapon(void)
{
	return;
}

const std::string&	Weapon::getType(void)
{
	return type;
}

void	Weapon::setType(std::string type)
{
	std::string	str = type;

	this->type = str;
	return;
}
