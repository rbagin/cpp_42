/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/18 16:31:20 by rbagin        #+#    #+#                 */
/*   Updated: 2026/03/23 16:09:25 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
private:
	int rawBits;
	static const int fractionalBits = 8;

public:
	Fixed();
	Fixed(const int int_num);
	Fixed(const float float_num);
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& rhs);
	~Fixed();

	float toFloat(void) const;
	int toInt(void) const;
	int getRawBits(void)	const;
	void setRawBits(int const raw);

	bool	operator<(const Fixed &other) const;
	bool	operator>(const Fixed &other) const;
	bool	operator<=(const Fixed &other) const;
	bool	operator>=(const Fixed &other) const;
	bool	operator==(const Fixed &other) const;
	bool	operator!=(const Fixed &other) const;
	Fixed	operator+(const Fixed &other) const;
	Fixed	operator-(const Fixed &other) const;
	Fixed	operator*(const Fixed &other) const;
	Fixed	operator/(const Fixed &other) const;
	Fixed&	operator++(void);
	Fixed	operator++(int);
	Fixed&	operator--(void);
	Fixed	operator--(int);
	static Fixed&	min(Fixed &a, Fixed &b);
	static const Fixed&	min(const Fixed &a, const Fixed &b);
	static Fixed&	max(Fixed &a, Fixed &b);
	static const Fixed&	max(const Fixed &a, const Fixed &b);
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif
