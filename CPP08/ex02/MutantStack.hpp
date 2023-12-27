/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 17:12:15 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/27 18:16:30 by jsarabia         ###   ########.fr       */
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
		class iterator{
				private:
					iterator(void){};
				public:
					std::stack<T>	*ptr;
					~iterator(void){};
					iterator(const iterator& iter){
						this->ptr = iter.ptr;
					};
					iterator(std::stack<T> ptr){
						this->ptr = &ptr;
					};
					iterator& operator=(std::stack<T> *ptr){
						this->ptr = ptr;
						return *this;
					};
					iterator operator++(void){
						MutantStack<int>::iterator aux;

						aux.ptr = this->ptr;
						this->ptr += 1;
						return aux;
					};
					bool operator!=(const iterator& iter){
						if (this->ptr != iter.ptr)
							return true;
						return false;
					};
					bool operator==(const iterator& iter){
						if (this->ptr == iter.ptr)
							return true;
						return false;
					};
					 iterator* operator++(int){
						this->ptr += 1;
						return this->ptr;
					};
					 iterator operator--(void){
						MutantStack<int>::iterator aux;

						aux.ptr = this->ptr;
						this->ptr -= 1;
						return aux;
					};
					 iterator* operator--(int num2){
						this->ptr -= 1;
						num2 = 0;
						return this->ptr;
					};
					iterator& operator*(void){
						//std::cout << this->ptr[0] << std::endl;
						return *this;
					};
		};
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
		std::stack<T>& operator[](size_t i){
			return this->stack[i];
		};
		~MutantStack(void){
			delete this->stack;
		};
		iterator	begin(void){
			return iterator(this->stack[0]);
		};
		void	push(int num){
			if (this->stack)
				this->stack->push(num);
		};
		int	size(){
			return this->stack->size();
		};
		int	top(){
			return this->stack->top();
		};
		void	pop(){
			return this->stack->pop();
		};
		iterator	end(void){
			return iterator(this->stack[this->stack->size() - 1]);
		};
};

std::ostream& operator<<(std::ostream& stream, std::stack<int>* iter){
	stream << &iter;
	return stream;
};

std::ostream& operator<<(std::ostream& stream, MutantStack<int>::iterator iter){
	stream << &(iter.ptr);
	return stream;
};

/*std::ostream& operator<<(std::ostream& stream, MutantStack<int>& iter){
	stream << iter;
	return stream;
};*/




#endif
