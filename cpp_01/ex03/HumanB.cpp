/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/11 16:33:49 by rbagin        #+#    #+#                 */
/*   Updated: 2026/03/11 17:02:12 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(nullptr) {}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}

void HumanB::attack() const
{
	if (!_weapon)
	{
		std::cout << _name << " has no weapon!" << std::endl;
	}
	else
	{
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	}
}
