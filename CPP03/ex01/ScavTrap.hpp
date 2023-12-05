/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:41:56 by jsarabia          #+#    #+#             */
/*   Updated: 2023/11/27 17:01:00 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iomanip>
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	~ScavTrap(void);
	void	attack(const std::string& target);
	void	guardGate(void);
};

#endif
