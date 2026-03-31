/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/26 15:38:14 by rbagin        #+#    #+#                 */
/*   Updated: 2026/03/31 19:15:12 by ravi-bagin    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(std::string type)
{
	if (type.empty())
	{
		std::cout << "Animal without a specified type created" << std::endl;
		return ;
	}
	this->type = type;
	std::cout << "Animal of type: " << type << " created" << std::endl;
}
Animal::Animal(const Animal& other)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = other;
}

Animal& Animal::operator=(const Animal& rhs)
{
	std::cout << "Animal Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal of type: " << type << " destroyed" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}
