/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ravi-bagin <ravi-bagin@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/14 12:36:31 by ravi-bagin    #+#    #+#                 */
/*   Updated: 2026/05/14 12:55:36 by ravi-bagin    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <stdexcept>

template <typename T>
typename T::const_iterator easyfind(const T &arr, int target)
{
	typename T::const_iterator result = std::find(arr.begin(), arr.end(), target);
	if (result == arr.end())
		throw std::runtime_error("not found");
	return result;
};

#endif
