/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:37:38 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/13 16:33:17 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

Shrubbery::Shrubbery(void): name ("Shrubbery"), target("So-and-so"), req_sign(145), req_exec(137){
	return;
}

Shrubbery::Shrubbery(const std::string target): name ("Shrubbery"), target(target), req_sign(145), req_exec(137){
	this->is_signed = false;
	return;
}

Shrubbery::Shrubbery(const Shrubbery &shrub): name(shrub.name), target(shrub.target), req_sign(145), req_exec(137){
	this->is_signed = shrub.is_signed;
	return;
}

Shrubbery& Shrubbery::operator=(const Shrubbery& shrub){
	this->is_signed = shrub.is_signed;
	return *this;
}

Shrubbery::~Shrubbery(void){
	return;
}

int	Shrubbery::getSignatureGrade(void) const{
	return req_sign;
}

int	Shrubbery::getExecutionGrade(void) const{
	return this->req_exec;
}

std::string	Shrubbery::getName(void) const{
	return this->name;
}

bool	Shrubbery::getSigned(void){
	return this->is_signed;
}

std::ostream& operator<<(std::ostream& stream, Shrubbery& shrub){
	stream << shrub.getName() << " need a bureaucrat of grade " << shrub.getSignatureGrade() << " to sign it and one of grade " << shrub.getExecutionGrade() << " to execute it. ";
	if (shrub.getSigned() == true)
		stream << "It has already been signed.";
	else
		stream << "The form has not been signed yet.";
	return stream;
}

void	Shrubbery::beSigned(Bureaucrat& bur) {
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

void	Shrubbery::execute(Bureaucrat const & executor) const{
	try
	{
		if (this->is_signed == false)
			throw FormNotSigned();
		else if (executor.getGrade() > this->req_exec)
			throw GradeTooLowException();
		else
		{
			std::string filename = this->target + "_shrubbery";
			std::ofstream outfile(filename, std::ios::binary);
			outfile << "├─ this" << std::endl;
			outfile << "│  ├─ is" << std::endl;
			outfile << "│  │  ├─ a" << std::endl;
			outfile << "│  │  │  ├─ gorgeous" << std::endl;
			outfile << "│  │  │  ├─ ASCII" << std::endl;
			outfile << "│  │  ├─ tree" << std::endl;
			outfile << "│  │  │  ├─ designed" << std::endl;
			outfile << "│  ├─ by" << std::endl;
			outfile << "│  │  ├─ the" << std::endl;
			outfile << "│  │  │  ├─ awesome" << std::endl;
			outfile << "│  │  ├─ jsarabia" << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}


const char* Shrubbery::GradeTooHighException::what() const throw(){
	return "The bureaucrat's grade is too high compared to the document's!";
}

const char* Shrubbery::GradeTooLowException::what() const throw(){
	return "The bureaucrat's grade is too low compared to the document's!";
}

const char* Shrubbery::FormNotSigned::what() const throw(){
	return "The form has not been signed yet!";
}
