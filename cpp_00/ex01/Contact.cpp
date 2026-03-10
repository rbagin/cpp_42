/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ravi-bagin <ravi-bagin@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/10 09:13:58 by ravi-bagin    #+#    #+#                 */
/*   Updated: 2026/03/10 09:22:29 by ravi-bagin    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
	this->_firstName = "";
	this->_lastName = "";
	this->_nickname = "";
	this->_phoneNumber = "";
	this->_darkestSecret = "";
}

Contact::~Contact() {
}

void	Contact::setFirstName(std::string name) {
	this->_firstName = name;
}

void	Contact::setLastName(std::string name) {
	this->_lastName = name;
}

void	Contact::setNickname(std::string name) {
	this->_nickname = name;
}

void	Contact::setPhoneNumber(std::string number) {
	this->_phoneNumber = number;
}

void	Contact::setDarkestSecret(std::string secret) {
	this->_darkestSecret = secret;
}

std::string	Contact::getFirstName(void) const {
	return (this->_firstName);
}

std::string	Contact::getLastName(void) const {
	return (this->_lastName);
}

std::string	Contact::getNickname(void) const {
	return (this->_nickname);
}

std::string	Contact::getPhoneNumber(void) const {
	return (this->_phoneNumber);
}

std::string	Contact::getDarkestSecret(void) const {
	return (this->_darkestSecret);
}
