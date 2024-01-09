/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:49:34 by jsarabia          #+#    #+#             */
/*   Updated: 2024/01/09 14:51:58 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>
# include <string>
# include <sstream>

class RPN{
	private:
		RPN();
		RPN(const RPN& rpn);
		RPN& operator=(const RPN& rpn);
	public:
		~RPN(void);
		static void polishNotation(char *str);
};

#endif
