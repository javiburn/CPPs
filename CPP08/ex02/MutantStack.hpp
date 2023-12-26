/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 17:12:15 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/26 19:01:46 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_HPP
# define MUTANT_HPP

# include <iostream>
# include <iomanip>
# include <stack>

template <typename T>
class MutantStack{
	private:
		std::stack<T>	*stack;
	public:
		MutantStack(void){};
		MutantStack(unsigned int N){
			this->stack = new std::stack<T>(N);
		};
		MutantStack(const MutantStack& mutant){
			this->stack = new std::stack<T>(mutant.stack->size());
			for (int it = this->begin(); it != this->end(); it++)
				this->stack[it] = mutant.stack[it];
		};
		MutantStack& operator=(const MutantStack& mutant){
			this->stack = new std::stack<T>(N);
			for (int it = this->begin(); it != this->end(); it++)
				this->stack[it] = mutant.stack[it];
			return *this;
		};
		~MutantStack(void){
			delete this->stack;
		};
		T&	begin(void){
			return 0;
		};
		void	push(int num){
			this->stack.push(num);
		};
		int	size(){
			return this->stack->size();
		};
		MutantStack&	top(){
			return this->stack->top();
		};
		void	pop(){
			return this->stack->pop();
		};
		T&	end(void){
			return this->stack->size();
		};
		class iterator{
				private:
					int 			*num;
				public:
					iterator(void){};
					~iterator(void){};
					iterator(int num2){
						this->num = &num2;
					};
					const iterator& operator=(int num2){
						num = num2;
						return *this;
					};
					const iterator& operator++(void){
						int* aux;

						aux = this->num;
						this->num += 1;
						return aux;
					};
					bool operator!=(const iterator& iter){
						if (this->num != iter.num)
							return true;
						return false;
					};
					bool operator==(const iterator& iter){
						if (this->num == iter.num)
							return true;
						return false;
					};
					const iterator& operator++(int){
						this->num += 1;
						return this->num;
					};
					const iterator& operator--(void){
						int* aux;

						aux = this->num;
						this->num -= 1;
						return aux;
					};
					const iterator& operator--(int num2){
						this->num -= 1;
						return this->num;
					};
		};
};

std::ostream& operator<<(std::ostream& stream, const MutantStack& mutant){
	stream << mutant.stack;
	return stream;
}

std::ostream& operator<<(std::ostream& stream, *MutantStack<int>::operator iter){
			stream << iter;
			return stream;
		};

#endif
