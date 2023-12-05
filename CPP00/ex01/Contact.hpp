/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:10:06 by jsarabia          #+#    #+#             */
/*   Updated: 2023/11/09 14:49:54 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <stdlib.h>
#include <iomanip>

class Contact{
	private:

	std::string	fname;
	std::string	sname;
	std::string	nick;
	std::string	phone;
	std::string	secret;

	public:

	Contact(void);
	~Contact(void);

	void		SetFirstName(std::string);
	void		SetLastName(std::string);
	void		SetNickname(std::string);
	void		SetPhoneNum(std::string);
	void		SetSecret(std::string);
	std::string	GetFirstName(void);
	std::string	GetLastName(void);
	std::string	GetNickname(void);
	std::string	GetPhoneNum(void);
	std::string	GetSecret(void);
};

# endif
