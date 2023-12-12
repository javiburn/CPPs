/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:24:31 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/12 18:20:54 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{
	private:
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
};

std::ostream& operator<<(std::ostream& stream, AForm& form);

#endif
