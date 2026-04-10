/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/23 18:35:41 by rbagin        #+#    #+#                 */
/*   Updated: 2026/04/10 13:45:52 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "ScavTrap " << name << " constructed" << std::endl;
}

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	if (this != &rhs)
		ClapTrap::operator=(rhs);
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << " destroyed" << std::endl;
}

void ScavTrap::attack(const std:: string& target)
{
	if (this->energyPoints == 0 || this->hitPoints == 0)
	{
		std::cout << "Scavtrap " << this->name << " can't attack " << target <<
		", because it's dead or has no energy." << std::endl;
		return ;
	}
	std::cout << "Scavtrap " << this->name << " attacks " << target << ", causing "
		<< this->attackDamage << " points of damage!" << std::endl;
	this->energyPoints--;
}
void ScavTrap::guardGate()
{
	std::cout << "Scavtrap " << this->name << " is in Gate keeper mode now" << std::endl;
}
