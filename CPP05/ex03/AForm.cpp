/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:48:47 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/14 13:09:05 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void): name("GDPR"), target(""), req_sign(151), req_exec(151){
	std::cout << "AForm ---> Default constructor called" << std::endl;
	int p = this->req_exec;
	p = req_sign;
	return;
}

AForm::AForm(const std::string target): name("GDPR"), target(target), req_sign(151), req_exec(151){
	std::cout << "AForm ---> Default constructor called" << std::endl;
	return;
}

AForm::AForm(const AForm &form): target(form.target), req_sign(145), req_exec(137){
	std::cout << "AForm ---> Copy constructor called" << std::endl;
	this->is_signed = form.is_signed;
	return;
}

AForm& AForm::operator=(const AForm& form){
	std::cout << "AForm ---> Copy assignment operator called" << std::endl;
	this->is_signed = form.is_signed;
	return *this;
}

AForm::~AForm(void){
	std::cout << "AForm ---> Default destructor called" << std::endl;
	return;
}
