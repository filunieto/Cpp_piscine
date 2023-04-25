/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:28:00 by fnieves-          #+#    #+#             */
/*   Updated: 2023/04/18 19:30:57 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal 
{
	protected:

	public:
		WrongCat();
		WrongCat(const std::string &name);
		WrongCat(const WrongCat &copy);
		~WrongCat();

		WrongCat &operator=(const WrongCat &rhs);
		void makeSound() const;
		
	private:
		
};

#endif


