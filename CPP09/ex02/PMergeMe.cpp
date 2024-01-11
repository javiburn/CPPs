/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:45:07 by jsarabia          #+#    #+#             */
/*   Updated: 2024/01/11 10:36:47 by jsarabia         ###   ########.fr       */
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

void	pushLarge(std::vector<int> *small, std::vector<int> *large, std::vector<int> *newvector){
	std::vector<int>::iterator ite = large->begin();

	for (std::vector<int>::iterator it = small->begin(); it != small->end(); it++){
		newvector->push_back(*it);
		std::vector<int>::iterator it2 = newvector->end() - 1;
		newvector->push_back(*ite);
		while (it2 != small->begin() && *it2 < *(it2 - 1)){
			std::iter_swap(it2, it2 - 1);
			it2--;
		}
		it2 = newvector->end() - 1;
		while (it2 != small->begin() && *it2 < *(it2 - 1)){
			std::iter_swap(it2, it2 - 1);
			it2--;
		}
		ite++;
	}
}

void orderVectors(std::vector<int> *small, std::vector<int> *large, std::vector<int> *newvector)
{
	std::vector<int>::iterator ite = large->begin();

	for (std::vector<int>::iterator it = small->begin(); it != small->end(); it++)
	{
		std::vector<int>::iterator it2 = it;
		std::vector<int>::iterator ite2 = ite;
		while (it2 != small->begin() && *(it2 - 1) > *it2)
		{
			std::iter_swap(it2, it2 - 1);
			std::iter_swap(ite2, ite2 - 1);
			it2--;
			ite2--;
		}
		ite++;
	}
	pushLarge(small, large, newvector);
}

void	PMergeMe::magicMerger(std::vector<int> myvector){
	std::vector<int>	small;
	std::vector<int>	large;
	std::vector<int>	newvector;

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
	orderVectors(&small, &large, &newvector);
	printResultVector(newvector);
}
