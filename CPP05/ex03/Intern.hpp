/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 18:03:25 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/14 13:04:01 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern{
	private:
		Intern(const Intern& intern);
		Intern& operator=(const Intern& intern);
	public:
		Intern(void);
		~Intern(void);
		AForm*	makeForm(std::string name, std::string target);
		AForm*	createShrubbery(std::string target);
		AForm*	createRobotomy(std::string target);
		AForm*	createPresident(std::string target);
};

#endif
