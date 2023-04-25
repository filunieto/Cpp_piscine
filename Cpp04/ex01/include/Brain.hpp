/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 00:54:32 by fnieves-          #+#    #+#             */
/*   Updated: 2023/04/25 13:22:53 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#define MAX_IDEA 100


class Brain
{
private:
	std::string _BrainAnimal;
	unsigned int _idea[MAX_IDEA];
public:
	Brain();
	Brain(const std::string & BrainAnimal);
	Brain(const Brain &copy);
	~Brain();

	Brain &operator=(const Brain &rhs);
	void setBrain(const std::string &nameBrain);
	const std::string & getBrain();
	void setIdea(unsigned int indexIdea, const unsigned int idea);
	const unsigned int & getIdea(unsigned int indexIdea) const ;
};



#endif

