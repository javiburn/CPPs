/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 14:35:25 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/28 17:36:13 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <iomanip>
# include <vector>
# include <deque>
# include <exception>
# include <algorithm>

template <typename T>
int easyfind(T numbers, int num)
{
	typename T::iterator it = std::find(numbers.begin(), numbers.end(), num);
	if (*it == 0)
		throw std::invalid_argument("The number was not found");
	return *it;
}


#endif
