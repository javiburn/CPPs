/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Execution.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:43:24 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/18 17:49:52 by jsarabia         ###   ########.fr       */
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
	int random = rand() % 2;
	std::cout << random << std::endl;
	return (f[random]());
}

