/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ravi-bagin <ravi-bagin@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/27 15:20:30 by ravi-bagin    #+#    #+#                 */
/*   Updated: 2026/03/31 14:25:12 by ravi-bagin    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(const Cat& other) : Animal(other)
{
	this->brain = new Brain();
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = other;
}

Cat& Cat::operator=(const Cat& rhs)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
		*this->brain = *rhs.brain;

	}
	return (*this);
}

Cat::Cat() : Animal("Cat")
{
	this->brain = new Brain();
	std::cout << "Cat(type:" << type << ") was created" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat(type:" << type << ") was destroyed" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}

Brain* Cat::getBrain() const
{
	return (this->brain);
}

