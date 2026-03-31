/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ravi-bagin <ravi-bagin@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/27 15:57:38 by ravi-bagin    #+#    #+#                 */
/*   Updated: 2026/03/31 13:06:05 by ravi-bagin    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal::WrongAnimal("WrongCat")
{
	std::cout << "WrongCat(type:" << type << ") was created" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
	*this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& rhs)
{
	std::cout << "WrongCat Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat(type:" << type << ") was destroyed" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Bark!" << std::endl;
}
