/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 22:11:04 by fnieves-          #+#    #+#             */
/*   Updated: 2023/04/25 13:59:33 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal 
{
	protected:

	public:
		Cat();
		Cat(const std::string &name);
		Cat(const Cat &copy);
		~Cat();

		Cat &operator=(const Cat &rhs);
		void makeSound() const;
		void	printClass() const;
		void setIdea(unsigned int indexIdea, const unsigned int idea);
		const unsigned int & getIdea(unsigned int indexIdea) const ;

	
		
	private:
		Brain	*_brain;
		
};

#endif

