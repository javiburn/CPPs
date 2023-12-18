/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:58:58 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/18 16:56:42 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(){
	Data *pepe = new Data(56);
	uintptr_t addr = Serializer::serialize(pepe);
	std::cout << "serialize:   " << addr << std::endl;
	Data *data = Serializer::deserialize(addr);
	std::cout << "deserialize: " << (uintptr_t)data << std::endl;
	return 0;
}
