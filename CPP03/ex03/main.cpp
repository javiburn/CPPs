/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:59:26 by jsarabia          #+#    #+#             */
/*   Updated: 2023/11/27 17:46:48 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap	jese("jesé");
	ClapTrap	carmelo("carmelo");

	jese.attack("alaparic");
	carmelo.attack("jsarabia");
	jese.beRepaired(1);
	jese.highFivesGuys();
	for (int i = 0; i < 300; i++)
		jese.attack("alaparic");
	jese.beRepaired(30);
	jese.attack("alaparic");
	return 0;
}
