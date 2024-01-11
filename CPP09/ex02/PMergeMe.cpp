/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:45:07 by jsarabia          #+#    #+#             */
/*   Updated: 2024/01/11 11:58:30 by jsarabia         ###   ########.fr       */
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

void	printResultList(std::list<int> mylist){
	std::cout << "After: ";
	for (std::list<int>::iterator it = mylist.begin(); it != mylist.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void	PMergeMe::printBeforeVector(std::vector<int> myvector){
	std::cout << "Before: ";
	for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void	printTime(int size, long time, std::string type){
	std::cout << "Time to process a range of " << size << " elements with std::" << type << ": " << time << " us (microseconds)." << std::endl;
}

void	pushLarge(std::vector<int> *small, std::vector<int> *large, std::vector<int> *newvector){
	std::vector<int>::iterator ite = large->begin();

	for (std::vector<int>::iterator it = small->begin(); it != small->end(); it++){
		newvector->push_back(*it);
		std::vector<int>::iterator it2 = newvector->end() - 1;
		while (it2 != newvector->begin() && *it2 < *(it2 - 1)){
			std::iter_swap(it2, it2 - 1);
			it2--;
		}
		newvector->push_back(*ite);
		it2 = newvector->end() - 1;
		while (it2 != newvector->begin() && *it2 < *(it2 - 1)){
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
	struct timeval start, first;
	gettimeofday(&start, NULL);
	orderVectors(&small, &large, &newvector);
	gettimeofday(&first, &start);
	printResultVector(newvector);
	printTime(myvector.size(), first.tv_usec, "vector");
}


void	pushLargeList(std::list<int> *small, std::list<int> *large, std::list<int> *newlist){
	std::list<int>::iterator ite = large->begin();

	for (std::list<int>::iterator it = small->begin(); it != small->end(); it++){
		newlist->push_back(*it);
		std::list<int>::iterator it2 = newlist->end();
		--it2;
		std::list<int>::iterator aux = it2;
		--aux;
		while (it2 != newlist->begin() && *it2 < *aux){
			std::iter_swap(it2, aux);
			it2--;
			aux--;
		}
		newlist->push_back(*ite);
		it2 = newlist->end();
		--it2;
		aux = it2;
		--aux;
		while (it2 != newlist->begin() && *it2 < *aux){
			std::iter_swap(it2, aux);
			it2--;
			aux--;
		}
		ite++;
	}
}

void orderLists(std::list<int> *small, std::list<int> *large, std::list<int> *newlist)
{
	std::list<int>::iterator ite = large->begin();

	for (std::list<int>::iterator it = small->begin(); it != small->end(); it++)
	{
		std::list<int>::iterator it2 = it;
		std::list<int>::iterator ite2 = ite;
		std::list<int>::iterator aux = it2;
		std::list<int>::iterator auxe = ite2;
		--aux;
		--auxe;
		while (it2 != small->begin() && *it2 < *aux)
		{
			std::iter_swap(it2, aux);
			std::iter_swap(ite2, auxe);
			it2--;
			ite2--;
			aux--;
			auxe--;
		}
		ite++;
	}
	pushLargeList(small, large, newlist);
}

void	PMergeMe::magicListMerger(std::list<int> mylist){
	std::list<int>	small;
	std::list<int>	large;
	std::list<int>	newlist;

	if (mylist.size() < 2){
		std::cout << *mylist.begin() << std::endl;
		return;
	}
	for (std::list<int>::iterator it = mylist.begin(); it != mylist.end(); it++){
		std::list<int>	temp;
		temp.push_back(*it);
		temp.push_back(*(++it));
		if (it == mylist.end()){
			large.push_back(*(--it));
			break;
		}
		std::list<int>::iterator min = std::min_element(temp.begin(), temp.end());
		int aux = *min;
		small.push_back(aux);
		std::list<int>::iterator max = std::max_element(temp.begin(), temp.end());
		aux = *max;
		large.push_back(aux);
	}
	struct timeval start, second;
	gettimeofday(&start, NULL);
	orderLists(&small, &large, &newlist);
	gettimeofday(&second, &start);
	//printResultList(newlist);
	printTime(mylist.size(), second.tv_usec, "list");
}
