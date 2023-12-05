/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 18:04:30 by jsarabia          #+#    #+#             */
/*   Updated: 2023/11/27 16:49:21 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void){
	std::cout << "Default constructor called" << std::endl;
	this->name = "Anonymous";
	this->hp = 10;
	this->energy = 10;
	this->power = 0;
	return;
}

ClapTrap::ClapTrap(std::string name){
	std::cout << "Name assigner constructor called" << std::endl;
	this->name = name;
	this->hp = 10;
	this->energy = 10;
	this->power = 0;
	return;
}

ClapTrap::ClapTrap(const ClapTrap& clap){
	std::cout << "Copy constructor called" << std::endl;
	this->name = clap.name;
	this->hp = clap.hp;
	this->energy = clap.energy;
	this->power = clap.power;
	return;
}

ClapTrap::~ClapTrap(void){
	std::cout << "Default destructor called" << std::endl;
	return;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clap){
	std::cout << "Copy assignment operator called" << std::endl;
	this->name = clap.name;
	this->hp = clap.hp;
	this->energy = clap.energy;
	this->power = clap.power;
	return *this;
}

void	ClapTrap::setName(std::string name){
	this->name = name;
	return;
}
std::string	ClapTrap::getName(void){
	return this->name;
}

void	ClapTrap::attack(const std::string& target){
	if (this->energy < 1){
		std::cout << "ClapTrap " << this->name << " is getting some well deserved rest" << std::endl;
		return;
	}
	if (this->hp < 1){
		std::cout << "ClapTrap " << this->name << " was defeated and can not move!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->power << " points of damage!" << std::endl;
	this->energy -= 1;
}

void 	ClapTrap::takeDamage(unsigned int amount){
	if (this->hp < 1){
		std::cout << "ClapTrap " << this->name << " was defeated and can not take more hits" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->name << " receives " << amount << " points of damage!" << std::endl;
	this->hp -= amount;
}

void 	ClapTrap::beRepaired(unsigned int amount){
	if (this->energy < 1){
		std::cout << "ClapTrap " << this->name << " is getting some well deserved rest" << std::endl;
		return;
	}
	if (this->hp < 1){
		std::cout << "ClapTrap " << this->name << " was defeated and can not move!" << std::endl;
		return;
	}
	this->energy -= 1;
	this->hp += amount;
	std::cout << "ClapTrap " << this->name << " gets " << amount << " hit points back, and now can stand " << this->hp << " hits without fainting" << std::endl;
}
