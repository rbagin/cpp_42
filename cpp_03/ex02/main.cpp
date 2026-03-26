/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/23 16:13:00 by rbagin        #+#    #+#                 */
/*   Updated: 2026/03/26 15:27:23 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap test("Test");
	test.attack("Bob");
	test.highFivesGuys();
	test.takeDamage(50);
	std::cout << "Test has " << test.getHitPoints() << " hitpoints" << std::endl;
	return 0;
}
