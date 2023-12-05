/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:18:02 by jsarabia          #+#    #+#             */
/*   Updated: 2023/11/09 14:45:43 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <iomanip>
#include "Contact.hpp"

class Phonebook{

	private:

	Contact	list[8];

	public:

	Phonebook(void);
	~Phonebook(void);

	int			Search(int elements);
	void		SetEmptiness(Contact contact);
	void		Add(int i);
	Contact		GetContact(int i);
	void		CreateContact(Contact list);
};

# endif
