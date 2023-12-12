/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:06:40 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/12 15:12:42 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void){
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

Bureaucrat::~Bureaucrat(void){
	return;
}

int	Bureaucrat::getGrade(void){
	return this->grade;
}

std::string	Bureaucrat::getName(void){
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

const char	*Bureaucrat::GradeTooHighException::what() const throw(){
	return "The grade is too high!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
	return "The grade is too low!";
}

std::ostream& operator<<(std::ostream& stream, Bureaucrat& bur){
	if (bur.getGrade() > 0 && bur.getGrade() < 151)
		stream << bur.getName() << ", bureaucrat grade " << bur.getGrade() << ".";
	else
		stream << "Invalid Bureaucrat!";
	return stream;
}
