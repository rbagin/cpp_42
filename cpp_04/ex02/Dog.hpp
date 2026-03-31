/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ravi-bagin <ravi-bagin@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/27 14:59:05 by ravi-bagin    #+#    #+#                 */
/*   Updated: 2026/03/31 14:14:37 by ravi-bagin    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
private:
	Brain* brain;
public:
	Dog();
	Dog(const Dog& other);
	Dog& operator=(const Dog& rhs);
	virtual ~Dog();
	void makeSound() const override;
	Brain* getBrain() const;
};

#endif

