/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:05:31 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/13 17:17:15 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <ostream>
# include <stdexcept>
# include <exception>
# include <fstream>
# include "AForm.hpp"

class Form;

class Bureaucrat{
	private:
		const std::string	name;
		int					grade;
		Bureaucrat();
	public:
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat& bur);
		Bureaucrat& operator=(const Bureaucrat& bur);
		~Bureaucrat();
		int			getGrade(void)const;
		void		incrementGrade(void);
		void		decrementGrade(void);
		void		incrementGrade(int num);
		void		decrementGrade(int num);
		std::string	getName(void) const;
		void		signForm(AForm& form);
		class GradeTooHighException: public std::exception{
			public:
				const char*	what() const throw();
		};
		class GradeTooLowException: public std::exception{
			public:
				const char*	what() const throw();
		};

};

std::ostream& operator<<(std::ostream& stream, const Bureaucrat &bur);

#endif
