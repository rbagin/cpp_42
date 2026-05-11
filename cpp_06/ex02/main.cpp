/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/03 16:00:00 by rbagin        #+#    #+#                 */
/*   Updated: 2026/05/08 12:37:15 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>

/*	It randomly instantiates A, B, or C and returns the instance as a Base
	pointer. Feel free to use anything you like for the random choice
	implementation.*/
Base * generate(void)
{
	int r = std::rand() % 3;
	if (r == 0)
		return new A();
	if (r == 1)
		return new B();
	return new C();
}

void identify(Base* p)
{
	A* aDerived = dynamic_cast<A*>(p);
	if (aDerived != nullptr)
	{
		std::cout << "The type of object that is pointed to by p: A\n";
		return;
	}
	B* bDerived = dynamic_cast<B*>(p);
	if (bDerived != nullptr)
	{
		std::cout << "The type of object that is pointed to by p: B\n";
		return;
	}
	C* cDerived = dynamic_cast<C*>(p);
	if (cDerived != nullptr)
	{
		std::cout << "The type of object that is pointed to by p: C\n";
		return;
	}
}

void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "The type of object that is referenced by p: A\n";
	}
	catch(std::bad_cast&) {}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "The type of object that is referenced by p: B\n";
	}
	catch(std::bad_cast&) {}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "The type of object that is referenced by p: C\n";
	}
	catch(std::bad_cast&) {}
}

int	main(void)
{
	std::srand(std::time(NULL));
	for (int i = 0; i < 5; i++)
	{
		Base* obj = generate();
		std::cout << "--- iteration " << i << " ---" << std::endl;
		identify(obj);
		identify(*obj);
		delete obj;
	}
}
