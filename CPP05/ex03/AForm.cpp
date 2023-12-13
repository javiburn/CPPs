/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:48:47 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/13 15:36:11 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void): name("GDPR"), target(""), req_sign(151), req_exec(151){
	int p = this->req_exec;
	p = req_sign;
	return;
}

AForm::AForm(const std::string target): name("GDPR"), target(target), req_sign(151), req_exec(151){
	return;
}

AForm::AForm(const AForm &form): target(form.target), req_sign(145), req_exec(137){
	this->is_signed = form.is_signed;
	return;
}

AForm& AForm::operator=(const AForm& form){
	this->is_signed = form.is_signed;
	return *this;
}

AForm::~AForm(void){
	return;
}
