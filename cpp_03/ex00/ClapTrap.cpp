/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/23 16:13:44 by rbagin        #+#    #+#                 */
/*   Updated: 2026/04/10 13:39:48 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string trapName)
{
	this->name = trapName;
	std::cout << "ClapTrap " << trapName << " constructed" << std::endl;
}

ClapTrap::ClapTrap()
{
	std::cout << "Claptrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "Claptrap Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs)
{
	std::cout << "Claptrap Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->name = rhs.name;
		this->hitPoints = rhs.hitPoints;
		this->attackDamage = rhs.attackDamage;
		this->energyPoints = rhs.energyPoints;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " destroyed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energyPoints == 0 || this->hitPoints == 0)
	{
		std::cout << "Claptrap " << this->name << " can't attack " << target <<
		", because it's dead or has no energy." << std::endl;
		return ;
	}
	std::cout << "Claptrap " << this->name << " attacks " << target << ", causing "
		<< this->attackDamage << " points of damage!" << std::endl;
	this->energyPoints--;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "Claptrap " << this->name << " took " << amount
	<< " points of damage!" << std::endl;
	if (this->hitPoints < amount)
	{
		this->hitPoints = 0;
		return ;
	}
	this->hitPoints -= amount;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints == 0 || this->hitPoints == 0)
	{
		std::cout << "Claptrap " << this->name <<
		" can't be repaired, because it's dead or has no energy." << std::endl;
		return ;
	}
		std::cout << "Claptrap " << this->name << " was repaired and regained " << amount
	<< " hitpoints!" << std::endl;
	this->hitPoints += amount;
	this->energyPoints--;
}

int ClapTrap::getHitPoints(void) const
{
	return(this->hitPoints);
}
