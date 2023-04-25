/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 22:11:06 by fnieves-          #+#    #+#             */
/*   Updated: 2023/04/25 13:59:52 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"


class Dog : public Animal 
{
	protected:

	public:
		Dog();
		Dog(const std::string &name);
		Dog(const Dog &copy);
		~Dog();

		Dog &operator=(const Dog &rhs);
		void makeSound() const;
		void	printClass() const;
		void setIdea(unsigned int indexIdea, const unsigned int idea);
		const unsigned int & getIdea(unsigned int indexIdea) const ;

		
	private:
		Brain *_brain;
};


#endif