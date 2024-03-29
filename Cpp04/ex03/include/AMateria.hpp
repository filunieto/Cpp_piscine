/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 20:49:39 by fnieves-          #+#    #+#             */
/*   Updated: 2023/05/04 20:25:24 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"


class AMateria
{
	protected:
		std::string _type;
	public:
		AMateria();
		AMateria(const std::string  &type);
		AMateria(const AMateria &copy);
		virtual ~AMateria();

		AMateria & operator=(const AMateria & rhs);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
	private:
};



#endif