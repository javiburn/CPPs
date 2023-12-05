/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:51:21 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/01 13:37:30 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void){
	std::cout << "Default Brain constructor has been called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Some mystical ideas";
	return;
}
Brain::Brain(const Brain& brain){
	std::cout << "Brain's copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = brain.ideas[i];
	return;
}
Brain::~Brain(void){
	std::cout << "Default Brain destructor has been called" << std::endl;
	return;
}
Brain&	Brain::operator=(const Brain& brain){
	std::cout << "Brain's copy assignment operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = brain.ideas[i];
	return *this;
}

std::string*	Brain::getIdeas(void){
	return this->ideas;
}
