/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ravi-bagin <ravi-bagin@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/14 11:39:49 by ravi-bagin    #+#    #+#                 */
/*   Updated: 2026/05/14 13:25:10 by ravi-bagin    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>

int	main(void)
{
	std::vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	try
	{
		std::cout << "Search for 2000: " << *(::easyfind(v, 2000)) << std::endl;
	}
	catch(const std::exception&)
	{
		std::cout << "not found" << std::endl;
	}
	try
	{
		std::cout << "Search for 20: " << *(::easyfind(v, 20)) << std::endl;
	}
	catch(const std::exception&)
	{
		std::cout << "not found" << std::endl;
	}
	std::list<int>	l;
	for (int i = 0; i < 10; i++)
		l.push_back(i);
	try
	{
		std::cout << "Search for 2000: " << *(::easyfind(l, 2000)) << std::endl;
	}
	catch(const std::exception&)
	{
		std::cout << "not found" << std::endl;
	}
	try
	{
		std::cout << "Search for 5: " << *(::easyfind(l, 5)) << std::endl;
	}
	catch(const std::exception&)
	{
		std::cout << "not found" << std::endl;
	}
	return 0;
}
