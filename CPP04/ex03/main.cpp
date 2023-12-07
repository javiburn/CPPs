/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:32:42 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/07 14:51:49 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

void	leaks(void)
{
	system("leaks -q materia");
}

int main()
{
atexit(leaks);
IMateriaSource* src = new MateriaSource();
src->learnMateria(new Ice());
src->learnMateria(new Cure());
ICharacter* me = new Character("me");
AMateria* tmp;
tmp = src->createMateria("ice");
me->equip(tmp);
tmp = src->createMateria("cure");
me->equip(tmp);
ICharacter* bob = new Character("bob");
me->use(0, *bob);
me->use(1, *bob);
me->use(2, *bob);
AMateria* item;
item = src->createMateria("ice");
me->equip(item);
me->use(2, *bob);
me->unequip(2);
me->use(2, *bob);
me->equip(item);
me->use(2, *bob);
delete bob;
delete me;
delete src;
return 0;
}
