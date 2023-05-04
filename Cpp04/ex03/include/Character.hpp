/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 20:49:41 by fnieves-          #+#    #+#             */
/*   Updated: 2023/05/04 15:07:56 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"



class Character : public ICharacter
{
private:
	std::string _name;
	AMateria *inventory[4];  //check name inventory
public:
	Character();
	Character(const std::string &name);
	Character(const Character &copy);
	~Character();

	Character & operator=(Character const &rhs);
	std::string const & getName() const;

	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target); //implmentar
	
};


#endif