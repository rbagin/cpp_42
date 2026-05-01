/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/23 17:22:01 by rbagin        #+#    #+#                 */
/*   Updated: 2026/05/01 16:27:36 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	Intern		someRandomIntern;
	Bureaucrat	boss("Boss", 1);

	AForm*	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	if (rrf)
	{
		boss.signForm(*rrf);
		boss.executeForm(*rrf);
		delete rrf;
	}
	AForm*	scf = someRandomIntern.makeForm("shrubbery creation", "Bob");
	if (scf)
	{
		boss.signForm(*scf);
		boss.executeForm(*scf);
		delete scf;
	}
	AForm*	ppf = someRandomIntern.makeForm("presidential pardon", "Paula");
	if (ppf)
	{
		boss.signForm(*ppf);
		boss.executeForm(*ppf);
		delete ppf;
	}
	//invalid form name test
	AForm*	bogus = someRandomIntern.makeForm("not a real form", "whatever");
	if (bogus)
	{
		boss.signForm(*bogus);
		boss.executeForm(*bogus);
		delete bogus;
	}
	return 0;
}
