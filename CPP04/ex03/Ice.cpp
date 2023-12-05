/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:47:27 by jsarabia          #+#    #+#             */
/*   Updated: 2023/11/29 18:21:21 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice(void){
	this->type = "ice";
	return;
}

Ice::Ice(std::string const& type){
	this->type = type;
	return;
}

Ice::Ice(const Ice& ice){
	this->type = ice.type;
	return;
}

Ice& Ice::operator=(const Ice& ice){
	this->type = ice.type;
	return *this;
}

Ice::~Ice(void){
	return;
}

Ice*	Ice::clone(void) const{
	Ice*	ice = new Ice();
	return ice;
}

void	Ice::use(ICharacter& ichar){
	std::cout << "* shoots an ice bolt at " << ichar.getName() << " *" << std::endl;
	return;
}
