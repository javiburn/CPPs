/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:24:08 by jsarabia          #+#    #+#             */
/*   Updated: 2023/11/30 14:55:22 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal{
protected:
	std::string type;
public:
	Animal(void);
	Animal(std::string type);
	Animal(const Animal& animal);
	~Animal(void);
	Animal& 	operator=(const Animal& animal);
	virtual void		makeSound(void) const;
	void		setType(std::string type);
	std::string	getType(void) const;
};

#endif
