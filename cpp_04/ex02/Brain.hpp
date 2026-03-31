/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ravi-bagin <ravi-bagin@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/31 14:30:38 by ravi-bagin    #+#    #+#                 */
/*   Updated: 2026/03/31 14:30:39 by ravi-bagin    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain {
public:
	std::string ideas[100];
	Brain();
	Brain(const Brain& other);
	Brain& operator=(const Brain& rhs);
	~Brain();
};

#endif

