/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 14:35:25 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/26 12:18:03 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <iomanip>
# include <vector>
# include <deque>
# include <exception>

template <typename T>
int easyfind(T numbers, int num)
{
	for (typename T::iterator it = numbers.begin(); it != numbers.end(); it++)
	{
		if (*it == num)
				return *it;
	}
	throw std::invalid_argument("The number was not found");
	return 0;
}


#endif
