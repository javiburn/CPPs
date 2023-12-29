/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 17:11:37 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/29 17:45:07 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	srand(time(NULL));
	for (int i = 0; i < 15; i++)
		mstack.push(rand() % 100);
	mstack.printStack();
	mstack.pop();
	mstack.pop();
	mstack.pop();
	mstack.printStack();
	return 0;
}

// int main()
// {
// 	std::list<int> mstack;
// 	srand(time(NULL));
// 	for (int i = 0; i < 15; i++)
// 		mstack.push_back(rand() % 100);
// 	std::list<int>::iterator it = mstack.begin();
// 	std::list<int>::iterator ite = mstack.end();
// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 	--ite;
// 	std::cout << *ite << std::endl;
// 	}
// 	mstack.pop_back();
// 	mstack.pop_back();
// 	mstack.pop_back();
// 	it = mstack.begin();
// 	ite = mstack.end();
// 	++it;
// 	--it;
// 	std::cout << "____________" << std::endl;
// 	while (it != ite)
// 	{
// 	--ite;
// 	std::cout << *ite << std::endl;
// 	}
// 	return 0;
// }

// int main()
// {
// 	std::list<int> mstack;
// 	mstack.push_back(5);
// 	mstack.push_back(17);
// 	std::cout << mstack.back() << std::endl;
// 	mstack.pop_back();
// 	std::cout << mstack.size() << std::endl;
// 	mstack.push_back(3);
// 	mstack.push_back(5);
// 	mstack.push_back(737);
// 	//[...]
// 	mstack.push_back(0);
// 	std::list<int>::iterator it = mstack.begin();
// 	std::list<int>::iterator ite = mstack.end();
// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 	std::cout << *it << std::endl;
// 	++it;
// 	}
// 	ite = mstack.begin();
// 	std::cout <<  "size: " << mstack.size() << std::endl
// 	<< "_____" << std::endl;
// 	while (it != ite)
// 	{
// 	std::cout << *it << std::endl;
// 	--it;
// 	}
// 	std::list<int> s(mstack);
// 	return 0;
// }
