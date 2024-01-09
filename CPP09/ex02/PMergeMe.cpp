/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:45:07 by jsarabia          #+#    #+#             */
/*   Updated: 2024/01/09 19:57:33 by jsarabia         ###   ########.fr       */
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

void	orderVectors(std::vector<int> *small, std::vector<int> *large){
	for (std::vector<int>::iterator it = small->end(); it != small->begin(); it--){
		std::vector<int>::iterator ite = large->end() - 1;
		it = small->end() - 1;
		std::vector<int>::iterator auxsmall = it - 1;
		std::vector<int>::iterator auxlarge = ite - 1;
		std::cout << "pre it: " <<  *it << std::endl;
		while (it != small->begin() && *it > *auxsmall){
			--it;
			--auxsmall;
			--ite;
			--auxlarge;
		}
		std::cout << "pre it: " <<  *it << std::endl;
		std::cout << "small begin: " <<  *small->begin() << std::endl;
		if (it == small->begin())
			break;
		while (it != small->begin() && *it < *auxsmall){
			std::swap(*it, *auxsmall);
			std::swap(*ite, *auxlarge);
			std::cout << "it: " <<  *it << std::endl;
			std::cout << "back: " <<  small->back() << std::endl;
			//exit(0);
		}
	}
	printVector(*small);
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
	//printList(mylist);
	printVector(small);
	std::cout << "_______" << std::endl;
	orderVectors(&small, &large);
	std::cout << "_______" << std::endl << std::endl << std::endl;
	/*for (std::vector<int>::iterator it = small.begin(); it != small.end(); it++){
		if (it++ == mylist.end())
	}
	printList(mylist);
	std::cout << "_______" << std::endl;
	printVector(small);*/
}
