/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ravi-bagin <ravi-bagin@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/10 10:46:49 by ravi-bagin    #+#    #+#                 */
/*   Updated: 2026/03/10 12:39:20 by ravi-bagin    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void) {
	std::cout << " Test 1: Basic Horde (5 zombies) " << std::endl;
	{
		Zombie*	horde = zombieHorde(5, "BasicZombie");
		for (int i = 0; i < 5; i++)
			horde[i].announce();
		delete[] horde;
	}

	std::cout << "\n Test 2: Single Zombie " << std::endl;
	{
		Zombie*	single = zombieHorde(1, "Loner");
		single[0].announce();
		delete[] single;
	}

	std::cout << "\n Test 3: Large Horde (10 zombies) " << std::endl;
	{
		Zombie*	large = zombieHorde(10, "ArmyZombie");
		for (int i = 0; i < 10; i++)
			large[i].announce();
		delete[] large;
	}

	std::cout << "\n Test 4: Multiple Independent Hordes " << std::endl;
	{
		Zombie*	horde1 = zombieHorde(3, "Team1");
		Zombie*	horde2 = zombieHorde(3, "Team2");

		std::cout << "Horde 1:" << std::endl;
		for (int i = 0; i < 3; i++)
			horde1[i].announce();

		std::cout << "Horde 2:" << std::endl;
		for (int i = 0; i < 3; i++)
			horde2[i].announce();

		delete[] horde1;
		delete[] horde2;
	}

	std::cout << "\n Test 5: Empty String Name " << std::endl;
	{
		Zombie*	horde = zombieHorde(2, "");
		for (int i = 0; i < 2; i++)
			horde[i].announce();
		delete[] horde;
	}

	return (0);
}
