/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:58:58 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/19 15:02:13 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(){
	Data *pepe = new Data(56);
	uintptr_t addr = Serializer::serialize(pepe);
	std::cout << "serialize:   " << addr << std::endl;
	std::cout << "address1:    " << pepe << std::endl;
	Data *data = Serializer::deserialize(addr);
	std::cout << "deserialize: " << reinterpret_cast<uintptr_t>(data) << std::endl;
	std::cout << "address2:    " << data << std::endl;
	return 0;
}
