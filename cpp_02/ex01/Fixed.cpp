/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/18 16:31:18 by rbagin        #+#    #+#                 */
/*   Updated: 2026/04/09 16:02:04 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int int_num)
{
	std::cout << "Int constructor called" << std::endl;
	this->rawBits = int_num * (1 << fractionalBits);
}

Fixed::Fixed(const float float_num)
{
	std::cout << "Float constructor called" << std::endl;
	this->rawBits = roundf(float_num * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->rawBits = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}

int Fixed::toInt(void) const
{
	return this->rawBits / (1 << fractionalBits);
}

float Fixed::toFloat(void) const
{
	return static_cast<float>(this->rawBits) / (1 << fractionalBits);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->rawBits);
}

void Fixed::setRawBits(int const raw)
{
	this->rawBits = raw;
}
