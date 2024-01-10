/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:07:55 by jsarabia          #+#    #+#             */
/*   Updated: 2024/01/10 15:46:17 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <list>
# include <vector>
# include <algorithm>

class PMergeMe{
	private:
		PMergeMe();
		PMergeMe(const PMergeMe& merge);
		PMergeMe& operator=(const PMergeMe& merge);
	public:
		~PMergeMe(void);
		static void	magicMerger(std::vector<int> myvector);
		static void	printBeforeVector(std::vector<int> myvector);
};

#endif
