/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ravi-bagin <ravi-bagin@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/31 19:23:32 by ravi-bagin    #+#    #+#                 */
/*   Updated: 2026/04/23 17:22:27 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try {
		Bureaucrat middleManagment("Bob", 90);
		std::cout << middleManagment << "\n";
		middleManagment.decrementGrade();
		std::cout << middleManagment << "\n";
		middleManagment.incrementGrade();
		std::cout << middleManagment << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat theBoss("Steve", 1);
		std::cout << theBoss << "\n";
		theBoss.incrementGrade();
		std::cout << theBoss << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat janitor("Bob's brother", 150);
		std::cout << janitor << "\n";
		janitor.decrementGrade();
		std::cout << janitor << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat visitor("Ivan", 160);
		std::cout << visitor << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat theOwner("Constantin", 0);
		std::cout << theOwner << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
