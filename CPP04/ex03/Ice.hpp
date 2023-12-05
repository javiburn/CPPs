/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:42:42 by jsarabia          #+#    #+#             */
/*   Updated: 2023/11/29 17:17:37 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice: public AMateria{
	private:
	public:
		Ice(void);
		Ice(std::string const& type);
		Ice(const Ice& ice);
		Ice& operator=(const Ice& ice);
		~Ice(void);
		void	use(ICharacter& ichar);
		Ice*	clone(void) const;
};

#endif
