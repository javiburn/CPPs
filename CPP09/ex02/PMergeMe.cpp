/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:45:07 by jsarabia          #+#    #+#             */
/*   Updated: 2024/01/10 15:48:38 by jsarabia         ###   ########.fr       */
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
	for (std::vector<int>::reverse_iterator it = myvector.rbegin(); it != myvector.rend(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void	PMergeMe::printBeforeVector(std::vector<int> myvector){
	std::cout << "Before: ";
	for (std::vector<int>::reverse_iterator it = myvector.rbegin(); it != myvector.rend(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void	pushLarge(std::vector<int> *small, std::vector<int> *large){
	unsigned long aux = small->size();

	for (unsigned long i = 0; i < large->size(); i++){
		std::vector<int>::iterator it = small->begin() + i;
		std::vector<int>::iterator ite = large->begin();
		if (i < aux)
			small->insert(it + i, *(ite + i));
		else
			small->insert(small->end() - 1, *(large->end()));
		it = small->begin() + i;
		while (it + i != small->begin() && *(it + i) > *(it + i - 1)){
			std::swap(*(it + i - 1), *(it + i));
			if ((it + i - 1) != small->begin())
				--it;
		}
	}
}

void	orderVectors(std::vector<int> *small, std::vector<int> *large){
	std::vector<int>::iterator ite = large->begin();

	for (std::vector<int>::iterator it = small->begin(); it != small->end(); it++){
		it = small->begin();
		ite = large->begin();
		std::vector<int>::iterator auxsmall = it + 1;
		std::vector<int>::iterator auxlarge = ite + 1;
		while (*it >= *auxsmall){
			if (it == small->end() - 1)
				break;
			++it;
			++auxsmall;
			++ite;
			++auxlarge;
		}
		while (*it < *auxsmall){
			std::swap(*it, *auxsmall);
			std::swap(*ite, *auxlarge);
		}
	}
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
	printResultVector(large);
	orderVectors(&small, &large);
}
