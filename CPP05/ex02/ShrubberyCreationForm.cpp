/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:37:38 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/12 18:23:51 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

Shrubbery::Shrubbery(const std::string target): target(target), req_sign(145), req_exec(137){
	this->is_signed = false;
	return;
}

Shrubbery::Shrubbery(const Shrubbery &shrub): AForm(shrub.target){
	return;
}
		// Shrubbery& operator=(const Shrubbery& shrub);
		// ~Shrubbery(void);
