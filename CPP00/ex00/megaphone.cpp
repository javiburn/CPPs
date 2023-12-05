/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:57:32 by jsarabia          #+#    #+#             */
/*   Updated: 2023/10/30 17:39:54 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else{
		for (int i = 1; i < argc; i++){
			for (int j = 0; j < int(strlen(argv[i])); j++)
				std::cout << char(std::toupper(argv[i][j]));
			if (i + 1 != argc)
				std::cout << " ";
		}
		std::cout << std::endl;
	}
	return (0);
}
