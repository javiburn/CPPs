/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:41:10 by jsarabia          #+#    #+#             */
/*   Updated: 2023/11/30 16:25:58 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void){
	return;
}

MateriaSource::MateriaSource(const MateriaSource& mat){
	return;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& imat){
	return;
}

MateriaSource::~MateriaSource(void){
	return;
}

void	MateriaSource::learnMateria(AMateria* mat){
	int i = 0;

	while (this->slots[i]){
		i++;
	}
	if (i > 2)
		std::cout
}
