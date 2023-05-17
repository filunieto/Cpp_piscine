/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 00:36:48 by fnieves           #+#    #+#             */
/*   Updated: 2023/05/18 00:43:02 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Form
{
private:
	const std::string _name;
	bool _signed;
	const int _gradeSignature;
	const int _gradeExecution;
public:
	Form();
	Form(const &std);
	~Form();
};




#endif
