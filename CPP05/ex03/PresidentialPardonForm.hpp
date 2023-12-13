/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:49:37 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/13 17:50:28 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class President: public AForm{
	private:
		const std::string	name;
		const std::string	target;
		bool				is_signed;
		const int			req_sign;
		const int			req_exec;
		President(void);
	public:
		President(const std::string target);
		President(const President &president);
		President& operator=(const President& president);
		~President(void);
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

std::ostream& operator<<(std::ostream& stream, President& president);

#endif
