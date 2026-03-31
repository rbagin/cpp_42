/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/26 15:38:17 by rbagin        #+#    #+#                 */
/*   Updated: 2026/03/31 14:48:57 by ravi-bagin    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define ARRAY_SIZE 10

int main(void)
{
	const Animal* dog1 = new Dog();
	const Animal* dog2 = new Dog();
	const Animal* i = new Cat();

	delete dog1;
	delete dog2;
	delete i;

	Animal*	animals[ARRAY_SIZE];
	for (int i = 0; i < ARRAY_SIZE / 2; i++)
		animals[i] = new Dog();
	for (int i = ARRAY_SIZE / 2; i < ARRAY_SIZE; i++)
		animals[i] = new Cat();

	for (int i = 0; i < ARRAY_SIZE; i++)
		delete animals[i];

	Dog original;
	original.getBrain()->ideas[0] = "original idea";
	Dog copy(original);
	original.getBrain()->ideas[0] = "changed idea";
	std::cout << "Original: " << original.getBrain()->ideas[0] << std::endl;
	std::cout << "Copy:     " << copy.getBrain()->ideas[0] << std::endl;

	Cat catOriginal;
	catOriginal.getBrain()->ideas[0] = "cat original idea";
	Cat catCopy(catOriginal);
	catOriginal.getBrain()->ideas[0] = "cat changed idea";
	std::cout << "Cat Original: " << catOriginal.getBrain()->ideas[0] << std::endl;
	std::cout << "Cat Copy:     " << catCopy.getBrain()->ideas[0] << std::endl;

	Dog assignDog;
	assignDog = original;
	original.getBrain()->ideas[0] = "after assign change";
	std::cout << "Assigned dog: " << assignDog.getBrain()->ideas[0] << std::endl;
	std::cout << "Original: " << original.getBrain()->ideas[0] << std::endl;
	return 0;
}
