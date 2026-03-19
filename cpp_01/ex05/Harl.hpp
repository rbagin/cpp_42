/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/18 13:48:35 by rbagin        #+#    #+#                 */
/*   Updated: 2026/03/18 14:11:54 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Harl {
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

public:
	Harl();
	~Harl();
	void	complain(std::string level);
};
