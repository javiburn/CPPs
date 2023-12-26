/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 14:35:25 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/26 12:19:49 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	int nums[] = {1, 2, 3, 4, 5, 6};
	std::deque<int> valuesdeq(nums, nums + sizeof(nums) / sizeof(int));
	int num = 3;
	try{
		std::cout << easyfind(valuesdeq, num) << std::endl;
	}
	catch (std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	try{
		std::cout << easyfind(valuesdeq, num + 87658735) << std::endl;
	}
	catch (std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	std::vector<int> valuesvector(nums, nums + sizeof(nums) / sizeof(int));
	try{
		std::cout << easyfind(valuesvector, num) << std::endl;
	}
	catch (std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	try{
		std::cout << easyfind(valuesvector, num + 3487568374) << std::endl;
	}
	catch (std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
