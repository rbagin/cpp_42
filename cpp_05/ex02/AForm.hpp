/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/23 17:24:26 by rbagin        #+#    #+#                 */
/*   Updated: 2026/04/30 14:00:00 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <exception>

class Bureaucrat;

class AForm {
private:
	const std::string	name;
	bool				isSigned;
	const int			gradeToSign;
	const int			gradeToExecute;

public:
	class GradeTooHighException : public std::exception
	{
		public:
			const char* what() const throw() { return "Grade too high!";}

	};
	class GradeTooLowException : public std::exception
	{
		public:
			const char* what() const throw() { return "Grade too low!";}
	};
	AForm(const std::string& thisName, int thisGradeToSign, int thisGradeToExecute);
	AForm();
	AForm(const AForm& other);
	AForm& operator=(const AForm& rhs);
	virtual ~AForm();
	const std::string&	getName() const;
	bool				getIsSigned() const;
	int					getGradeS() const;
	int					getGradeEx() const;
	void				beSigned(const Bureaucrat& b);
	virtual void		execute(const Bureaucrat& executor) const = 0;
};

std::ostream& operator<<(std::ostream& out, const AForm& f);

#endif
