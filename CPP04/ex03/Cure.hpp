/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:44:00 by jsarabia          #+#    #+#             */
/*   Updated: 2023/11/29 17:17:31 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure: public AMateria{
	private:
	public:
		Cure(void);
		Cure(std::string const& type);
		Cure(const Cure& cure);
		Cure& operator=(const Cure& cure);
		~Cure(void);
		void	use(ICharacter& ichar);
		Cure*	clone(void) const;
};

#endif
