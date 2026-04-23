/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ravi-bagin <ravi-bagin@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/31 19:23:29 by ravi-bagin    #+#    #+#                 */
/*   Updated: 2026/04/18 15:15:03 by ravi-bagin    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

class Bureaucrat {
private:
	const std::string	name;
	int 				grade;

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
	Bureaucrat(const std::string thisName, int thisGrade);
	Bureaucrat();
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat& operator=(const Bureaucrat& rhs);
	~Bureaucrat();
	const std::string&	getName() const;
	int					getGrade() const;
	int					promote(int grade);
	int					demote(int grade);
};

#endif

