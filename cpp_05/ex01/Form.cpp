/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/23 17:24:23 by rbagin        #+#    #+#                 */
/*   Updated: 2026/04/26 17:13:08 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string& thisName, int thisGradeToSign, int thisGradeToExecute)
	: name(thisName), gradeToSign(thisGradeToSign), gradeToExecute(thisGradeToExecute)
{
	isSigned = false;
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
}

Form::Form()
	: name("default"), gradeToSign(150), gradeToExecute(150)
{
	std::cout << "Form Default constructor called" << std::endl;
}

Form::Form(const Form& other)
	: name(other.name), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
	std::cout << "Form Copy constructor called" << std::endl;
	*this = other;
}

Form& Form::operator=(const Form& rhs)
{
	std::cout << "Form Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->isSigned = rhs.isSigned;
	}
	return (*this);
}

Form::~Form()
{
	std::cout << "Form Destructor called" << std::endl;
}

const std::string&	Form::getName() const
{
	return (this->name);
}

bool				Form::getIsSigned() const
{
	return (this->isSigned);
}

int					Form::getGradeS() const
{
	return (this->gradeToSign);
}

int					Form::getGradeEx() const
{
	return (this->gradeToExecute);
}

void				Form::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() <= gradeToSign)
		isSigned = true;
	else
		throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& out, const Form& f)
{
	out << f.getName() << "" << f.getIsSigned() << ".";
	return (out);
}
