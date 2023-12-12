/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:27:34 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/12 17:04:32 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
	private:
		const std::string	name;
		bool				is_signed;
		const int			req_sign;
		const int			req_exec;
		Form();
	public:
		Form(const std::string name, const int signature, const int exec);
		Form(const Form& form);
		Form& operator=(const Form& form);
		~Form(void);
		int					getSignatureGrade(void);
		int					getExecutionGrade(void);
		const std::string	getName(void);
		bool 				getSigned(void);
		void				beSigned(Bureaucrat& bur);
		class GradeTooHighException: public std::exception{
			public:
				const char* what() const throw();
		};
		class GradeTooLowException: public std::exception{
			public:
				const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& stream, Form& form);

#endif
