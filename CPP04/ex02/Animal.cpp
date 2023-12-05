/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:24:17 by jsarabia          #+#    #+#             */
/*   Updated: 2023/11/30 15:21:21 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void){
	std::cout << "Default Animal constructor has been called" << std::endl;
	return;
}

Animal::Animal(std::string type){
	this->type = type;
	std::cout << "Default Animal constructor has been called" << std::endl;
	return;
}

Animal::Animal(const Animal& animal){
	std::cout << "Animal's copy constructor called" << std::endl;
	this->type = animal.type;
	return;
}

Animal::~Animal(void){
	std::cout << "Default Animal destructor has been called" << std::endl;
	return;
}

Animal&	Animal::operator=(const Animal& animal){
	std::cout << "Animal's copy assignment operator called" << std::endl;
	this->type = animal.type;
	return *this;
}

void	Animal::makeSound(void) const{
	std::cout << "Unknown sound" << std::endl;
	return;
}

void	Animal::setType(std::string type){
	this->type = type;
	return;
}

std::string	Animal::getType(void) const{
	return this->type;
}
