/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/23 17:24:26 by rbagin        #+#    #+#                 */
/*   Updated: 2026/04/23 21:37:03 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Form {
private:
	const std::string	name;
	bool				signed;
	const int			GradeS;
	const int			GradeEx;


public:
	class GradeTooHighException : public std::exception
	{
		public:
			const char* what() const throw() { return "Grade too high(max 1)!";}

	};
	class GradeTooLowException : public std::exception
	{
		public:
			const char* what() const throw() { return "Grade too low(min 150)!";}
	};
	Form();
	Form(const Form& other);
	Form& operator=(const Form& rhs);
	~Form();
	const std::string&	getName() const;
	int					getGradeS() const;
	int					getGradeEx() const;
	void				beSigned(const Bureaucrat& b);
};

std::ostream& operator<<(std::ostream& out, const Form& f);

#endif

