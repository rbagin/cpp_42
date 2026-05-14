/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ravi-bagin <ravi-bagin@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/14 13:35:35 by ravi-bagin    #+#    #+#                 */
/*   Updated: 2026/05/14 15:51:17 by ravi-bagin    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	//subject test
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span test(500);
	for (int i = 0; i < 200; i++)
		test.addNumber(i);
	std::vector<int> rangeOfNumbers;
	for (int i = 0; i < 300; i++)
		rangeOfNumbers.push_back(i * 3);
	test.addRange(rangeOfNumbers.begin(), rangeOfNumbers.end());
	return 0;
}
