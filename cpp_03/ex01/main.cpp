/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/23 16:13:00 by rbagin        #+#    #+#                 */
/*   Updated: 2026/03/23 17:58:41 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap test("test");
	test.attack("Bob");
	test.takeDamage(5);
	std::cout << "Test has " << test.getHitPoints() << " hitpoints" << std::endl;
	test.beRepaired(5);
	std::cout << "Test has " << test.getHitPoints() << " hitpoints" << std::endl;
	test.takeDamage(11);
	std::cout << "Test has " << test.getHitPoints() << " hitpoints" << std::endl;
	test.attack("Bob");
	test.beRepaired(10);
	return 0;
}
