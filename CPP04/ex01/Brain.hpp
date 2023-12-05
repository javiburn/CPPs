/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:50:30 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/01 13:29:20 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "Animal.hpp"
# include <iostream>

class Brain{
private:
	std::string	ideas[100];
public:
	Brain(void);
	Brain(const Brain& brain);
	~Brain(void);
	Brain&		operator=(const Brain& brain);
	std::string	*getIdeas(void);
};

#endif
