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
	std::vector<int>::iterator ite = large->end();
	for (std::vector<int>::iterator it = small->end() - 1; it != small->begin(); it--){
		std::cout << "pre it: " <<  *it << std::endl;
		it = small->end() - 1;
		while (*it > *(--it)){
			it--;
		}
		if (std::is_sorted(small->begin(), small->end()))
			break;
		while (it != small->begin() && *it < *(--it)){
			--ite;
			small->push_back(*it);
			small->erase(it);
			large->push_back(*ite);
			large->erase(ite);
			printVector(*small);
			std::cout << "it: " <<  *it << std::endl;
			std::cout << "back: " <<  small->back() << std::endl;
			//exit(0);
		}
	}
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
		std::vector<int>::iterator min = std::min_element(std::begin(temp), std::end(temp));
		int aux = *min;
		small.push_back(aux);
		std::vector<int>::iterator max = std::max_element(std::begin(temp), std::end(temp));
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
