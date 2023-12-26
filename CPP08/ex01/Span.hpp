/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:27:04 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/26 16:53:53 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <iomanip>
# include <vector>
# include <exception>
# include <algorithm>

class Span{
	private:
		std::vector<int>	*vector;
		int					added;
		unsigned int		size;
		Span(void);
	public:
		Span(const Span& span);
		Span(unsigned int N);
		Span& operator=(const Span& span);
		~Span(void);
		void 			addNumber(int num);
		int				longestSpan(void);
		int				shortestSpan(void);
		unsigned int	getSize(void);
		void			printVector(void);
		class NumberTooHigh: public std::exception{
			const char *what() const throw();
		};
		class NumberIsZero: public std::exception{
			const char *what() const throw();
		};
		class ArrayFull: public std::exception{
			const char *what() const throw();
		};
		class ArrayEmpty: public std::exception{
			const char *what() const throw();
		};
		class ArrayOnlyValue: public std::exception{
			const char *what() const throw();
		};
};

#endif
