/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RPN.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/20 17:24:45 by rbagin        #+#    #+#                 */
/*   Updated: 2026/05/20 18:50:10 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int RPN::solve(std::string const& expression)
{
	std::string			token;
	std::istringstream	iss(expression);
	int					temp;
	int					result;
	std::stack<int>		s;
	while (iss >> token)
	{
		if (token.length() != 1)
			throw std::runtime_error("Invalid token!");
		if (std::isdigit(static_cast<unsigned char>(token[0])))
		{
			temp = token[0] - '0';
			s.push(temp);
		}
		else if (token[0] == '+' || token[0] == '-' || token[0] == '*' || token[0] == '/')
		{
			if (s.size() < 2)
				throw std::runtime_error("Not enough numbers!");
			temp = s.top();
			s.pop();
			if (token[0] == '+')
			{
				result = s.top() + temp;
				s.pop();
				s.push(result);
			}
			else if (token[0] == '-')
			{
				result = s.top() - temp;
				s.pop();
				s.push(result);
			}
			else if (token[0] == '*')
			{
				result = s.top() * temp;
				s.pop();
				s.push(result);
			}
			else if (token[0] == '/')
			{
				if (temp == 0)
					throw std::runtime_error("Division by zero!");
				result = s.top() / temp;
				s.pop();
				s.push(result);
			}
		}
		else
			throw std::runtime_error("Incorrect token!");
	}
	if (s.size() != 1)
		throw std::runtime_error("Leftover values!");
	return s.top();
}
