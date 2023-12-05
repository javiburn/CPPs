/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:34:17 by jsarabia          #+#    #+#             */
/*   Updated: 2023/11/30 15:25:18 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal{
protected:
	std::string type;
public:
	WrongAnimal(void);
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal& Wronganimal);
	virtual ~WrongAnimal(void);
	WrongAnimal& 	operator=(const WrongAnimal& animal);
	void			makeSound(void) const;
	void			setType(std::string type);
	std::string		getType(void) const;
};

#endif
