/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:34:20 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/13 17:28:02 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class Shrubbery: public AForm{
	private:
		const std::string	name;
		const std::string	target;
		bool				is_signed;
		const int			req_sign;
		const int			req_exec;
		Shrubbery(void);
	public:
		Shrubbery(const std::string target);
		Shrubbery(const Shrubbery &shrub);
		Shrubbery& operator=(const Shrubbery& shrub);
		~Shrubbery(void);
		bool		getSigned(void);
		std::string	getName(void) const;
		int			getSignatureGrade(void) const;
		int			getExecutionGrade(void) const;
		void		execute(Bureaucrat const & executor) const;
		void		beSigned(Bureaucrat& bur);
		class GradeTooHighException: public std::exception{
			public:
				const char* what() const throw();
		};
		class GradeTooLowException: public std::exception{
			public:
				const char* what() const throw();
		};
		class FormNotSigned: public std::exception{
			public:
				const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& stream, Shrubbery& shrub);

#endif
