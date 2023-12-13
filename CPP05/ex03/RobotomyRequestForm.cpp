/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:20:49 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/13 17:44:31 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

Robotomy::Robotomy(void): name ("Robotomy"), target("So-and-so"), req_sign(72), req_exec(45){
	return;
}

Robotomy::Robotomy(const std::string target): name ("Robotomy"), target(target), req_sign(72), req_exec(45){
	this->is_signed = false;
	return;
}

Robotomy::Robotomy(const Robotomy &shrub): name(shrub.name), target(shrub.target), req_sign(72), req_exec(45){
	this->is_signed = shrub.is_signed;
	return;
}

Robotomy& Robotomy::operator=(const Robotomy& shrub){
	this->is_signed = shrub.is_signed;
	return *this;
}

Robotomy::~Robotomy(void){
	return;
}

int	Robotomy::getSignatureGrade(void) const{
	return req_sign;
}

int	Robotomy::getExecutionGrade(void) const{
	return this->req_exec;
}

std::string	Robotomy::getName(void) const{
	return this->name;
}

bool	Robotomy::getSigned(void){
	return this->is_signed;
}

std::ostream& operator<<(std::ostream& stream, Robotomy& shrub){
	stream << shrub.getName() << " need a bureaucrat of grade " << shrub.getSignatureGrade() << " to sign it and one of grade " << shrub.getExecutionGrade() << " to execute it. ";
	if (shrub.getSigned() == true)
		stream << "It has already been signed.";
	else
		stream << "The form has not been signed yet.";
	return stream;
}

void	Robotomy::beSigned(Bureaucrat& bur) {
	try
	{
		if (bur.getGrade() > this->req_sign)
			throw GradeTooLowException();
		else
			this->is_signed = true;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	Robotomy::execute(Bureaucrat const & executor) const{
	try
	{
		if (this->is_signed == false)
			throw FormNotSigned();
		else if (executor.getGrade() > this->req_exec)
			throw GradeTooLowException();
		else
		{
			std::cout << "* some drilling noises... *" << std::endl;
			sleep(1);
			std::cout << "* some drilling noises... *" << std::endl;
			sleep(1);
			std::cout << "* some drilling noises... *" << std::endl;
			sleep(1);
			srand(time(NULL));
			int check = rand() % 2;
			if (check == 0)
				std::cout << this->target << " has been successfully robotomized" << std::endl;
			else
				std::cout << "Oh, no! Tho robotomy of " << this->target << " has failed!" << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}


const char* Robotomy::GradeTooHighException::what() const throw(){
	return "The bureaucrat's grade is too high compared to the document's!";
}

const char* Robotomy::GradeTooLowException::what() const throw(){
	return "The bureaucrat's grade is too low compared to the document's!";
}

const char* Robotomy::FormNotSigned::what() const throw(){
	return "The form has not been signed yet!";
}

