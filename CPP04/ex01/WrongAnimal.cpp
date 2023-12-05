/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:34:57 by jsarabia          #+#    #+#             */
/*   Updated: 2023/11/30 15:19:19 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void){
	this->type = "WrongAnimal";
	std::cout << "Default WrongAnimal constructor has been called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(std::string type){
	this->type = type;
	std::cout << "Default WrongAnimal constructor has been called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(const WrongAnimal& wrongAnimal){
	std::cout << "WrongAnimal's copy constructor called" << std::endl;
	this->type = wrongAnimal.type;
	return;
}

WrongAnimal::~WrongAnimal(void){
	std::cout << "Default WrongAnimal destructor has been called" << std::endl;
	return;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& wrongAnimal){
	std::cout << "WrongAnimal's copy assignment operator called" << std::endl;
	this->type = wrongAnimal.type;
	return *this;
}

void	WrongAnimal::makeSound(void) const{
	std::cout << "This is a wrong animal" << std::endl;
	return;
}

void	WrongAnimal::setType(std::string type){
	this->type = type;
	return;
}

std::string	WrongAnimal::getType(void) const{
	return this->type;
}
