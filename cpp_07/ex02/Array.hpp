/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/08 16:00:00 by rbagin        #+#    #+#                 */
/*   Updated: 2026/05/13 16:38:53 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
template <typename T>
class Array {
private:
	T*				data;
	unsigned int	sizeN;

public:
	Array();
	Array(unsigned int n);
	Array(const Array& other);
	Array& operator=(const Array& rhs);
	~Array();
	T&	operator[](unsigned int i);
	const T&	operator[](unsigned int i) const;
	unsigned int size() const;

	class OutOfBoundsException : public std::exception
	{
	public:
		const char* what() const throw() { return "Array index out of bounds";}
	};
};

#include "Array.tpp"

#endif
