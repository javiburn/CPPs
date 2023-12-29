/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 17:12:15 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/29 17:45:28 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_HPP
# define MUTANT_HPP

# include <iostream>
# include <iomanip>
# include <stack>
# include <list>

template <typename T>
class MutantStack: public std::stack<T>{
	private:
		std::stack<T>	*stack;
	public:
	typedef typename MutantStack<T>::container_type::iterator iterator;
		MutantStack(void){
			this->stack = new std::stack<T>;
		};
		MutantStack(unsigned int N){
			this->stack = new std::stack<T>(N);
		};
		MutantStack(const MutantStack& mutant){
			this->stack = new std::stack<T>(mutant.stack->size());
			for (int it = this->begin(); it != this->end(); it++)
				this->stack[it] = mutant.stack[it];
		};
		MutantStack& operator=(const MutantStack& mutant){
			this->stack = new std::stack<T>(mutant.size());
			for (int it = this->begin(); it != this->end(); it++)
				this->stack[it] = mutant.stack[it];
			return *this;
		};
		int& operator[](int i){
			return this->stack[i];
		};
		~MutantStack(void){
			delete this->stack;
		};
		iterator	begin(void){
			return this->c.begin();
		};
		iterator	end(void){
			return this->c.end();
		};
		void	printStack(void){
			iterator it = this->begin();
 			iterator ite = this->end();
			std::cout << "STACK:" << std::endl;
			while (it != ite)
			{
				--ite;
				if (ite == this->end() - 1)
					std::cout << *ite << "    --------> Top of the stack (last element introduced)" << std::endl;
				else if (ite == it)
					std::cout << *ite << "    --------> Bottom of the stack (first element introduced)" << std::endl;
				else
					std::cout << *ite << std::endl;
			}
			std::cout << "END OF STACK." << std::endl;
		};
};

#endif
