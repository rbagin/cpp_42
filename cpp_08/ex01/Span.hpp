/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ravi-bagin <ravi-bagin@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/14 13:43:14 by ravi-bagin    #+#    #+#                 */
/*   Updated: 2026/05/14 15:50:53 by ravi-bagin    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <stdexcept>
# include <algorithm>
# include <climits>

class Span {
private:
	std::vector<int>	v;
	unsigned int		N;

public:
	Span();
	Span(unsigned int N);
	Span(const Span& other);
	Span& operator=(const Span& rhs);
	~Span();
	void	addNumber(int number);
	int	shortestSpan();
	int	longestSpan();
	template <typename Iterator>
	void	addRange(Iterator begin, Iterator end)
	{
		if ((v.size() + std::distance(begin, end)) > N)
			throw std::length_error("Range too big for Span!");
		v.insert(v.end(), begin, end);
	}
};

#endif

