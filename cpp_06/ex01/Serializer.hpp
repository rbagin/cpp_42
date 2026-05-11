/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Serializer.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/03 16:00:00 by rbagin        #+#    #+#                 */
/*   Updated: 2026/05/07 11:46:47 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <cstdint>
# include "Data.hpp"

class Serializer {
private:
	Serializer();
	Serializer(const Serializer& other);
	Serializer& operator=(const Serializer& rhs);
	~Serializer();
public:
	static uintptr_t	serialize(Data* ptr);
	static Data*		deserialize(uintptr_t raw);
};

#endif
