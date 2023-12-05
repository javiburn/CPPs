/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 10:48:01 by jsarabia          #+#    #+#             */
/*   Updated: 2023/11/24 17:47:15 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	fpnum = 0;
	return;
}

Fixed::Fixed(const int num){
	fpnum = roundf(num * (1 << fractional));
	return;
}

Fixed::Fixed(const float num){
	fpnum = roundf(num * (1 << fractional));
	return;
}

Fixed::Fixed(const Fixed& fixed)
{
	*this = fixed;
	return;
}

Fixed::~Fixed(void){
	return;
}

Fixed& Fixed::operator=(const Fixed& fixed){
	fpnum = fixed.getRawBits();
	return *this;
}


void	Fixed::setRawBits(int const raw){
	fpnum = raw;
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

/*		Arithmetic Operators		*/

float	Fixed::operator+(const Fixed& fixed){
	return (this->toFloat() + fixed.toFloat());
}

float	Fixed::operator-(const Fixed& fixed){
	return (this->toFloat() - fixed.toFloat());
}

float	Fixed::operator*(const Fixed& fixed){
	return (this->toFloat() * fixed.toFloat());
}

float	Fixed::operator/(const Fixed& fixed){
	return (this->toFloat() / fixed.toFloat());
}

/*		Comparison Operators		*/

bool	Fixed::operator>(const Fixed& fixed){
	if (this->toFloat() > fixed.toFloat())
		return true;
	return false;
}

bool	Fixed::operator<(const Fixed& fixed){
	if (this->toFloat() < fixed.toFloat())
		return true;
	return false;
}

bool	Fixed::operator<=(const Fixed& fixed){
	if (this->toFloat() <= fixed.toFloat())
		return true;
	return false;
}

bool	Fixed::operator>=(const Fixed& fixed){
	if (this->toFloat() >= fixed.toFloat())
		return true;
	return false;
}

bool	Fixed::operator==(const Fixed& fixed){
	if (this->toFloat() == fixed.toFloat())
		return true;
	return false;
}

bool	Fixed::operator!=(const Fixed& fixed){
	if (this->toFloat() != fixed.toFloat())
		return true;
	return false;
}

/*		Increment / Decrement Operators		*/

Fixed	Fixed::operator++(void){
	Fixed	a((float) (1 - 0.998));

	this->setRawBits(this->getRawBits() + a.getRawBits());
	return *this;
}

Fixed	Fixed::operator++(int){
	Fixed	a;
	Fixed	temp((float) (1 - 0.998));

	a = ++(*this);
	a = a - temp;
	return a;
}

Fixed	Fixed::operator--(void){
	Fixed	a((float) (1 - 0.998));

	this->setRawBits(this->getRawBits() - a.getRawBits());
	return *this;
}

Fixed	Fixed::operator--(int){
	Fixed	a((float) (1 - 0.998));

	this->setRawBits(this->getRawBits() - a.getRawBits());
	return *this;
}


/*		Min and Max		*/

Fixed&	Fixed::min(Fixed& numOne, Fixed& numTwo){
	if (numOne.getRawBits() <= numTwo.getRawBits())
		return numOne;
	else
		return numTwo;
}

const Fixed&	Fixed::min(const Fixed& numOne, const Fixed& numTwo){
	if (numOne.getRawBits() <= numTwo.getRawBits())
		return numOne;
	else
		return numTwo;
}

Fixed&	Fixed::max(Fixed& numOne, Fixed& numTwo){
	if (numOne.getRawBits() >= numTwo.getRawBits())
		return numOne;
	else
		return numTwo;
}

const Fixed&	Fixed::max(const Fixed& numOne, const Fixed& numTwo){
	if (numOne.getRawBits() >= numTwo.getRawBits())
		return numOne;
	else
		return numTwo;
}
