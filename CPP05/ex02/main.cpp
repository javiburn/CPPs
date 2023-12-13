/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:04:00 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/13 17:54:31 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	Shrubbery pepe("home");
	Robotomy hey("hey");
	President han("Han Solo");
	Bureaucrat jose = Bureaucrat("José", 1);
	std::cout << jose << std::endl;
	pepe.beSigned(jose);
	jose.signForm(pepe);
	hey.beSigned(jose);
	jose.signForm(hey);
	hey.execute(jose);
	han.beSigned(jose);
	jose.signForm(han);
	han.execute(jose);
	std::cout << pepe << std::endl;
	return 0;
}
