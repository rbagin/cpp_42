/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/26 15:38:12 by rbagin        #+#    #+#                 */
/*   Updated: 2026/03/26 17:32:33 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {
protected:
	std::string type;
public:
	Animal(std::string type);
	~Animal();
	std::string getType() const;
	virtual void makeSound() const;
};

class Dog : public Animal {
public:
	Dog();
	~Dog();
	void makeSound() const override;
};

class Cat : public Animal {
public:
	Cat();
	~Cat();
	void makeSound() const override;
};

class WrongAnimal {
protected:
	std::string type;
public:
	WrongAnimal(std::string type);
	~WrongAnimal();
	std::string getType() const;
	virtual void makeSound() const;
};

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	~WrongCat();
	void makeSound() const override;
};

#endif
