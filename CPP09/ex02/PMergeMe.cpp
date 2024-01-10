/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:45:07 by jsarabia          #+#    #+#             */
/*   Updated: 2024/01/10 19:00:00 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PMergeMe.hpp"

PMergeMe::PMergeMe(){
	return;
}

PMergeMe::PMergeMe(const PMergeMe& merge){
	(void)merge;
	return;
}

PMergeMe& PMergeMe::operator=(const PMergeMe& merge){
	(void)merge;
	return *this;
}

PMergeMe::~PMergeMe(void){
	return;
}

void	printResultVector(std::vector<int> myvector){
	std::cout << "After: ";
	for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void	PMergeMe::printBeforeVector(std::vector<int> myvector){
	std::cout << "Before: ";
	for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void	pushLarge(std::vector<int> *small, std::vector<int> *large){
	std::vector<int>::iterator ite = large->begin();
	int i = 0;

	for (std::vector<int>::iterator it = small->begin(); it != small->end(); it++){
		i++;
		std::cout << "_______" << std::endl;
		printResultVector(*small);
		std::vector<int>::iterator it2 = it;
		std::vector<int>::iterator ite2 = ite;
		small->push_back(*(++ite2));
		std::vector<int>::iterator last = small->end();
		it2 = small->insert(it + 1, *last);
		small->pop_back();
		std::cout << "num: " << *it2 << std::endl;
		std::cout << "real num: " << *ite << std::endl;
		std::cout << "prev: " << *(std::next(it2)) << std::endl;
		while (it2 != small->begin() && *(it2) > *(std::next(it2))){
			std::cout << "?????" << std::endl;
			std::iter_swap(std::next(it2), it2);
			it2++;
		}
		printResultVector(*small);
		if (i == 4)
			exit(0);
	}
}

void orderVectors(std::vector<int> *small, std::vector<int> *large)
{
	std::vector<int>::iterator ite = large->begin();

	for (std::vector<int>::iterator it = small->begin(); it != small->end(); it++)
	{
		std::vector<int>::iterator it2 = it;
		std::vector<int>::iterator ite2 = ite;
		while (it2 != small->begin() && *std::prev(it2) > *it2)
		{
			std::iter_swap(it2, std::prev(it2));
			std::iter_swap(ite2, std::prev(ite2));
			it2--;
			ite2--;
		}
		ite++;
	}
	printResultVector(*small);
	pushLarge(small, large);
}

void	PMergeMe::magicMerger(std::vector<int> myvector){
	std::vector<int>	small;
	std::vector<int>	large;

	if (myvector.size() < 2){
		std::cout << *myvector.begin() << std::endl;
		return;
	}
	for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); it++){
		std::vector<int>	temp;
		temp.push_back(*it);
		temp.push_back(*(++it));
		if (it == myvector.end()){
			large.push_back(*(it - 1));
			break;
		}
		std::vector<int>::iterator min = std::min_element(temp.begin(), temp.end());
		int aux = *min;
		small.push_back(aux);
		std::vector<int>::iterator max = std::max_element(temp.begin(), temp.end());
		aux = *max;
		large.push_back(aux);
	}
	printBeforeVector(myvector);
	orderVectors(&small, &large);
	printResultVector(small);
}
