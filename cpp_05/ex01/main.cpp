/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/23 17:22:01 by rbagin        #+#    #+#                 */
/*   Updated: 2026/04/30 13:51:09 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try {
		Bureaucrat	middleManagment("Bob", 90);
		Form		basicContract("Basic contract", 100, 150);
		middleManagment.signForm(basicContract);
		Form		middleManagerContract("A contract to be signed by a middle manager", 90, 90);
		middleManagment.signForm(middleManagerContract);
		Form		importantContract("Important contract", 30, 100);
		middleManagment.signForm(importantContract);
		std::cout << "Still printing after failed sign" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form	properForm("Proper form", 50, 80);
		std::cout << properForm << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form	a("a", 0, 50);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form	b("b", 20, 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form	c("c", 160, 50);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form	d("d", 50, 160);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
