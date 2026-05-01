/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ravi-bagin <ravi-bagin@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/31 19:23:25 by ravi-bagin    #+#    #+#                 */
/*   Updated: 2026/04/30 13:02:43 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(const std::string thisName, int thisGrade) : name(thisName), grade(thisGrade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
	std::cout << "Bureaucrat Copy constructor called" << std::endl;
	*this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs)
{
	std::cout << "Bureaucrat Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->grade = rhs.grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor called" << std::endl;
}


const std::string&	Bureaucrat::getName() const
{
	return (this->name);
}

int					Bureaucrat::getGrade() const
{
	return (this->grade);
}

void				Bureaucrat::incrementGrade()
{
	if (grade <= 1)
		throw GradeTooHighException();
	grade--;
}

void			Bureaucrat::decrementGrade()
{
	if (grade >= 150)
		throw GradeTooLowException();
	grade++;
}

void			Bureaucrat::signForm(AForm& f)
{
	try
	{
		f.beSigned(*this);
		std::cout << name << " signed " << f.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << name << " couldn't sign " << f.getName() <<
			" because " << e.what() << std::endl;
	}
}

void			Bureaucrat::executeForm(const AForm& f) const
{
	try
	{
		f.execute(*this);
		std::cout << name << " executed " << f.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << name << " couldn't execute " << f.getName() <<
			" because " << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& b)
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
	return (out);
}
