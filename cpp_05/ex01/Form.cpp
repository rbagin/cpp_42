/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/23 17:24:23 by rbagin        #+#    #+#                 */
/*   Updated: 2026/04/23 21:27:45 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
{
	std::cout << "Form Default constructor called" << std::endl;
}

Form::Form(const Form& other)
{
	std::cout << "Form Copy constructor called" << std::endl;
	*this = other;
}

Form& Form::operator=(const Form& rhs)
{
	std::cout << "Form Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		
	}
	return (*this);
}

Form::~Form()
{
	std::cout << "Form Destructor called" << std::endl;
}

