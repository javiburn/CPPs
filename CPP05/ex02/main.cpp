/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:04:00 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/13 17:18:14 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	Shrubbery pepe("home");
	Bureaucrat jose = Bureaucrat("José", 145);
	std::cout << jose << std::endl;
	pepe.beSigned(jose);
	jose.signForm(pepe);
	pepe.execute(jose);
	std::cout << pepe << std::endl;
	return 0;
}
