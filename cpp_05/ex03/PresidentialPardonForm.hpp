/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/30 14:03:35 by rbagin        #+#    #+#                 */
/*   Updated: 2026/05/01 12:43:47 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm {
private:
	const std::string	target;

public:
	PresidentialPardonForm(const std::string& thisTarget);
	PresidentialPardonForm(const PresidentialPardonForm& other);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& rhs);
	virtual ~PresidentialPardonForm();
protected:
	void action() const;
};

#endif
