/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:23:45 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/01 13:42:48 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

// void	leaks(void){
// 	system("leaks animals");
// }

int main()
{
//atexit(leaks);

Cat basic;
{
	Cat tmp;
	tmp = basic;
	std::cout << tmp.getBrain()->getIdeas()[0] << std::endl;
}
return 0;

// const Animal* j = new Dog();
// const Animal* i = new Cat();
// delete j;//should not create a leak
// delete i;
// Animal	*(meta[50]);
// for (int i = 0; i < 25; i++)
// 	meta[i] = new Dog();
// for (int i = 25; i < 50; i++)
// 	meta[i] = new Cat();
// std::cout << meta[10]->getType() << " " << std::endl;
// std::cout << meta[30]->getType() << " " << std::endl;
// meta[20]->makeSound(); //will output the dog sound!
// meta[30]->makeSound();
// for (int i = 0; i < 50; i++)
// 	delete meta[i];
// const WrongAnimal* wrong = new WrongAnimal();
// const WrongAnimal* p = new WrongCat();
// std::cout << wrong->getType() << " " << std::endl;
// wrong->makeSound();
// p->makeSound();
// delete wrong;
// delete p;
// return 0;
}
