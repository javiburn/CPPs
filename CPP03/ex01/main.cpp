/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:59:26 by jsarabia          #+#    #+#             */
/*   Updated: 2023/11/27 17:04:24 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap	jese("jesé");
	ClapTrap	carmelo("carmelo");

	jese.attack("alaparic");
	carmelo.attack("jsarabia");
	jese.beRepaired(1);
	jese.guardGate();
	jese.attack("alaparic");
	jese.attack("alaparic");
	jese.attack("alaparic");
	jese.attack("alaparic");
	jese.attack("alaparic");
	jese.attack("alaparic");
	jese.attack("alaparic");
	jese.attack("alaparic");
	jese.attack("alaparic");
	jese.attack("alaparic");
	jese.beRepaired(30);
	jese.attack("alaparic");
	return 0;
}
