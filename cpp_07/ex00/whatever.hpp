/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/08 16:00:00 by rbagin        #+#    #+#                 */
/*   Updated: 2026/05/11 12:41:52 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
T min(T a, T b)
{
	if (a < b)
		return a;
	return b;
}

template<typename T>
T max(T a, T b)
{
	if (a > b)
		return a;
	return b;
}

#endif
