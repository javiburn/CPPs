/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:19:27 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/13 17:25:43 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <unistd.h>
# include <time.h>

class Robotomy: public AForm{
	private:
		const std::string	name;
		const std::string	target;
		bool				is_signed;
		const int			req_sign;
		const int			req_exec;
		Robotomy(void);
	public:
		Robotomy(const std::string target);
		Robotomy(const Robotomy &robot);
		Robotomy& operator=(const Robotomy& robot);
		~Robotomy(void);
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

std::ostream& operator<<(std::ostream& stream, Robotomy& robot);

#endif
