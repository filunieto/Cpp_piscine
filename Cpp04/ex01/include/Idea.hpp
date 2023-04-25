/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Idea.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 00:56:52 by fnieves-          #+#    #+#             */
/*   Updated: 2023/04/21 14:44:04 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDEA_HPP
#define IDEA_HPP

#include "Animal.hpp"


class Idea
{
private:
	int _nbIdea;
public:
	Idea();
	Idea(const int &nbIdea);
	Idea(const Idea &copy);
	~Idea();

	Idea &operator=(const Idea &rhs);
	//int const & getNumber() const;
};



#endif