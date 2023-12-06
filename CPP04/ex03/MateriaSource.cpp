/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:41:10 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/06 18:08:07 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void){
	for (int i = 0; i < 4; i++){
		this->slots[i] = NULL;
	}
	return;
}

MateriaSource::MateriaSource(const MateriaSource& mat){
	for (int i = 0; mat.slots[i]; i++){
		this->slots[i] = mat.slots[i];
	}
	return;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& mat){
	for (int i = 0; mat.slots[i]; i++){
		this->slots[i] = mat.slots[i];
	}
	return *this;
}

MateriaSource::~MateriaSource(void){
	return;
}

void	MateriaSource::learnMateria(AMateria* mat){
	int i = 0;

	while (i < 4 && this->slots[i]){
		i++;
	}
	if (i > 3){
		std::cout << "No space left to learn the new materia" << std::endl;
		return;
	}
	this->slots[i] = mat->clone();
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i = 3;

	while (i > -1)
	{
		if (this->slots[i] && this->slots[i]->getType() == type)
			return this->slots[i]->clone();
		i--;
	}
	return 0;
}
