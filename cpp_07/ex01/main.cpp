/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/08 16:00:00 by rbagin        #+#    #+#                 */
/*   Updated: 2026/05/11 14:30:00 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

// takes const input and prints it
void printInt(const int& x)
{
	std::cout << x << " ";
}

// doubles and makes non-const
void doubleIt(int& x)
{
	x *= 2;
}

void printString(const std::string& str)
{
	std::cout << str;
}

int main(void)
{
	int arr[] = {1, 2, 3, 4, 5};
	iter(arr, 5, printInt);
	std::cout << std::endl;
	iter(arr, 5, doubleIt);
	iter(arr, 5, printInt);
	std::cout << std::endl;

	std::string strs[] = {"hello", "world"};
	iter(strs, 2, printString);
	std::cout << std::endl;
	return 0;
}
