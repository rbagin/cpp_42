/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/26 15:14:14 by rbagin        #+#    #+#                 */
/*   Updated: 2026/04/10 14:01:36 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap " << name << " created" << std::endl;
}

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs)
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	if (this != &rhs)
		ClapTrap::operator=(rhs);
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " destroyed" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (this->energyPoints == 0 || this->hitPoints == 0)
	{
		std::cout << "Fragtrap " << this->name << " can't attack " << target <<
		", because it's dead or has no energy." << std::endl;
		return ;
	}
	std::cout << "Fragtrap " << this->name << " attacks " << target << ", causing "
		<< this->attackDamage << " points of damage!" << std::endl;
	this->energyPoints--;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << " wants high fives! Who's in?" << std::endl;
}
