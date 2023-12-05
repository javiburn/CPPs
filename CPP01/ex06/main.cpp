/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:29:09 by jsarabia          #+#    #+#             */
/*   Updated: 2023/11/16 17:27:01 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl		harl;
	std::string	input;

	if (argc != 2)
	{
		std::cout << "I think you did not understand what you had to do..." << std::endl;
		return 1;
	}
	input = argv[1];
	harl.complain(input);
	return 0;
}
