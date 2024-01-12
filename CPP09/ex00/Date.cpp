/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Date.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:06:35 by jsarabia          #+#    #+#             */
/*   Updated: 2024/01/12 16:20:07 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Date.hpp"

Date::Date(){}

Date::Date(int year, int month, int day): day(day), month(month), year(year){
	this->status = true;
	return;
}

Date::Date(const Date& date){
	this->day = date.day;
	this->month = date.month;
	this->year = date.year;
	this->status = true;
	return;
}

Date& Date::operator=(const Date& date){
	this->day = date.day;
	this->month = date.month;
	this->year = date.year;
	this->status = true;
	return *this;
}

Date::~Date(void){}


int		Date::getDay(void){
	return this->day;
}

int		Date::getMonth(void){
	return this->month;
}

int		Date::getYear(void){
	return this->year;
}

void	Date::setStatus(bool status){
	this->status = status;
	return;
}

bool	Date::getStatus(void){
	return this->status;
}
