/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:53:09 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/26 13:28:09 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try{
		Span hello(-1);
		std::cout << hello.getSize() << std::endl;
	}
	catch (std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	try{
		Span hi(0);
		std::cout << hi.getSize() << std::endl;
	}
	catch (std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	try{
		Span good(10);
		std::cout << good.getSize() << std::endl;
		for (int i = 0; i < 120; i++)
			good.addNumber(1);
	}
	catch (std::exception& e){
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
