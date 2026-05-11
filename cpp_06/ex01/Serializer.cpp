/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Serializer.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/03 16:00:00 by rbagin        #+#    #+#                 */
/*   Updated: 2026/05/07 11:54:14 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
	std::cout << "Serializer Default constructor called" << std::endl;
}

Serializer::Serializer(const Serializer& other)
{
	std::cout << "Serializer Copy constructor called" << std::endl;
	*this = other;
}

Serializer& Serializer::operator=(const Serializer& rhs)
{
	std::cout << "Serializer Copy assignment operator called" << std::endl;
	(void)rhs;
	return (*this);
}

Serializer::~Serializer()
{
	std::cout << "Serializer Destructor called" << std::endl;
}

uintptr_t	Serializer::serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*	Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}
