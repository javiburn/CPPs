/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:59:15 by jsarabia          #+#    #+#             */
/*   Updated: 2023/12/18 16:32:20 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iomanip>
# include <iostream>

class Data{
	private:
		const int id;
		uintptr_t addr;
		Data(void);
		Data& operator=(const Data& data);
	public:
		Data(int id);
		Data(const Data& data);
		~Data(void);
		int			getId(void) const;
		uintptr_t	getAddress(void) const;
		void		setAddress(uintptr_t ptr);
};

#endif
