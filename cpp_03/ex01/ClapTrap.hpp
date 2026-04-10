/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/23 16:14:02 by rbagin        #+#    #+#                 */
/*   Updated: 2026/04/10 13:40:20 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap {
protected:
	std::string		name;
	unsigned int	hitPoints = 10;
	unsigned int	energyPoints = 10;
	unsigned int	attackDamage = 0;
public:
	ClapTrap(std::string trapName);
	ClapTrap();
	ClapTrap(const ClapTrap& other);
	ClapTrap& operator=(const ClapTrap& rhs);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	int getHitPoints(void) const;
};

#endif
