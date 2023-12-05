/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:33:20 by jsarabia          #+#    #+#             */
/*   Updated: 2023/11/29 18:21:36 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"

AMateria::AMateria(void){
	return;
}
AMateria::AMateria(std::string const& type){
	this->type = type;
	return;
}
AMateria::AMateria(const AMateria& materia){
	this->type = materia.type;
	return;
}
AMateria& AMateria::operator=(const AMateria& materia){
	this->type = materia.type;
	return *this;
}
AMateria::~AMateria(void){
	return;
}

std::string const& AMateria::getType(void) const{
	return this->type;
}
