/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/23 18:35:37 by rbagin        #+#    #+#                 */
/*   Updated: 2026/04/10 13:46:39 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	ScavTrap(std::string name);
	ScavTrap();
	ScavTrap(const ScavTrap& other);
	ScavTrap& operator=(const ScavTrap& rhs);
	~ScavTrap();
	void attack(const std:: string& target);
	void guardGate();
};

#endif
