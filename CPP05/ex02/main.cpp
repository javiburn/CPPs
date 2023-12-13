/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:04:00 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/13 17:38:13 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	Shrubbery pepe("home");
	Robotomy hey("hey");
	Bureaucrat jose = Bureaucrat("José", 1);
	std::cout << jose << std::endl;
	pepe.beSigned(jose);
	jose.signForm(pepe);
	hey.beSigned(jose);
	jose.signForm(hey);
	hey.execute(jose);
	std::cout << pepe << std::endl;
	return 0;
}
