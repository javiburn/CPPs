/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:35:25 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/20 15:51:47 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"

int main(){
	int num = 5;
	int num2 = 90;
	std::cout << "TYPE: INTEGER" << std::endl;
	std::cout << "Value of num before swap: " << num << std::endl;
	std::cout << "Value of num2 before swap: " << num2 << std::endl;
	std::cout << "* MAGIC OF SWAP *" << std::endl;
	swap(num, num2);
	std::cout << "Value of num after swap: " << num << std::endl;
	std::cout << "Value of num2 after swap: " << num2 << std::endl;
	std::cout << "___________________________________" << std::endl;
	std::string hello = "Hello";
	std::string world = "world";
	std::cout << "TYPE: STRINGS" << std::endl;
	std::cout << "Value of hello before swap: " << hello << std::endl;
	std::cout << "Value of world before swap: " << world << std::endl;
	std::cout << "* MAGIC OF SWAP *" << std::endl;
	swap(hello, world);
	std::cout << "Value of hello after swap: " << hello << std::endl;
	std::cout << "Value of world after swap: " << world << std::endl;
	return 0;
}
