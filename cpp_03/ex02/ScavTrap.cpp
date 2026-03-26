/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/23 18:35:41 by rbagin        #+#    #+#                 */
/*   Updated: 2026/03/26 15:28:41 by rbagin        ########   odam.nl         */
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
