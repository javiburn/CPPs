/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 14:35:25 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/22 16:07:13 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	int nums[] = {1, 2, 3, 4, 5, 6};
	std::vector<int> values(nums, nums + sizeof(nums) / sizeof(int));
	int num = 3;
	try{
		std::cout << easyfind(values, num) << std::endl;
	}
	catch (std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
