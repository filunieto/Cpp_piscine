/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 20:49:52 by fnieves-          #+#    #+#             */
/*   Updated: 2023/05/04 20:16:45 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"



MateriaSource::MateriaSource(): _name(), materias()
{
	std::cout << "Constructor default MateriaSource" << std::endl;
}



MateriaSource::~MateriaSource()
{
	int i = -1;
	while (++i < 4)
	{
		if (materias[i])
			delete materias[i];
	}
	std::cout << "Destructor default Materia" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	int i = -1;
	while (++i < 4)
	{
		if (materias[i])
		{
			_name[i] = copy.materias[i]->getType();
			materias[i]  = copy.materias[i]->clone();
		}
	}
	std::cout << "Constructor copy MateriaSource" << std::endl;
}

MateriaSource & MateriaSource::operator=(const MateriaSource & rhs)
{
	if (this != &rhs)
	{
		int i = -1;
		while (++i < 4)
		{

			if (materias[i])
			{
				delete materias[i];
			}
			if (rhs.materias[i])
			{
				materias[i]  = rhs.materias[i]->clone();
				_name[i] = rhs.materias[i]->getType();
			}
		}
		std::cout << "operator= MateriaSource" << std::endl;
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *materia)
{
	std::cout << "Materia::learnMateria" << std::endl;
	int i = -1;
	while (++i < 4)
	{
		if (materias[i])
		{
			materias[i] = materia;
			_name[i] = materia->getType();
			break;
		}
	}
}


AMateria *MateriaSource::createMateria(std::string const & type)
{
	int i = -1;
	while (++i < 4)
	{
		if (_name[i] == type)
		{
			return (materias[i]->clone());
		}
	}
	return (NULL);
}