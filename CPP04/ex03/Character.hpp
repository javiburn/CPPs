/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:56:12 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/07 15:05:01 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"

class Character: public ICharacter{
	private:
		std::string name;
		AMateria*	slots[4];
		AMateria*	unequipped[50];
	public:
		Character(void);
		Character(std::string name);
		Character(const Character& character);
		Character& operator=(const Character& character);
		~Character(void);
		std::string const& getName(void) const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
