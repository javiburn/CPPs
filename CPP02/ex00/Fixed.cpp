/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:55:55 by jsarabia          #+#    #+#             */
/*   Updated: 2023/11/21 12:22:42 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	fpnum = 0;
	return;
}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
	return;
}

Fixed::~Fixed(void){
	std::cout << "Default destructor called" << std::endl;
	return;
}

Fixed& Fixed::operator=(const Fixed& fixed){
	std::cout << "Copy assignment operator called" << std::endl;
	fpnum = fixed.getRawBits();
	return *this;
}

void	Fixed::setRawBits(int const raw){
	fpnum = raw;
	std::cout << "setRawBits member function called" << std::endl;
	return;
}

int		Fixed::getRawBits(void)const{
	std::cout << "getRawBits member function called" << std::endl;
	return fpnum;
}
