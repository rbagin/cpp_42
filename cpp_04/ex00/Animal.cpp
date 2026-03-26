/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/26 15:38:14 by rbagin        #+#    #+#                 */
/*   Updated: 2026/03/26 17:33:35 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

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

Animal::~Animal()
{
	std::cout << "Animal of type: " << type << " destroyed" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << "*Animal noises*" << std::endl;
}

Dog::Dog() : Animal::Animal("Dog")
{
	std::cout << "Dog(type:" << type << ") was created" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog(type:" << type << ") was destroyed" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Bark!" << std::endl;
}

Cat::Cat() : Animal::Animal("Cat")
{
	std::cout << "Cat(type:" << type << ") was created" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat(type:" << type << ") was destroyed" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	if (type.empty())
	{
		std::cout << "WrongAnimal without a specified type created" << std::endl;
		return ;
	}
	this->type = type;
	std::cout << "WrongAnimal of type: " << type << " created" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal of type: " << type << " destroyed" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "*WrongAnimal noises*" << std::endl;
}

WrongCat::WrongCat() : WrongAnimal::WrongAnimal("WrongCat")
{
	std::cout << "WrongCat(type:" << type << ") was created" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat(type:" << type << ") was destroyed" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Bark!" << std::endl;
}
