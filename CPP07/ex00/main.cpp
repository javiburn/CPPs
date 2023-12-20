/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:35:25 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/20 16:07:13 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"

// int main( void ) {
// int a = 2;
// int b = 3;
// ::swap( a, b );
// std::cout << "a = " << a << ", b = " << b << std::endl;
// std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
// std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
// std::string c = "chaine1";
// std::string d = "chaine2";
// ::swap(c, d);
// std::cout << "c = " << c << ", d = " << d << std::endl;
// std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
// std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
// return 0;
// }

int main(){
	int num = 5;
	int num2 = 90;
	std::cout << "TYPE: INTEGER" << std::endl;
	std::cout << "Value of num before swap: " << num << std::endl;
	std::cout << "Value of num2 before swap: " << num2 << std::endl;
	std::cout << "Min value: " << ::min(num, num2) << std::endl;
	std::cout << "Max value: " << ::max(num, num2) << std::endl;
	std::cout << "* MAGIC OF SWAP *" << std::endl;
	::swap(num, num2);
	std::cout << "Value of num after swap: " << num << std::endl;
	std::cout << "Value of num2 after swap: " << num2 << std::endl;
	std::cout << "___________________________________" << std::endl;
	std::string hello = "Hello";
	std::string world = "World";
	std::cout << "TYPE: STRINGS" << std::endl;
	std::cout << "Value of hello before swap: " << hello << std::endl;
	std::cout << "Value of world before swap: " << world << std::endl;
	std::cout << "Min value: " << ::min(hello, world) << std::endl;
	std::cout << "Max value: " << ::max(hello, world) << std::endl;
	std::cout << "* MAGIC OF SWAP *" << std::endl;
	::swap(hello, world);
	std::cout << "Value of hello after swap: " << hello << std::endl;
	std::cout << "Value of world after swap: " << world << std::endl;
	return 0;
}

