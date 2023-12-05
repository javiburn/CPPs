/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:42:55 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/01 13:32:29 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Brain.hpp"

class Cat: public Animal{
private:
	Brain*	brain;
public:
	Cat(void);
	Cat(const Cat& cat);
	~Cat(void);
	Cat& operator=(const Cat& cat);
	void	makeSound(void) const;
	Brain*	getBrain(void);
};

#endif
