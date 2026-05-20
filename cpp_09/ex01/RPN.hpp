/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RPN.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/20 15:25:37 by rbagin        #+#    #+#                 */
/*   Updated: 2026/05/20 18:54:13 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stdexcept>
# include <sstream>
# include <cctype>
# include <stack>

class RPN {
public:
	RPN() = delete;
	RPN(const RPN& other) = delete;
	RPN& operator=(const RPN& rhs) = delete;
	~RPN() = delete;
	static int solve(std::string const& expression);
};

#endif

