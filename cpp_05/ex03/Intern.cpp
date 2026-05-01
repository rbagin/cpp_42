/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/01 14:00:00 by rbagin        #+#    #+#                 */
/*   Updated: 2026/05/01 15:57:06 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern()
{
	std::cout << "Intern Default constructor called" << std::endl;
}

Intern::Intern(const Intern& other)
{
	std::cout << "Intern Copy constructor called" << std::endl;
	*this = other;
}

Intern& Intern::operator=(const Intern& rhs)
{
	std::cout << "Intern Copy assignment operator called" << std::endl;
	(void)rhs;
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Intern Destructor called" << std::endl;
}

static AForm* makeShrubbery(const std::string& target)
{
	return new ShrubberyCreationForm(target);
}

static AForm* makeRobotomy(const std::string& target)
{
	return new RobotomyRequestForm(target);
}

static AForm* makePresidential(const std::string& target)
{
	return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(const std::string& formName, const std::string& target) const
{
	const std::string formNames[3] = { "shrubbery creation", "robotomy request", "presidential pardon" };
	AForm* (*factories[3])(const std::string&) = { &makeShrubbery, &makeRobotomy, &makePresidential };

	for (int i = 0; i < 3; i++)
	{
		if (formName == formNames[i])
		{
			std::cout << "Intern creates " << formName << std::endl;
			return factories[i](target);
		}
	}
	std::cerr << "Form " << formName << " does not exist." << std::endl;
	return nullptr;
}
