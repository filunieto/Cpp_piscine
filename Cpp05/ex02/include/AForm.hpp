/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 21:18:33 by fnieves-          #+#    #+#             */
/*   Updated: 2023/05/23 21:22:38 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>

class AForm
{
	private:
		const std::string _name;
		bool _signed;
		const int _gradeSignature;
		const int _gradeExecution;
		void gradeChecker() const;

	public:
		AForm(/* args */);
		~AForm();
};

AForm::AForm(/* args */)
{
}

AForm::~AForm()
{
}

#endif