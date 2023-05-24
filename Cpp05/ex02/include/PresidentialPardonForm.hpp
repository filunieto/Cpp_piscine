/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 21:18:38 by fnieves-          #+#    #+#             */
/*   Updated: 2023/05/25 00:56:20 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP


#include "AForm.hpp"
//PresidentialPardonForm: Required grades: sign 25, exec 5

class PresidentialPardonForm: public AForm
{
private:
	std::string _target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &copy);
	PresidentialPardonForm(const std::string &target);
	~PresidentialPardonForm();

	PresidentialPardonForm & operator=(const PresidentialPardonForm &copy);
	void setTarget(const std::string &target);
	const std::string getTarget() const;

	void execute(const Bureaucrat &executor) const;
};

PresidentialPardonForm::PresidentialPardonForm(/* args */)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}


#endif
