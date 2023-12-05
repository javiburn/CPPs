/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:58:35 by jsarabia          #+#    #+#             */
/*   Updated: 2023/11/30 16:02:18 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

std::string const& Character::getName(void) const{
	return this->name;
}

void Character::equip(AMateria* m){
	int i = 0;

	while (this->slots[i]){
		i++;
	}
	if (i > 2)
		std::cout << "Unable to perform this action because the inventory is full" << std::endl;
	this->slots[i] = m;
}

void Character::use(int idx, ICharacter& target){
	int i = 0;

	while (this->slots[i]){
		i++;
	}
	if (i < idx)
		std::cout << "Unable to perform this action because the selected item is not in the inventory" << std::endl;
	else
		this->slots[i]->use(target);
	return;
}

void Character::unequip(int idx){
	int i = 0;

	while (this->slots[i]){
		i++;
	}
	if (i < idx)
		std::cout << "Unable to perform this action because the selected item is not in the inventory" << std::endl;
	this->slots[i] = NULL;
}
