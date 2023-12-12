/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:48:47 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/12 18:21:59 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void): target(""), req_sign(151), req_exec(151){
	return;
}

AForm::AForm(const std::string target): target(target), req_sign(151), req_exec(151){
	return;
}
