/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/30 14:00:00 by rbagin        #+#    #+#                 */
/*   Updated: 2026/05/01 12:35:12 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm : public AForm {
private:
	const std::string	target;

public:
	RobotomyRequestForm(const std::string& thisTarget);
	RobotomyRequestForm(const RobotomyRequestForm& other);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& rhs);
	virtual ~RobotomyRequestForm();
protected:
	void action() const;
};

#endif
