/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:30:13 by jsarabia          #+#    #+#             */
/*   Updated: 2023/11/30 15:03:26 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal("WrongCat"){
	std::cout << "Default WrongCat constructor has been called" << std::endl;
	return;
}

WrongCat::WrongCat(const WrongCat& wrongCat){
	this->type = wrongCat.type;
	return;
}

WrongCat::~WrongCat(void){
	std::cout << "Default WrongCat destructor has been called" << std::endl;
	return;
}

WrongCat&	WrongCat::operator=(const WrongCat& wrongCat){
	this->type = wrongCat.type;
	return *this;
}

void	WrongCat::makeSound(void) const{
	std::cout << "Unknown sound" << std::endl;
	return;
}
