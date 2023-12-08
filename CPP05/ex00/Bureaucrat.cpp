/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:06:40 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/08 19:27:56 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void){
	return;
}

Bureaucrat::Bureaucrat(const std::string new_name, int grade): name(new_name){
	try
	{
		if (grade > 0 && grade < 151)
			std::cout << "The Bureaucrat " << this->getName() << " says hello and has a range of " << grade << "." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "maaaaal" << std::endl;
		if (grade < 1)
			throw GradeTooHighException();
		else
			throw GradeTooLowException();
	}
	this->grade = grade;
	return;
}

Bureaucrat::~Bureaucrat(void){
	return;
}

int	Bureaucrat::getGrade(void){
	return this->grade;
}

std::string	Bureaucrat::getName(void){
	return this->name;
}

int	Bureaucrat::GradeTooHighException(void){
	std::runtime_error("The grade is too high!");
	return 1;
}

int	Bureaucrat::GradeTooLowException(void){
	std::runtime_error("The grade is too low!");
	return 1;
}
