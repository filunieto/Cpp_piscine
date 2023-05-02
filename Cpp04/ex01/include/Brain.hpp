/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 00:54:32 by fnieves-          #+#    #+#             */
/*   Updated: 2023/05/02 12:26:48 by fnieves-         ###   ########.fr       */
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
	//Brain(const std::string & BrainAnimal);
	Brain(const Brain &copy);
	~Brain();

	Brain &operator=(const Brain &rhs);
	void setBrain(const std::string &nameBrain);
	const std::string & getBrain();
	void setIdea(unsigned int indexIdea, const unsigned int idea);
	const unsigned int & getIdea(unsigned int indexIdea) const ;
};



#endif

