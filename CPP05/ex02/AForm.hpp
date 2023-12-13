/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:24:31 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/13 16:11:02 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{
	private:
		const std::string	name;
		const std::string	target;
		bool				is_signed;
		const int			req_sign;
		const int			req_exec;
	public:
		AForm(void);
		AForm(const std::string target);
		AForm(const AForm& form);
		AForm& operator=(const AForm& form);
		virtual ~AForm(void);
		virtual bool		getSigned(void) = 0;
		virtual std::string	getName(void) const = 0;
		virtual int			getSignatureGrade(void) const = 0;
		virtual int			getExecutionGrade(void) const = 0;
		virtual void		beSigned(Bureaucrat& bur) = 0;
		virtual void		execute(Bureaucrat const & executor) const = 0;
};

#endif
