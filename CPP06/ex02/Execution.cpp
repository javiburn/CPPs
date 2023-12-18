/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Execution.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:43:24 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/18 18:34:08 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Execution.hpp"

Base*	createA(void){
	A* aux = new A();
	return aux;
}

Base*	createB(void){
	B* aux = new B();
	return aux;
}

Base*	createC(void){
	C* aux = new C();
	return aux;
}

Base* Execution::generate(void){
	Base* (*f[])() = {&createA, &createB, &createC};
	srand(time(NULL));
	int random = rand() % 3;
	return (*f[random])();
}

void Execution::identify(Base* p){
	A* auxA = dynamic_cast<A*>(p);
	if (auxA != NULL){
		std::cout << "A" << std::endl;
		return;
	}
	B* auxB = dynamic_cast<B*>(p);
	if (auxB != NULL){
		std::cout << "B" << std::endl;
		return;
	}
	C* auxC = dynamic_cast<C*>(p);
	if (auxC != NULL){
		std::cout << "C" << std::endl;
		return;
	}
	return;
}

