/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 00:54:32 by fnieves-          #+#    #+#             */
/*   Updated: 2023/04/21 15:09:00 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Idea.hpp"


class Brain
{
private:
	std::string _BrainAnimal;
	const Idea listIdeas[100];
public:
	Brain();
	Brain(const std::string & BrainAnimal);
	Brain(const Brain &copy);
	~Brain();

	Brain &operator=(const Brain &rhs);
	//int const & getNumber() const;
};



#endif

