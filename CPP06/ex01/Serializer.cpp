/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:14:28 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/18 16:55:42 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void){
	return;
}
Serializer& Serializer::operator=(const Serializer& serial){
	(void)serial;
	return *this;
}

Serializer::Serializer(const Serializer& serial){
	(void)serial;
	return;
}

Serializer::~Serializer(void){
	return;
}

uintptr_t Serializer::serialize(Data* ptr){
	ptr->setAddress((uintptr_t)ptr);
	return ptr->getAddress();
}

Data* Serializer::deserialize(uintptr_t raw){
	Data* aux = new Data(42);
	aux = (Data *)raw;
	return aux;
}
