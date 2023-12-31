/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:04:00 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/12 15:25:49 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat jose("José", 10);
	jose.incrementGrade(100);
	std::cout << jose << std::endl;
	jose.incrementGrade(9);
	std::cout << jose << std::endl;
	jose.decrementGrade(900);
	std::cout << jose << std::endl;
	Bureaucrat ramon("Ramón", 1000);
	Bureaucrat pepe(ramon);
	std::cout << ramon << std::endl;
	std::cout << pepe << std::endl;
	return 0;
}
