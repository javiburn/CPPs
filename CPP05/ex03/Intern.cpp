/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 18:08:35 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/13 18:47:22 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void){
	return;
}

/*Intern::Intern(const Intern& intern){
	return;
}

Intern& Intern::operator=(const Intern& intern){
	return *this;
}*/

Intern::~Intern(void){
	return;
}

AForm*	Intern::createShrubbery(std::string target){
	return new Shrubbery(target);
}

AForm*	Intern::createRobotomy(std::string target){
	return new Robotomy(target);
}

AForm*	Intern::createPresident(std::string target){
	return new President(target);
}

AForm*	Intern::makeForm(std::string name, std::string target){
	AForm* aux;

	AForm* (Intern::*f[3])(std::string) = {&Intern::createShrubbery, &Intern::createRobotomy, &Intern::createPresident};
	std::string options[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	for (int i = 0; i < 3; i++)
	{
		if (name == options[i]){
			aux = (this->*f[i])(target);
			return aux;
		}
	}
	std::cout << "The form selected is invalid" << std::endl;
	return 0;
}
