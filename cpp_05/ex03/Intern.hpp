/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/01 14:00:00 by rbagin        #+#    #+#                 */
/*   Updated: 2026/05/01 15:53:36 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "AForm.hpp"

class Intern {
private:
	

public:
	Intern();
	Intern(const Intern& other);
	Intern& operator=(const Intern& rhs);
	~Intern();
	AForm*	makeForm(const std::string& formName, const std::string& target) const;
};

#endif

