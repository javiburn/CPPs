/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:18:29 by jsarabia          #+#    #+#             */
/*   Updated: 2023/11/27 17:44:37 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap(){
	return;
}

FragTrap::FragTrap(std::string name): ClapTrap(name){
	this->hp = 100;
	this->energy = 100;
	this->power = 30;
	std::cout << "The constructor of a FragTrap has been called" << std::endl;
	return;
}

FragTrap::~FragTrap(void){
	std::cout << "The destructor of a FragTrap has been called" << std::endl;
	return;
}

void	FragTrap::highFivesGuys(void){
	if (this->energy < 1){
		std::cout << "FragTrap " << this->name << " is getting some well deserved rest" << std::endl;
		return;
	}
	if (this->hp < 1){
		std::cout << "FragTrap " << this->name << " was defeated and can not move!" << std::endl;
		return;
	}
	std::cout << "FragTrap " << this->name << " wants to celebrate your great achievements in C++ with a high five!" << std::endl;
}
