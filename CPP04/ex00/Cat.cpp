/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:37:30 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/07 15:39:11 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal("Cat"){
	std::cout << "Default Cat constructor has been called" << std::endl;
	return;
}

Cat::Cat(const Cat& cat): Animal("Cat"){
	std::cout << "Cat's copy constructor has been called" << std::endl;
	this->type = cat.type;
	return;
}

Cat::~Cat(void){
	std::cout << "Default Cat destructor has been called" << std::endl;
	return;
}

Cat&	Cat::operator=(const Cat& cat){
	this->type = cat.type;
	return *this;
}

void	Cat::makeSound(void) const{
	std::cout << "Meow" << std::endl;
	return;
}
