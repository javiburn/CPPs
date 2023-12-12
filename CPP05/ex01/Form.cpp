/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:36:29 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/12 17:14:24 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void): name("GDPR"), req_sign(151), req_exec(151){
	std::cout << "Form ---> Default constructor called" << std::endl;
	this->is_signed = false;
	try{
		if (this->req_exec > 150 || this->req_sign > 150)
			throw GradeTooLowException();
		if (this->req_exec < 0 || this->req_sign < 0)
			throw GradeTooHighException();
	}
	catch (std::exception& e){
		std::cerr << e.what() << std::endl;
	}
}

Form::Form(const std::string name, const int signature, const int exec): name(name), req_sign(signature), req_exec(exec){
	std::cout << "Form ---> Default constructor called" << std::endl;
	this->is_signed = false;
	try{
		if (this->req_exec > 150 || this->req_sign > 150)
			throw GradeTooLowException();
		if (this->req_exec < 0 || this->req_sign < 0)
			throw GradeTooHighException();
	}
	catch (std::exception& e){
		std::cerr << e.what() << std::endl;
	}
}

Form& Form::operator=(const Form& form){
	std::cout << "Form ---> Copy assignment operator called" << std::endl;
	this->is_signed = form.is_signed;
	return *this;
}

Form::Form(const Form& form): name(form.name), req_sign(form.req_sign), req_exec(form.req_exec){
	std::cout << "Form ---> Copy constructor called" << std::endl;
	this->is_signed = false;
	try{
		if (this->req_exec > 150 || this->req_sign > 150)
			throw GradeTooLowException();
		if (this->req_exec < 0 || this->req_sign < 0)
			throw GradeTooHighException();
	}
	catch (std::exception& e){
		std::cerr << e.what() << std::endl;
	}
}

Form::~Form(void){
	std::cout << "Form ---> Default destructor called" << std::endl;
	return;
}

int	Form::getSignatureGrade(void){
	return this->req_sign;
}

int	Form::getExecutionGrade(void){
	return this->req_exec;
}

const std::string Form::getName(void){
	return this->name;
}

bool Form::getSigned(void){
	return this->is_signed;
}

void	Form::beSigned(Bureaucrat& bur){
	try
	{
		if (bur.getGrade() > this->req_sign)
			throw GradeTooLowException();
		else
			this->is_signed  = true;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

const char* Form::GradeTooHighException::what() const throw(){
	return "The form's grade is too high!";
}

const char* Form::GradeTooLowException::what() const throw(){
	return "The form's grade is too low!";
}

std::ostream& operator<<(std::ostream& stream, Form& form){
	if (form.getExecutionGrade() > 150 || form.getSignatureGrade() > 150
		|| form.getExecutionGrade() < 0 || form.getSignatureGrade() < 0)
	{
		stream << "Invalid Form";
		return stream;
	}
	stream << form.getName() << " is a form that needs a bureaucrat of grade " << form.getSignatureGrade() << " to sign the document and one of grade " << form.getExecutionGrade() << " to execute it.";
	if (form.getSigned() == false)
		stream << " The form has not been signed yet.";
	else
		stream << " The form has already been signed.";
	return stream;
}
