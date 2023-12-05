/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:33:46 by jsarabia          #+#    #+#             */
/*   Updated: 2023/11/29 17:14:06 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria{
protected:
	std::string	type;
public:
	AMateria(void);
	AMateria(std::string const& type);
	AMateria(const AMateria& materia);
	AMateria& operator=(const AMateria& materia);
	~AMateria(void);
	std::string const& getType(void) const;

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
