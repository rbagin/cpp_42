/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/26 15:14:46 by rbagin        #+#    #+#                 */
/*   Updated: 2026/04/10 14:01:14 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(std::string name);
	FragTrap();
	FragTrap(const FragTrap& other);
	FragTrap& operator=(const FragTrap& rhs);
	~FragTrap();
	void attack(const std::string& target);
	void highFivesGuys(void);
};

#endif
