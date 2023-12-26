/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:53:09 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/26 15:57:46 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}

// int main()
// {
// 	try{
// 		Span hello(-1);
// 		std::cout << hello.getSize() << std::endl;
// 	}
// 	catch (std::exception& e){
// 		std::cerr << e.what() << std::endl;
// 	}
// 	try{
// 		Span hi(0);
// 		std::cout << hi.getSize() << std::endl;
// 	}
// 	catch (std::exception& e){
// 		std::cerr << e.what() << std::endl;
// 	}
// 	try{
// 		Span good(10);
// 		for (int i = 0; i < 120; i++){
// 			good.addNumber(i);
// 			if (i == 9)
// 			{
// 				std::cout << "longest span: " << good.longestSpan() << std::endl;
// 				std::cout << "shortest span: " << good.shortestSpan() << std::endl;
// 			}
// 		}
// 	}
// 	catch (std::exception& e){
// 		std::cerr << e.what() << std::endl;
// 	}

// 	return 0;
// }
