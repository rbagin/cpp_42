/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/11 16:34:00 by rbagin        #+#    #+#                 */
/*   Updated: 2026/03/11 16:34:01 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon {
private:
	std::string	_type;

public:
	Weapon(std::string type);
	~Weapon();

	const std::string&	getType() const;
	void				setType(std::string type);
};

#endif
