/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 16:28:46 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/20 17:32:17 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int main(){
	int N = 6;
	std::string array[] = { "one", "two", "three", "four", "five", "six" };
	iter(array, N, &addA);
	int array2[] = { 1, 2, 3, 4, 5, 6, 7};
	N = 7;
	iter(array2, N, &addA);
	std::cout << "Te value was updated to: " << array2[0] << std::endl;
	return 0;
}
