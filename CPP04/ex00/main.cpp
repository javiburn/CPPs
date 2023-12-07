/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:23:45 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/07 16:17:04 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
const Animal* cat(i);
std::cout << cat->getType() << " " << std::endl;
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
cat->makeSound();
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();

const WrongAnimal* wrong = new WrongAnimal();
const WrongAnimal* p = new WrongCat();
std::cout << wrong->getType() << " " << std::endl;
wrong->makeSound();
p->makeSound();
delete meta;
delete j;
delete cat;
delete wrong;
delete p;
return 0;
}
