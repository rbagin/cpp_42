/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ravi-bagin <ravi-bagin@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/27 15:07:07 by ravi-bagin    #+#    #+#                 */
/*   Updated: 2026/03/31 14:14:51 by ravi-bagin    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
private:
	Brain* brain;
public:
	Cat();
	Cat(const Cat& other);
	Cat& operator=(const Cat& rhs);
	virtual ~Cat();
	void makeSound() const override;
	Brain* getBrain() const;
};

#endif

