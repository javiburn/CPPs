/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:10:06 by jsarabia          #+#    #+#             */
/*   Updated: 2023/11/15 12:07:37 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{

	private:

	Weapon &weapon;
	std::string name;

	public:

	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);
	void	attack(void);
	void	setWeapon(Weapon& weapon);
};

#endif
