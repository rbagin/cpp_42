/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/30 14:01:15 by rbagin        #+#    #+#                 */
/*   Updated: 2026/05/01 12:48:43 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& thisTarget) : AForm("PresidentialPardonForm", 25, 5), target(thisTarget)
{
	std::cout << "PresidentialPardonForm parametarized constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm(other)
{
	std::cout << "PresidentialPardonForm Copy constructor called" << std::endl;
	*this = other;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs)
{
	std::cout << "PresidentialPardonForm Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		AForm::operator=(rhs);
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}

void PresidentialPardonForm::action() const
{
	std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
