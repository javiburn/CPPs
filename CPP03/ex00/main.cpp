/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:59:26 by jsarabia          #+#    #+#             */
/*   Updated: 2023/11/27 16:50:53 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	pwpw("Juan");
	ClapTrap	juan;

	juan = pwpw;
	juan.attack("alaparic");
	juan.beRepaired(1);
	juan.attack("alaparic");
	juan.takeDamage(500);
	juan.attack("alaparic");
	juan.attack("alaparic");
	juan.attack("alaparic");
	juan.attack("alaparic");
	juan.takeDamage(500);
	juan.attack("alaparic");
	juan.attack("alaparic");
	juan.attack("alaparic");
	juan.attack("alaparic");
	juan.attack("alaparic");
	juan.beRepaired(30);
	juan.attack("alaparic");

	return 0;
}
