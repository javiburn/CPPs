/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:27:04 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/26 13:19:49 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <iomanip>
# include <vector>
# include <exception>

class Span{
	private:
		std::vector<int>	*vector;
		unsigned int		size;
		Span(void);
		Span(const Span& span);
	public:
		Span(unsigned int N);
		Span& operator=(const Span& span);
		~Span(void);
		void 			addNumber(int num);
		unsigned int	getSize(void);
		class NumberTooHigh: public std::exception{
			const char *what() const throw();
		};
		class NumberIsZero: public std::exception{
			const char *what() const throw();
		};
		class ArrayFull: public std::exception{
			const char *what() const throw();
		};
};

#endif
