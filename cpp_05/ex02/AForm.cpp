/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/23 17:24:23 by rbagin        #+#    #+#                 */
/*   Updated: 2026/04/30 14:00:00 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(const std::string& thisName, int thisGradeToSign, int thisGradeToExecute)
	: name(thisName), gradeToSign(thisGradeToSign), gradeToExecute(thisGradeToExecute)
{
	isSigned = false;
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
}

AForm::AForm()
	: name("default"), gradeToSign(150), gradeToExecute(150)
{
	std::cout << "AForm Default constructor called" << std::endl;
}

AForm::AForm(const AForm& other)
	: name(other.name), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
	std::cout << "AForm Copy constructor called" << std::endl;
	*this = other;
}

AForm& AForm::operator=(const AForm& rhs)
{
	std::cout << "AForm Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->isSigned = rhs.isSigned;
	}
	return (*this);
}

AForm::~AForm()
{
	std::cout << "AForm Destructor called" << std::endl;
}

const std::string&	AForm::getName() const
{
	return (this->name);
}

bool				AForm::getIsSigned() const
{
	return (this->isSigned);
}

int					AForm::getGradeS() const
{
	return (this->gradeToSign);
}

int					AForm::getGradeEx() const
{
	return (this->gradeToExecute);
}

void				AForm::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() <= gradeToSign)
		isSigned = true;
	else
		throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& out, const AForm& f)
{
	out << "Form " << f.getName() << ": signed=" << (f.getIsSigned() ? "yes" : "no")
		<< " , grade to sign=" << f.getGradeS() << ", grade to execute=" << f.getGradeEx();
	return (out);
}
