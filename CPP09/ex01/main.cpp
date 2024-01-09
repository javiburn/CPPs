/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:48:13 by jsarabia          #+#    #+#             */
/*   Updated: 2024/01/09 13:02:47 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc != 2){
		std::cerr << "Error" << std::endl;
		return 1;
	}
	RPN::polishNotation(argv[1]);
	return 0;
}
