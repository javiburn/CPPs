/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:29:27 by jsarabia          #+#    #+#             */
/*   Updated: 2023/11/30 15:10:11 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{
private:
public:
	WrongCat(void);
	WrongCat(const WrongCat& wrongCat);
	~WrongCat(void);
	WrongCat& 	operator=(const WrongCat& wrongCat);
	void		makeSound(void) const;
};

#endif
