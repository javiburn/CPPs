/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:58:35 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/11 16:35:01 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void){
	for (int i = 0; i < 4; i++){
		this->slots[i] = NULL;
	}
	for (int i = 0; i < 50; i++){
		this->unequipped[i] = NULL;
	}
	return;
}
Character::Character(std::string name){
	for (int i = 0; i < 4; i++){
		this->slots[i] = NULL;
	}
	for (int i = 0; i < 50; i++){
		this->unequipped[i] = NULL;
	}
	this->name = name;
	return;
}

Character::Character(const Character& character){
	this->name = character.name;
	for (int i = 0; character.slots[i]; i++)
		this->slots[i] = character.slots[i]->clone();
	return;
}

Character& Character::operator=(const Character& character){
	this->name = character.name;
	for (int i = 0; character.slots[i]; i++)
		this->slots[i] = character.slots[i]->clone();
	return *this;
}

Character::~Character(void){
	for (int i = 0; i < 3 && this->slots[i]; i++)
		delete this->slots[i];
	for (int i = 0; i < 50 && this->slots[i]; i++)
		delete this->unequipped[i];
	return;
}

std::string const& Character::getName(void) const{
	return this->name;
}

void Character::equip(AMateria* m){
	int i = 0;

	while (i < 3 && this->slots[i]){
		i++;
	}
	if (i > 3)
		std::cout << "Unable to perform this action because the inventory is already full" << std::endl;
	this->slots[i] = m->clone();
}

void Character::use(int idx, ICharacter& target){
	int i = 0;

	while (i < 3 && this->slots[i]){
		i++;
	}
	i--;
	if (i < idx)
		std::cout << "Unable to perform this action because the selected item is not in the inventory" << std::endl;
	else
		this->slots[idx]->use(target);
	return;
}

void Character::unequip(int idx){
	int i = 0;

	while (this->slots[i]){
		i++;
	}
	i--;
	if (i < idx)
	{
		std::cout << "Unable to perform this action because the selected item is not in the inventory" << std::endl;
		return;
	}
	i = 0;
	while (i < 50 && this->unequipped[i])
		i++;
	this->unequipped[i] = this->slots[idx];
	this->slots[idx] = NULL;
}
