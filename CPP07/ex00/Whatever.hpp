/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:50:34 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/20 16:05:16 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <iostream>

template<typename T>
void	swap(T& first, T& second){
	T aux;

	aux = first;
	first = second;
	second = aux;
};

template<typename T>
T	min(T& first, T& second){
	if (first < second)
		return first;
	else
		return second;
};

template<typename T>
T	max(T& first, T& second){
	if (first > second)
		return first;
	else
		return second;
};

#endif
