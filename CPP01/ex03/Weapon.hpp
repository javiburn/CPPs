/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:00:51 by jsarabia          #+#    #+#             */
/*   Updated: 2023/11/13 19:01:50 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
//#include "HumanA.hpp"
//#include "HumanB.hpp"

class Weapon{

	private:

	std::string	type;

	public:

	Weapon(std::string type);
	Weapon(void);
	~Weapon(void);
	const std::string&	getType(void);
	void				setType(std::string type);
};

#endif
