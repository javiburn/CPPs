/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:35:33 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/20 18:52:40 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# pragma once
# include <iostream>
# include <iomanip>
# include <exception>

template<typename T>
class Array{
	private:
		int	len;
		T*	arr;
	public:
		Array(void): len(0){ arr = new T[0]; };
		Array(unsigned int n): len(n) { arr = new T[n]; };
		Array(const Array& array){
			this->arr = new T[array.len];
			this->len = array.size();
			for (int i = 0; i < array.size(); i++)
				this->arr[i] = array.arr[i];
		};
		Array& operator=(const Array& array){
			this->arr = new T[array.len];
			this->len = array.size();
			for (int i = 0; i < array.size(); i++)
				this->arr[i] = array.arr[i];
		};
		~Array(void){
			if (this->len > 0)
				delete[] arr;
			return;
		}
		T& operator[](int index){
			try{
				if (index >= this->size())
						throw IndexTooHigh();
				else if (index < 0)
						throw IndexTooLow();
			}
			catch (std::exception& e){
				std::cerr << e.what() << std::endl;
			}
			return this->arr[index];
		}
		int	size()const { return this->len; };
		void	printArray(void){
			for (int i = 0; i < this->len; i++)
				std::cout << i << ": \'" << this->arr[i] << "\'" << std::endl;
		}
		void	setArrIndex(const T& temp, int index){
			try{
				if (index >= this->size())
					throw IndexTooHigh();
			}
			catch (std::exception& e){
				std:: cerr << e.what() << std::endl;
			}
			this->arr[index] = temp;
		}

		class IndexTooHigh: public std::exception{
			const char* what() const throw(){ return "The index is too high"; };
		};

		class IndexTooLow: public std::exception{
			const char* what() const throw(){ return "The index is too low"; };
		};

};

#endif
