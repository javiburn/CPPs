/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 10:48:08 by jsarabia          #+#    #+#             */
/*   Updated: 2023/11/23 17:44:39 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed{

	private:

	int 				fpnum;
	static const int	fractional  = 8;

	public:

	Fixed(void);
	Fixed(const int num);
	Fixed(const float num);
	Fixed(const Fixed& fixed);
	~Fixed(void);
	Fixed&	operator=(const Fixed& fixed);
	int		getRawBits(void)const;
	void	setRawBits(int const raw);
	float	toFloat(void)const;
	int		toInt(void)const;

	/*		Arithmetic operators		*/

	float	operator+(const Fixed& fixed);
	float	operator-(const Fixed& fixed);
	float	operator*(const Fixed& fixed);
	float	operator/(const Fixed& fixed);

	/*		Comparison operators		*/

	bool	operator>(const Fixed& fixed);
	bool	operator<(const Fixed& fixed);
	bool	operator<=(const Fixed& fixed);
	bool	operator>=(const Fixed& fixed);
	bool	operator==(const Fixed& fixed);
	bool	operator!=(const Fixed& fixed);

	/*		Increment / Decrement operators		*/

	Fixed	operator++(void);
	Fixed	operator++(int num);
	Fixed	operator--(void);
	Fixed	operator--(int num);

	/*		Max and Min		*/

	static Fixed&	min(Fixed& numOne, Fixed& numTwo);
	static const Fixed&	min(const Fixed& numOne, const Fixed& numTwo);
	static Fixed&	max(Fixed& numOne, Fixed& numTwo);
	static const Fixed&	max(const Fixed& numOne, const Fixed& numTwo);
};

std::ostream& operator<<(std::ostream& stream, const Fixed& fixed);

#endif
