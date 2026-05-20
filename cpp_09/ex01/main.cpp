/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ravi-bagin <ravi-bagin@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/15 12:01:25 by ravi-bagin    #+#    #+#                 */
/*   Updated: 2026/05/20 18:49:32 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error" << std::endl;
		return 1;
	}
	int			result = 0;
	std::string expression = argv[1];
	try
	{
		result = RPN::solve(expression);
		std::cout << result << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error" << std::endl;
		return 1;
	}
	return 0;
}
