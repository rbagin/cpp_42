/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.tpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/11 16:12:27 by rbagin        #+#    #+#                 */
/*   Updated: 2026/05/13 16:56:33 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array()
	: data(NULL), sizeN(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n)
	: data(new T[n]()), sizeN(n)
{
}

template <typename T>
Array<T>::Array(const Array& other)
	: data(new T[other.sizeN]()), sizeN(other.sizeN)
{
	for (unsigned int i = 0; i < sizeN; i++)
		data[i] = other.data[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& rhs)
{
	if (this != &rhs)
	{
		delete[] data;
		sizeN = rhs.sizeN;
		data = new T[sizeN]();
		for (unsigned int i = 0; i < sizeN; i++)
			data[i] = rhs.data[i];
	}
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	delete[] data;
}

template <typename T>
T&	Array<T>::operator[](unsigned int i)
{
	if (i >= sizeN)
		throw OutOfBoundsException();
	return data[i];
}

template <typename T>
const T&	Array<T>::operator[](unsigned int i) const
{
	if (i >= sizeN)
		throw OutOfBoundsException();
	return data[i];
}

template <typename T>
unsigned int Array<T>::size() const
{
	return sizeN;
}
