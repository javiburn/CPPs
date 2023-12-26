/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:48:22 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/26 16:41:56 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(const Span& span){
	if (span.size > 21456323)
		throw NumberTooHigh();
	if (span.size == 0)
		throw NumberIsZero();
	this->added = span.added;
	this->size = span.size;
	this->vector = new std::vector<int>(this->size);
	for (int i = 0; i < span.added; i++){
		this->vector[i] = span.vector[i];
	}
	this->vector = new std::vector<int>(span.added);
	return;
}

Span::Span(unsigned int N){
	if (N > 21456323)
		throw NumberTooHigh();
	if (N == 0)
		throw NumberIsZero();
	this->added = 0;
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

	idx = this->added;
	if (idx >= static_cast<int>(this->size))
		throw ArrayFull();
	this->vector->push_back(num);
	this->added += 1;
	return;
}

int	Span::longestSpan(void){
	int idx = 0;

	idx = this->added;
	if (idx == 0)
		throw ArrayEmpty();
	if (idx == 1)
		throw ArrayOnlyValue();
	std::vector<int>::iterator min = std::min_element(this->vector->begin() + this->size - this->added, this->vector->end());
	std::vector<int>::iterator max = std::max_element(this->vector->begin() + this->size - this->added, this->vector->end());
	return *max - *min;
}

int	Span::shortestSpan(void){
	int dif = 2147483647;

	if (this->added == 0)
		throw ArrayEmpty();
	if (this->added == 1)
		throw ArrayOnlyValue();
	std::sort(this->vector->begin() + this->size - this->added, this->vector->end());
	for (std::vector<int>::iterator it = this->vector->begin() + this->size - this->added; it != this->vector->end(); it++){
		std::cout << "it: " << *it << ", it + 1: " << *(it + 1) << std::endl;
		if (*it != 0 && it + 1 != this->vector->end() && abs(*it - (*(it + 1))) < dif)
			dif = abs(*it - *(it + 1));
	}
	return dif;
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

const char *Span::ArrayEmpty::what() const throw(){
	return "Error: The array is still empty";
}

const char *Span::ArrayOnlyValue::what() const throw(){
	return "Error: The array only has one integer, so it is impossible to compare values";
}
