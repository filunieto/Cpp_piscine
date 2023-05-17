/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 22:11:04 by fnieves-          #+#    #+#             */
/*   Updated: 2023/04/18 19:24:54 by fnieves-         ###   ########.fr       */
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
		
	private:
		
};

#endif

