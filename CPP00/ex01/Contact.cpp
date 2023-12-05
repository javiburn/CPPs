/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:12:51 by jsarabia          #+#    #+#             */
/*   Updated: 2023/11/09 13:09:34 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void){
	return;
}

Contact::~Contact(void){
	return;
}

void	Contact::SetFirstName(std::string first_name){
	fname = first_name;
}

void	Contact::SetLastName(std::string last_name){
	sname = last_name;
}

void	Contact::SetNickname(std::string nickname){
	nick = nickname;
}

void	Contact::SetPhoneNum(std::string phonenum){
	phone = phonenum;
}

void	Contact::SetSecret(std::string dark_secret){
	secret = dark_secret;
}

std::string	Contact::GetFirstName(){
	return fname;
}

std::string	Contact::GetLastName(){
	return sname;
}

std::string	Contact::GetNickname(){
	return nick;
}

std::string	Contact::GetPhoneNum(){
	return phone;
}

std::string	Contact::GetSecret(){
	return secret;
}
