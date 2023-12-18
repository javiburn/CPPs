/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Execution.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:43:24 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/18 19:03:42 by jsarabia         ###   ########.fr       */
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

void Execution::identify(Base& p){
	try{
		A& auxA = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		(void)auxA;
		return;
	}
	catch (std::exception& e){
	}
	try{
		B& auxB = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		(void)auxB;
		return;
	}
	catch (std::exception& e){
	}
	try{
		C& auxC = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		(void)auxC;
		return;
	}
	catch (std::exception& e){
	}
	try{
		throw BadCastException();
	}
	catch (std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	return;
}

const char* Execution::BadCastException::what() const throw(){
	return "Illegal cast";
}
