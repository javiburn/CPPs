/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:06:40 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/13 17:17:12 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void){
	std::cout << "Bureaucrat ---> Default constructor called" << std::endl;
	try
	{
		if (grade < 0)
			throw GradeTooHighException();
		else if (grade > 150)
			throw GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat(const std::string new_name, int grade): name(new_name), grade(grade){
	std::cout << "Bureaucrat ---> Default constructor called" << std::endl;
	try
	{
		if (grade < 0)
			throw GradeTooHighException();
		else if (grade > 150)
			throw GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& bur): name(bur.name){
	std::cout << "Bureaucrat ---> Copy constructor called" << std::endl;
	try
	{
		if (grade < 0)
			throw GradeTooHighException();
		else if (grade > 150)
			throw GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	this->grade = bur.grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& bur){
	std::cout << "Bureaucrat ---> Copy assignment operator called" << std::endl;
	try
	{
		if (grade < 0)
			throw GradeTooHighException();
		else if (grade > 150)
			throw GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	this->grade = bur.grade;
	return *this;
}

Bureaucrat::~Bureaucrat(void){
	std::cout << "Bureaucrat ---> Default destructor called" << std::endl;
	return;
}

int	Bureaucrat::getGrade(void) const{
	return this->grade;
}

std::string	Bureaucrat::getName(void) const{
	return this->name;
}

void	Bureaucrat::incrementGrade(void){
	try
	{
		if (this->grade - 1 < 0)
			throw GradeTooHighException();
		else
			this->grade -= 1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

}

void	Bureaucrat::incrementGrade(int num){
	try
	{
		if (this->grade - num < 0)
			throw GradeTooHighException();
		else
			this->grade -= num;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	Bureaucrat::decrementGrade(void){
	try
	{
		if (this->grade + 1 > 150)
			throw GradeTooLowException();
		else
			this->grade += 1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	Bureaucrat::decrementGrade(int num){
	try
	{
		if (this->grade + num > 150)
			throw GradeTooLowException();
		else
			this->grade += num;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	Bureaucrat::signForm(AForm& form){
	if (form.getSignatureGrade() < this->grade)
		std::cout << this->name << " could not sign " << form.getName() << " because its grade is too low." << std::endl;
	else
		std::cout << this->name << " signed " << form.getName() << "." << std::endl;
	return;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw(){
	return "The grade is too high!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
	return "The grade is too low!";
}

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& bur){
	if (bur.getGrade() > 0 && bur.getGrade() < 151)
		stream << bur.getName() << ", bureaucrat grade " << bur.getGrade() << ".";
	else
		stream << "Invalid Bureaucrat!";
	return stream;
}
