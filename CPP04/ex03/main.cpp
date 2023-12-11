/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:32:42 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/11 17:30:51 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

// void	leaks(void)
// {
// 	system("leaks -q materia");
// }

int main()
{
//atexit(leaks);
IMateriaSource* src = new MateriaSource();
src->learnMateria(new Ice());
src->learnMateria(new Cure());
Character *me = new Character("me");
AMateria* tmp;
Character* bob = new Character("bob");
tmp = src->createMateria("ice");
me->equip(tmp);
me->use(0, *bob);
delete tmp;
tmp = src->createMateria("cure");
me->equip(tmp);
me->use(1, *bob);
Character *you = new Character(*me);
me->unequip(1);
you->use(0, *bob);
you->use(1, *bob);
me->use(1, *bob);
delete bob;
delete me;
delete you;
delete src;
delete tmp;
return 0;
}
