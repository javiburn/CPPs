/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:37:30 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/07 15:45:27 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal("Cat"){
	this->brain = new Brain();
	if (brain)
		std::cout << "Default Cat constructor has been called" << std::endl;
	return;
}

Cat::Cat(const Cat& cat): Animal("Cat"){
	if (this->brain)
		delete this->brain;
	this->brain = new Brain();
	std::cout << "Cat's copy constructor has been called" << std::endl;
	this->type = cat.type;
	return;
}

Cat::~Cat(void){
	std::cout << "Default Cat destructor has been called" << std::endl;
	delete this->brain;
	return;
}

Cat&	Cat::operator=(const Cat& cat){
	if (this->brain)
		delete this->brain;
	this->brain = new Brain();
	std::cout << "Cat's copy assignment operator has been called" << std::endl;
	this->type = cat.type;
	return *this;
}

void	Cat::makeSound(void) const{
	std::cout << "Meow" << std::endl;
	return;
}

Brain*	Cat::getBrain(void){
	return this->brain;
}
