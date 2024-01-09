/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:07:55 by jsarabia          #+#    #+#             */
/*   Updated: 2024/01/09 17:26:13 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <list>
# include <vector>

class PMergeMe{
	private:
		PMergeMe();
		PMergeMe(const PMergeMe& merge);
		PMergeMe& operator=(const PMergeMe& merge);
	public:
		~PMergeMe(void);
		static void	magicMerger(std::list<int> mylist);
		static void	printList(std::list<int> mylist);
};

#endif
