/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:13:52 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/14 18:42:50 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

# include <iostream>

class ScalarConverter{
	private:
	public:
		ScalarConverter(void);
		ScalarConverter(const ScalarConverter& conv);
		ScalarConverter& operator=(const ScalarConverter& conv);
		~ScalarConverter(void);

		static void	convert(std::string representation);
};

#endif
