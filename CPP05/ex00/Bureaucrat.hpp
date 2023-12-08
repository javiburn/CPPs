/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:05:31 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/08 19:23:36 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>

class Bureaucrat{
	private:
		const std::string	name;
		int					grade;
		Bureaucrat();
	public:
		Bureaucrat(const std::string name, int grade);
		~Bureaucrat();
		int	getGrade(void);
		void	incrementGrade(int num);
		void	decrementGrade(int num);
		std::string	getName(void);
		int	GradeTooHighException(void);
		int	GradeTooLowException(void);
};

#endif
