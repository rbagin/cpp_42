/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/30 14:00:00 by rbagin        #+#    #+#                 */
/*   Updated: 2026/05/01 12:34:57 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(const std::string& thisTarget) : AForm("RobotomyRequestForm", 72, 45), target(thisTarget)
{
	std::cout << "RobotomyRequestForm parametarized constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other)
{
	std::cout << "RobotomyRequestForm Copy constructor called" << std::endl;
	*this = other;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs)
{
	std::cout << "RobotomyRequestForm Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		AForm::operator=(rhs);
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}

void RobotomyRequestForm::action() const
{
	std::cout << "* drilling noises * BZZZZZZZZ ZZZZZZ ZZZZZ" << std::endl;
	if (std::rand() % 2 == 0)
		std::cout << target << " has been robotomized successfully." << std::endl;
	else
		std::cout << "The robotomy of " << target << " failed." << std::endl;
}
