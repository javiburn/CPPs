/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:41:48 by jsarabia          #+#    #+#             */
/*   Updated: 2023/11/27 17:03:14 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap(){
	this->hp = 100;
	this->energy = 50;
	this->power = 20;
	std::cout << "ScavTrap constructor called" << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
	this->hp = 100;
	this->energy = 50;
	this->power = 20;
	std::cout << "ScavTrap constructor called" << std::endl;
	return;
}

ScavTrap::~ScavTrap(void){
	std::cout << "ScavTrap destructor called" << std::endl;
	return;
}

void	ScavTrap::attack(const std::string& target){
	std::cout << "ScavTrap " << this->name << " annihilates " << target << " after attacking with " << this->power << " units of power!" << std::endl;
	return;
}

void	ScavTrap::guardGate(void){
	std::cout << "ScavTrap " << this->name << " has adopted Guard keeper mode!" << std::endl;
	return;
}
