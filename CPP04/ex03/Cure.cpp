/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:44:46 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/06 18:07:52 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure(void){
	this->type = "cure";
	return;
}

Cure::Cure(std::string const& type){
	this->type = type;
	return;
}

Cure::Cure(const Cure& cure){
	this->type = cure.type;
	return;
}

Cure& Cure::operator=(const Cure& cure){
	this->type = cure.type;
	return *this;
}

Cure::~Cure(void){
	return;
}

void	Cure::use(ICharacter& ichar){
	std::cout << "* heals " << ichar.getName() << "'s wounds *" << std::endl;
	return ;
}

Cure*	Cure::clone(void) const{
	Cure*	cure = new Cure();
	return cure;
}
