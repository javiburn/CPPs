/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:33:46 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/06 18:27:59 by jsarabia         ###   ########.fr       */
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
	void setType(std::string type);
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
