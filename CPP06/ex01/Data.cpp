/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:05:43 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/18 16:32:06 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(void): id(0){
	return;
}

Data::Data(int id): id(id){
	return;
}

Data::Data(const Data& data): id(data.id){
	return;
}

Data& Data::operator=(const Data& data){
	std::cout << data.id << std::endl;
	return *this;
}

Data::~Data(void){
	return;
}

int Data::getId(void) const{
	return this->id;
}

uintptr_t Data::getAddress(void) const{
	return this->addr;
}

void	Data::setAddress(uintptr_t ptr){
	this->addr = ptr;
	return;
}
