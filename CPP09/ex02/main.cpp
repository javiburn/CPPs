/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:06:22 by jsarabia          #+#    #+#             */
/*   Updated: 2024/01/10 15:46:06 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PMergeMe.hpp"

int	checkElements(int argc, char **argv)
{
	char *endptr;

	for (int i = 1; i < argc; i++){
		strtol(argv[i], &endptr, 10);
		if (*endptr != '\0')
			return 0;
		if (std::atoi(argv[i]) < 0)
			return 0;
	}
	return 1;
}

int main(const int argc, char **argv)
{
	if (!checkElements(argc, argv)){
		std::cerr << "Error" << std::endl;
		return 1;
	}
	std::vector<int> myvector;
	for (int i = 1; i < argc; i++){
		myvector.push_back(std::atof(argv[i]));
	}
	PMergeMe::magicMerger(myvector);
	return 0;
}
