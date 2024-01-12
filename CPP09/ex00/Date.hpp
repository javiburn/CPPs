/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Date.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:05:39 by jsarabia          #+#    #+#             */
/*   Updated: 2024/01/12 16:12:59 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DATE_HPP
# define DATE_HPP


# include <list>

class Date{
	private:
		int 	day;
		int 	month;
		int 	year;
		bool	status;
		Date();
	public:
		Date(int day, int month, int year);
		Date(const Date& date);
		Date& operator=(const Date& date);
		~Date(void);
		int		getDay(void);
		int		getMonth(void);
		int		getYear(void);
		bool	getStatus(void);
		void	setStatus(bool status);
};

#endif
