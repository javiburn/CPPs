/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:48:38 by jsarabia          #+#    #+#             */
/*   Updated: 2023/11/30 14:48:18 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("Dog"){
	std::cout << "Default Dog constructor has been called" << std::endl;
	return;
}

Dog::Dog(const Dog& dog){
	this->type = dog.type;
	return;
}

Dog::~Dog(void){
	std::cout << "Default Dog destructor has been called" << std::endl;
	return;
}

Dog&	Dog::operator=(const Dog& dog){
	this->type = dog.type;
	return *this;
}

void	Dog::makeSound(void) const{
	std::cout << "Woof" << std::endl;
	return;
}
