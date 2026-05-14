/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ravi-bagin <ravi-bagin@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/14 13:36:06 by ravi-bagin    #+#    #+#                 */
/*   Updated: 2026/05/14 15:52:57 by ravi-bagin    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : N(0)
{
	std::cout << "Span Default constructor called" << std::endl;
}

Span::Span(unsigned int thisN) : N(thisN)
{
	std::cout << "Span Parameterized constructor called" << std::endl;
}

Span::Span(const Span& other)
{
	std::cout << "Span Copy constructor called" << std::endl;
	*this = other;
}

Span& Span::operator=(const Span& rhs)
{
	std::cout << "Span Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		N = rhs.N;
		v = rhs.v;
	}
	return (*this);
}

Span::~Span()
{
	std::cout << "Span Destructor called" << std::endl;
}

void	Span::addNumber(int number)
{
	if (v.size() == N)
		throw std::length_error("Span is full");
	v.push_back(number);
}

int	Span::shortestSpan()
{
	if (v.size() < 2)
		throw std::length_error("Span doesn't have enough members!");
	std::sort(v.begin(), v.end());
	int	distance = 0;
	int shortestDistance = INT_MAX;
	for (size_t i = 0; i < (v.size() - 1); i++)
	{
		distance = v[i + 1] - v[i];
		if (distance == 0)
			return distance;
		if (distance < shortestDistance)
			shortestDistance = distance;
	}
	return shortestDistance;
}

int	Span::longestSpan()
{
	if (v.size() < 2)
		throw std::length_error("Span doesn't have enough members!");
	std::sort(v.begin(), v.end());
	return (v.back() - v.front());
}
