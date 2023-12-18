/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:00:32 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/18 18:56:30 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Execution.hpp"

int main()
{
	Base* base;

	base = Execution::generate();
	Execution::identify(base);
	Execution::identify(*base);
	return 0;
}
