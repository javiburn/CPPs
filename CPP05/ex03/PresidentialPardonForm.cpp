/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:50:41 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/14 13:10:16 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

President::President(void): name ("President"), target("So-and-so"), req_sign(25), req_exec(5){
	std::cout << "President ---> Default constructor called" << std::endl;
	return;
}

President::President(const std::string target): name ("President"), target(target), req_sign(25), req_exec(5){
	std::cout << "President ---> Default constructor called" << std::endl;
	this->is_signed = false;
	return;
}

President::President(const President &presi): name(presi.name), target(presi.target), req_sign(25), req_exec(5){
	std::cout << "President ---> Copy constructor called" << std::endl;
	this->is_signed = presi.is_signed;
	return;
}

President& President::operator=(const President& shrub){
	std::cout << "President ---> Copy assignment operator called" << std::endl;
	this->is_signed = shrub.is_signed;
	return *this;
}

President::~President(void){
	std::cout << "President ---> Default destructor called" << std::endl;
	return;
}

int	President::getSignatureGrade(void) const{
	return req_sign;
}

int	President::getExecutionGrade(void) const{
	return this->req_exec;
}

std::string	President::getName(void) const{
	return this->name;
}

bool	President::getSigned(void){
	return this->is_signed;
}

std::ostream& operator<<(std::ostream& stream, President& shrub){
	stream << shrub.getName() << " need a bureaucrat of grade " << shrub.getSignatureGrade() << " to sign it and one of grade " << shrub.getExecutionGrade() << " to execute it. ";
	if (shrub.getSigned() == true)
		stream << "It has already been signed.";
	else
		stream << "The form has not been signed yet.";
	return stream;
}

void	President::beSigned(Bureaucrat& bur) {
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

void	President::execute(Bureaucrat const & executor) const{
	try
	{
		if (this->is_signed == false)
			throw FormNotSigned();
		else if (executor.getGrade() > this->req_exec)
			throw GradeTooLowException();
		else
			std::cout <<  this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}


const char* President::GradeTooHighException::what() const throw(){
	return "The bureaucrat's grade is too high compared to the document's!";
}

const char* President::GradeTooLowException::what() const throw(){
	return "The bureaucrat's grade is too low compared to the document's!";
}

const char* President::FormNotSigned::what() const throw(){
	return "The form has not been signed yet!";
}

