/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:55:55 by jsarabia          #+#    #+#             */
/*   Updated: 2023/11/23 10:45:29 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	fpnum = 0;
	return;
}

Fixed::Fixed(const int num){
	std::cout << "Int constructor called" << std::endl;
	fpnum = roundf(num * (1 << fractional));
	return;
}

Fixed::Fixed(const float num){
	std::cout << "Float constructor called" << std::endl;
	fpnum = roundf(num * (1 << fractional));
	return;
}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
	return;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
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
	return fpnum;
}

float	Fixed::toFloat(void)const{
	float	newNum;

	newNum = this->getRawBits() / (double)(1 << fractional);
	return newNum;
}

int		Fixed::toInt(void)const{
	int	newNum;

	newNum = roundf(this->getRawBits() / (1 << fractional));
	return newNum;
}

std::ostream& operator<<(std::ostream& stream, const Fixed& fixed){
	stream << fixed.toFloat();
	return stream;
}
