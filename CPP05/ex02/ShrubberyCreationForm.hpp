/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:34:20 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/12 18:17:51 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class Shrubbery: public AForm{
	private:
		const std::string	target;
		bool				is_signed;
		const int			req_sign;
		const int			req_exec;
	public:
		Shrubbery(const std::string target);
		Shrubbery(const Shrubbery &shrub);
		Shrubbery& operator=(const Shrubbery& shrub);
		~Shrubbery(void);
};

#endif
