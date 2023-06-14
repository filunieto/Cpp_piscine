/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:57:38 by fnieves           #+#    #+#             */
/*   Updated: 2023/06/14 13:59:58 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP


#include "AForm.hpp" 
#include <iostream>

class AForm;

class Intern
{
	private:

	public:
		Intern ();
		~Intern ();
		Intern (const  Intern &copy);

		Intern & operator=(const Intern &copy);
};