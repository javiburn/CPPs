/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:58:35 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/06 18:30:46 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void){
	for (int i = 0; i < 4; i++){
		this->slots[i]->setType("badtype");
	}
	return;
}
Character::Character(std::string name){
	this->name = name;
	return;
}

Character::Character(const Character& character){
	this->name = character.name;
	for (int i = 0; character.slots[i]; i++)
		this->slots[i] = character.slots[i];
	return;
}

Character& Character::operator=(const Character& character){
	this->name = character.name;
	for (int i = 0; character.slots[i]; i++)
		this->slots[i] = character.slots[i];
	return *this;
}

Character::~Character(void){
	return;
}

std::string const& Character::getName(void) const{
	return this->name;
}

void Character::equip(AMateria* m){
	int i = 0;

	while (i < 3 && this->slots[i] && this->slots[i]->getType() != "badtype"){
		i++;
	}
	std::cout << i << std::endl;
	if (i > 3)
		std::cout << "Unable to perform this action because the inventory is already full" << std::endl;
	this->slots[i] = m->clone();
}

void Character::use(int idx, ICharacter& target){
	int i = 0;

	while (i < 3 && this->slots[i] && this->slots[i]->getType() != "badtype"){
		i++;
	}
	std::cout << this->slots[0]->getType() << std::endl;
	if (i < idx)
		std::cout << "Unable to perform this action because the selected item is not in the inventory" << std::endl;
	else
		this->slots[idx]->use(target);
	return;
}

void Character::unequip(int idx){
	int i = 0;

	while (this->slots[i] && this->slots[i]->getType() != "badtype"){
		i++;
	}
	if (i < idx)
		std::cout << "Unable to perform this action because the selected item is not in the inventory" << std::endl;
	this->slots[i] = NULL;
}
