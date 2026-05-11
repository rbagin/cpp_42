/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/08 16:00:00 by rbagin        #+#    #+#                 */
/*   Updated: 2026/05/11 14:26:01 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <cstddef>

template <typename T, typename F>
void iter(T* arr, size_t len, F f)
{
	for (size_t i = 0; i < len; i++)
		f(arr[i]);
}

#endif
