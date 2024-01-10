/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:45:07 by jsarabia          #+#    #+#             */
/*   Updated: 2024/01/10 12:24:58 by jsarabia         ###   ########.fr       */
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

void	printVector(std::vector<int> myvector){
	for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); it++)
		std::cout << *it << std::endl;
}

void	PMergeMe::printList(std::list<int> mylist){
	for (std::list<int>::iterator it = mylist.begin(); it != mylist.end(); it++)
		std::cout << *it << std::endl;
}

void	pushLarge(std::vector<int> *small, std::vector<int> *large){
	unsigned long aux = small->size();

	for (unsigned long i = 0; i < large->size(); i++){
		std::vector<int>::iterator it = small->begin();
		std::vector<int>::iterator ite = large->begin();
		if (i < aux)
			small->insert(it + i + 1, *(ite + i));
		else
			small->insert(small->begin(), *(large->end()));
		while (*(ite + i) > *(it + i + 1)){
			std::swap(*it, *(it + 1));
			printVector(*small);
			exit(0);
		}
	}
}

void	orderVectors(std::vector<int> *small, std::vector<int> *large){
	std::vector<int>::iterator ite = large->begin();
	//std::vector<int>::iterator aux = large->end();

	for (std::vector<int>::iterator it = small->begin(); it != small->end(); it++){
		it = small->begin();
		ite = large->begin();
		std::vector<int>::iterator auxsmall = it + 1;
		std::vector<int>::iterator auxlarge = ite + 1;
		while (*it > *auxsmall){
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
	printVector(*small);
	exit(0);
	pushLarge(small, large);
}

void	PMergeMe::magicMerger(std::list<int> mylist){
	std::vector<int>	small;
	std::vector<int>	large;

	if (mylist.size() < 2){
		std::cout << *mylist.begin() << std::endl;
		return;
	}
	for (std::list<int>::iterator it = mylist.begin(); it != mylist.end(); it++){
		std::vector<int>	temp;
		temp.push_back(*it);
		temp.push_back(*(++it));
		if (it == mylist.end()){
			large.push_back(*(it));
			break;
		}
		std::vector<int>::iterator min = std::min_element(temp.begin(), temp.end());
		int aux = *min;
		small.push_back(aux);
		std::vector<int>::iterator max = std::max_element(temp.begin(), temp.end());
		aux = *max;
		large.push_back(aux);
	}
	printList(mylist);
	std::cout << "_______" << std::endl;
	orderVectors(&small, &large);
	std::cout << "_______" << std::endl << std::endl << std::endl;
	//printVector(small);
	/*for (std::vector<int>::iterator it = small.begin(); it != small.end(); it++){
		if (it++ == mylist.end())
	}
	printList(mylist);
	std::cout << "_______" << std::endl;
	printVector(small);*/
}
