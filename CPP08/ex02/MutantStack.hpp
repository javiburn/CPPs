/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 17:12:15 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/28 17:50:22 by jsarabia         ###   ########.fr       */
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
		~MutantStack(void){
			delete this->stack;
		};
		iterator	begin(void){
			return this->c.begin();
		};
		iterator	end(void){
			return this->c.end();
		};
};

#endif
