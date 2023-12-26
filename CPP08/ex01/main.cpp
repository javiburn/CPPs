/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:53:09 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/26 17:00:54 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// int main()
// {
// 	Span sp = Span(5);
// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);
// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;
// 	return 0;
// }

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
// 		Span good(100);
// 		for (int i = 0; i < 120; i++){
// 			good.addNumber(i * 99);
// 			if (i == 99)
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

int main(){
	int n = 10;
	srand(time(NULL));
	Span sp = Span(n);
	for (int i = 0; i < n; i++){
		sp.addNumber(rand() % 500);
	}
	sp.printVector();
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}
