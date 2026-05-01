/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/30 15:19:13 by rbagin        #+#    #+#                 */
/*   Updated: 2026/05/01 12:36:11 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& thisTarget) : AForm("ShrubberyCreationForm", 145, 137), target(thisTarget)
{
	std::cout << "ShrubberyCreationForm parametarized constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other)
{
	std::cout << "ShrubberyCreationForm Copy constructor called" << std::endl;
	*this = other;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs)
{
	std::cout << "ShrubberyCreationForm Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		AForm::operator=(rhs);
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}

void ShrubberyCreationForm::action() const
{
	std::ofstream file((target + "_shrubbery").c_str());
	if (!file.is_open())
	{
		std::cerr << "Could not open file for writing." << std::endl;
		return;
	}
	file << "      ###\n"
			"     #o###\n"
			"   #####o###\n"
			" #o#\\#|#/###\n"
			"  ###\\|/#o#\n"
			"   # }|{  #\n"
			"     }|{\n";
	file.close();
}
