/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ravi-bagin <ravi-bagin@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/10 09:28:53 by ravi-bagin    #+#    #+#                 */
/*   Updated: 2026/03/10 10:38:23 by ravi-bagin    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() {
	this->_contactCount = 0;
	this->_oldestIndex = 0;
}

PhoneBook::~PhoneBook() {
}

void	PhoneBook::addContact(void) {
	std::string input;

	std::cout << "Enter first name: ";
	std::getline(std::cin, input);
	if (std::cin.eof() || input.empty())
		return ;
	this->_contacts[this->_oldestIndex].setFirstName(input);

	std::cout << "Enter last name: ";
	std::getline(std::cin, input);
	if (std::cin.eof() || input.empty())
		return ;
	this->_contacts[this->_oldestIndex].setLastName(input);

	std::cout << "Enter nickname: ";
	std::getline(std::cin, input);
	if (std::cin.eof() || input.empty())
		return ;
	this->_contacts[this->_oldestIndex].setNickname(input);

	std::cout << "Enter phone number: ";
	std::getline(std::cin, input);
	if (std::cin.eof() || input.empty())
		return ;
	this->_contacts[this->_oldestIndex].setPhoneNumber(input);

	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, input);
	if (std::cin.eof() || input.empty())
		return ;
	this->_contacts[this->_oldestIndex].setDarkestSecret(input);

	std::cout << "Contact added successfully!" << std::endl;

	this->_oldestIndex = (this->_oldestIndex + 1) % 8;
	if (this->_contactCount < 8)
		this->_contactCount++;
}

std::string PhoneBook::_truncate(std::string str) const {
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	PhoneBook::_displayContact(int index) const {
	std::cout << std::endl;
	std::cout << "First Name: " << this->_contacts[index].getFirstName() << std::endl;
	std::cout << "Last Name: " << this->_contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << this->_contacts[index].getNickname() << std::endl;
	std::cout << "Phone number: " << this->_contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << this->_contacts[index].getDarkestSecret() << std::endl;
	std::cout << std::endl;
}

void	PhoneBook::_displayTable(void) const {
	std::cout << std::right << std::setw(10) << "Index" << "|";
	std::cout << std::right << std::setw(10) << "First Name" << "|";
	std::cout << std::right << std::setw(10) << "Last Name" << "|";
	std::cout << std::right << std::setw(10) << "Nickname" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	for (int i = 0; i < this->_contactCount; i++) {
		std::cout << std::right << std::setw(10) << i << "|";
		std::cout << std::right << std::setw(10) << this->_truncate(this->_contacts[i].getFirstName()) << "|";
		std::cout << std::right << std::setw(10) << this->_truncate(this->_contacts[i].getLastName()) << "|";
		std::cout << std::right << std::setw(10) << this->_truncate(this->_contacts[i].getNickname()) << std::endl;
	}
}

void	PhoneBook::searchContact(void) const {
	std::string	input;
	int			index;

	if (this->_contactCount == 0) {
		std::cout << "Phonebook is empty!" << std::endl;
		return ;
	}

	this->_displayTable();

	std::cout << "Enter index: ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		return ;

	if (input.length() == 1 && input[0] >= '0' && input[0] <= '7') {
		index = input[0] - '0';
		if (index < this->_contactCount)
			this->_displayContact(index);
		else
			std::cout << "Invalid index!" << std::endl;
	}
	else
		std::cout << "Invalid input!" << std::endl;
}
