/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:52:54 by jsarabia          #+#    #+#             */
/*   Updated: 2023/11/21 14:52:22 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed{

	private:

	int 				fpnum;
	static const int	fractional  = 8;

	public:

	Fixed(void);
	Fixed(const Fixed& fixed);
	~Fixed(void);
	Fixed& operator=(const Fixed& fixed);
	int		getRawBits(void)const;
	void	setRawBits(int const raw);
};

#endif
