/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ravi-bagin <ravi-bagin@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/10 10:49:11 by ravi-bagin    #+#    #+#                 */
/*   Updated: 2026/03/10 12:31:29 by ravi-bagin    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie {
private:
	std::string _name;

public:
	Zombie();
	Zombie(std::string name);
	~Zombie();

	void	setName(std::string name);
	void	announce(void) const;
};

Zombie*	zombieHorde(int N, std::string name);

#endif
