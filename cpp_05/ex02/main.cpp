/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/23 17:22:01 by rbagin        #+#    #+#                 */
/*   Updated: 2026/05/01 14:00:00 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	Bureaucrat	boss("Boss", 1);
	Bureaucrat	janitor("Janitor", 150);

	//execute unsigned form
	{
		RobotomyRequestForm	form("Bender");
		boss.executeForm(form);
	}
	//sign with a bureaucrat whose grade is too low
	{
		RobotomyRequestForm	form("C3PO");
		janitor.signForm(form);
	}
	//sign successfully, then execute with bureaucrat whose grade is too low
	{
		RobotomyRequestForm	form("R2D2");
		boss.signForm(form);
		janitor.executeForm(form);
	}
	//sign and execute successfully
	{
		RobotomyRequestForm	form("Marvin");
		boss.signForm(form);
		boss.executeForm(form);
	}

	//execute unsigned form
	{
		PresidentialPardonForm	form("Arthur");
		boss.executeForm(form);
	}
	//sign with a bureaucrat whose grade is too low
	{
		PresidentialPardonForm	form("Ford");
		janitor.signForm(form);
	}
	//sign successfully, then execute with bureaucrat whose grade is too low
	{
		PresidentialPardonForm	form("Trillian");
		boss.signForm(form);
		janitor.executeForm(form);
	}
	//sign and execute successfully
	{
		PresidentialPardonForm	form("Slartibartfast");
		boss.signForm(form);
		boss.executeForm(form);
	}

	//execute unsigned form
	{
		ShrubberyCreationForm	form("house");
		boss.executeForm(form);
	}
	//sign with a bureaucrat whose grade is too low
	{
		ShrubberyCreationForm	form("garden");
		janitor.signForm(form);
	}
	//sign successfully, then execute with bureaucrat whose grade is too low
	{
		ShrubberyCreationForm	form("park");
		boss.signForm(form);
		janitor.executeForm(form);
	}
	//sign and execute successfully
	{
		ShrubberyCreationForm	form("yard");
		boss.signForm(form);
		boss.executeForm(form);
	}

	//polymorphism test
	{
		AForm*	forms[3];
		forms[0] = new ShrubberyCreationForm("backyard");
		forms[1] = new RobotomyRequestForm("HAL9000");
		forms[2] = new PresidentialPardonForm("Zaphod");
		for (int i = 0; i < 3; i++)
		{
			boss.signForm(*forms[i]);
			boss.executeForm(*forms[i]);
			delete forms[i];
		}
	}

	return 0;
}
