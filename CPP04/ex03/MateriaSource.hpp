/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:30:04 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/06 16:45:24 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
	AMateria	(*slots[4]);
public:
	MateriaSource(void);
	MateriaSource(const MateriaSource& mat);
	MateriaSource&	operator=(const MateriaSource& mat);
	~MateriaSource(void);
	void	learnMateria(AMateria* mat);
	AMateria* createMateria(std::string const & type);
};

#endif
