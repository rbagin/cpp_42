/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/18 13:34:14 by rbagin        #+#    #+#                 */
/*   Updated: 2026/03/18 14:34:55 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main(void)
{
	Harl test1;
	std::cout << "TEST DEBUG:" << std::endl;
	test1.complain("DEBUG");
	std::cout << std::endl;
	Harl test2;
	std::cout << "TEST INFO:" << std::endl;
	test2.complain("INFO");
	std::cout << std::endl;
	Harl test3;
	std::cout << "TEST WARNING:" << std::endl;
	test3.complain("WARNING");
	std::cout << std::endl;
	Harl test4;
	std::cout << "TEST ERROR:" << std::endl;
	test4.complain("ERROR");
	std::cout << std::endl;
	Harl test5;
	std::cout << "TEST INCORRECT COMMAND:" << std::endl;
	test5.complain("BLAH");
}
