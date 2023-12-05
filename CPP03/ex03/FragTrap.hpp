/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:18:38 by jsarabia          #+#    #+#             */
/*   Updated: 2023/11/27 17:36:32 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iomanip>
# include <iostream>
# include "ScavTrap.hpp"

class FragTrap: public ClapTrap
{
private:
	FragTrap(void);
public:
	FragTrap(std::string name);
	~FragTrap();
	void	highFivesGuys(void);
};


#endif
