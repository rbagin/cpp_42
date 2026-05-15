/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ravi-bagin <ravi-bagin@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/15 12:02:01 by ravi-bagin    #+#    #+#                 */
/*   Updated: 2026/05/15 12:18:15 by ravi-bagin    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typename std::stack<T>::container_type::iterator begin()
	{
		return this->c.begin();
	}
	typename std::stack<T>::container_type::const_iterator begin() const
	{
		return this->c.begin();
	}
	typename std::stack<T>::container_type::iterator end()
	{
		return this->c.end();
	}
	typename std::stack<T>::container_type::const_iterator end() const
	{
		return this->c.end();
	}
};

#endif

