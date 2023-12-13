/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:04:00 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/13 18:53:17 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
	Intern someRandomIntern;
	AForm* rrf;
	Bureaucrat javi("Javi", 6);
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	rrf->beSigned(javi);
	rrf->execute(javi);
	rrf = someRandomIntern.makeForm("pepe request", "Bender");
	rrf = someRandomIntern.makeForm("presidential pardon", "Alex");
	rrf->beSigned(javi);
	rrf->execute(javi);
	return 0;
}
