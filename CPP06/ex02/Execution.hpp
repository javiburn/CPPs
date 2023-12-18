/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Execution.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:44:16 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/18 17:48:46 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXECUTION_HPP
# define EXECUTION_HPP


# include <iostream>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

class Execution{
	private:
		Execution(void);
		Execution(const Execution& exec);
		~Execution();
		Execution& operator=(const Execution& exec);
	public:
		static Base* generate(void);
		static void identify(Base* p);
};

Base* generate(void);

#endif
