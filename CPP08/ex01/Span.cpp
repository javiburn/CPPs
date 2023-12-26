/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:48:22 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/26 13:27:51 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N){
	if (N > 21456323)
		throw NumberTooHigh();
	if (N == 0)
		throw NumberIsZero();
	this->size = N;
	this->vector = new std::vector<int>(N);
	return;
}

Span::~Span(void){
	delete this->vector;
	return;
}

unsigned int	Span::getSize(void){
	return this->vector->size();
}

void 	Span::addNumber(int num){
	int idx = 0;

	for (std::vector<int>::iterator it = this->vector->begin(); it != this->vector->end(); it++){
		idx++;
	}
	if (idx >= static_cast<int>(this->size))
		throw ArrayFull();
	this->vector->push_back(num);
	return;
}

const char *Span::NumberTooHigh::what() const throw(){
	return "Error: The introduced number is too high!";
}

const char *Span::NumberIsZero::what() const throw(){
	return "Error: Can not create an array with size of 0!";
}

const char *Span::ArrayFull::what() const throw(){
	return "Error: The array is already full";
}
