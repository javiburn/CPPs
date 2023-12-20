/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 16:29:06 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/20 17:31:38 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iomanip>
# include <iostream>

template<typename T>
void	addA(T& element, size_t i){
	element[i] += 'a';
	std::cout << element[i] << std::endl;
	return;
};

template<typename T>
void	iter(T& arr, size_t len, void (*f)(T&, size_t)){
	for (size_t i = 0; i < len; i++){
		(*f)(arr, i);
	}
};

#endif
