/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/03 16:00:00 by rbagin        #+#    #+#                 */
/*   Updated: 2026/05/06 15:53:26 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "ScalarConverter Default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
	std::cout << "ScalarConverter Copy constructor called" << std::endl;
	*this = other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& rhs)
{
	std::cout << "ScalarConverter Copy assignment operator called" << std::endl;
	(void)rhs;
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "ScalarConverter Destructor called" << std::endl;
}

static bool isValidFloatOrDouble(const std::string& literal, bool expectF)
{
	size_t i = 0;
	if (literal[0] == '+' || literal[0] == '-')
		i = 1;
	if (i == literal.length())
		return false;
	bool hasDigit = false;
	bool hasDot = false;
	for (; i < literal.length(); i++)
	{
		if (literal[i] >= '0' && literal[i] <= '9')
			hasDigit = true;
		else if (literal[i] == '.')
		{
			if (hasDot)
				return false;
			hasDot = true;
		}
		else if (literal[i] == 'f' && expectF && i == literal.length() - 1)
			;
		else
			return false;
	}
	return hasDigit && hasDot;
}

static LiteralType detectType(const std::string& literal)
{
	if (literal.length() == 0)
		return (INVALID);
	if (literal == "nanf" || literal == "+inff" || literal == "-inff")
		return (PSEUDO_FLOAT);
	if (literal == "nan" || literal == "+inf" || literal == "-inf")
		return (PSEUDO_DOUBLE);
	if (literal.length() == 1)
	{
		if (literal[0] >= '0' && literal[0] <= '9')
			return (INT_TYPE);
		return (CHAR_TYPE);
	}
	if (literal.back() == 'f' && literal.find('.') != std::string::npos)
	{
		if (isValidFloatOrDouble(literal, true))
			return (FLOAT_TYPE);
		return (INVALID);
	}
	if (literal.find('.') != std::string::npos && literal.back() != 'f')
	{
		if (isValidFloatOrDouble(literal, false))
			return (DOUBLE_TYPE);
		return (INVALID);
	}
	size_t i = 0;
	if (literal[0] == '+' || literal[0] == '-')
		i = 1;
	if (i == literal.length())
		return (INVALID);
	for (; i < literal.length(); i++)
	{
		if (literal[i] < '0' || literal[i] > '9')
			return (INVALID);
	}
	return (INT_TYPE);
}

void ScalarConverter::convert(const std::string& literal)
{
	LiteralType	type = detectType(literal);
	if (type == INVALID)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return;
	}
	if (type == PSEUDO_FLOAT || type == PSEUDO_DOUBLE)
	{
		std::string base = literal;
		if (base.back() == 'f')
			base.pop_back();
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << base << "f" << std::endl;
		std::cout << "double: " << base << std::endl;
		return;
	}
	double value = 0.0;
	if (type == CHAR_TYPE)
		value = static_cast<double>(literal[0]);
	else
		value = std::strtod(literal.c_str(), NULL);
	if (std::isnan(value) || std::isinf(value) || value < 0 || value > 127)
		std::cout << "char: impossible" << std::endl;
	else if (!std::isprint(static_cast<int>(value)))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
	if (std::isnan(value) || std::isinf(value) || value < INT_MIN || value > INT_MAX)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(value) << std::endl;
	if (std::isfinite(value) && (value > std::numeric_limits<float>::max()
							|| value < -std::numeric_limits<float>::max()))
		std::cout << "float: impossible" << std::endl;
	else
	{
		float f = static_cast<float>(value);
		std::cout << "float: ";
		if (std::floor(f) == f && std::isfinite(f))
			std::cout << std::fixed << std::setprecision(1) << f << "f" << std::endl;
		else
			std::cout << f << "f" << std::endl;
	}
	std::cout << "double: ";
	if (std::floor(value) == value && std::isfinite(value))
		std::cout << std::fixed << std::setprecision(1) << value << std::endl;
	else
		std::cout << value << std::endl;
}
