/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ravi-bagin <ravi-bagin@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/27 15:11:54 by ravi-bagin    #+#    #+#                 */
/*   Updated: 2026/03/31 14:30:56 by ravi-bagin    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(const Dog& other) : Animal::Animal(other)
{
	this->brain = new Brain();
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = other;
}

Dog& Dog::operator=(const Dog& rhs)
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
		*this->brain = *rhs.brain;
	}
	return (*this);
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog(type:" << type << ") was destroyed" << std::endl;
}

Dog::Dog() : Animal("Dog")
{
	this->brain = new Brain();
	std::cout << "Dog(type:" << type << ") was created" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Bark!" << std::endl;
}

Brain* Dog::getBrain() const
{
	return (this->brain);
}
