/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:42:55 by jsarabia          #+#    #+#             */
/*   Updated: 2023/11/30 14:47:12 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat: public Animal{
private:
public:
	Cat(void);
	Cat(const Cat& cat);
	~Cat(void);
	Cat& operator=(const Cat& cat);
	void	makeSound(void) const;
};

#endif
