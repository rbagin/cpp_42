/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ravi-bagin <ravi-bagin@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/10 12:01:42 by ravi-bagin    #+#    #+#                 */
/*   Updated: 2026/03/10 12:41:11 by ravi-bagin    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() : _name("") {
	std::cout << "Zombie created" << std::endl;
}

Zombie::Zombie(std::string name) : _name(name) {
	std::cout << this->_name << " created" << std::endl;
}

Zombie::~Zombie() {
	std::cout << this->_name << " destroyed" << std::endl;
}

void	Zombie::setName(std::string name) {
	this->_name = name;
}

void	Zombie::announce(void) const {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
