/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 21:18:43 by fnieves-          #+#    #+#             */
/*   Updated: 2023/05/25 00:58:16 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP


#include "AForm.hpp"
/*
  ShrubberyCreationForm: Required grades: sign 145, exec 137
  Create a file <target>_shrubbery in the working directory, 
  and writes ASCII trees inside it.
*/
class ShrubberyCreationForm: public AForm
{
private:
	std::string _target;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &copy);
	ShrubberyCreationForm(const std::string &target);
	~ShrubberyCreationForm();

	ShrubberyCreationForm & operator=(const ShrubberyCreationForm &copy);
	void setTarget(const std::string &target);
	const std::string getTarget() const;

	void execute(const Bureaucrat &executor) const;
};

ShrubberyCreationForm::ShrubberyCreationForm(/* args */)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


#endif