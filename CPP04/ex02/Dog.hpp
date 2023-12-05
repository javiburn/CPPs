/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:48:17 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/01 13:32:26 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Brain.hpp"

class Dog: public Animal{
private:
	Brain*	brain;
public:
	Dog(void);
	Dog(const Dog& dog);
	~Dog(void);
	Dog& operator=(const Dog& dog);
	void	makeSound(void) const;
	Brain*	getBrain(void);
};

#endif
