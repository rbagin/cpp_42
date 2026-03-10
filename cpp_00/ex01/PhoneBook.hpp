/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ravi-bagin <ravi-bagin@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/10 09:23:09 by ravi-bagin    #+#    #+#                 */
/*   Updated: 2026/03/10 10:35:58 by ravi-bagin    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include "Contact.hpp"

class PhoneBook {
private:
	Contact	_contacts[8];
	int		_contactCount;
	int		_oldestIndex;

	std::string	_truncate(std::string str) const;
	void		_displayContact(int index) const;
	void		_displayTable(void) const;

public:
	PhoneBook();
	~PhoneBook();

	void	addContact(void);
	void	searchContact(void) const;
};

#endif
