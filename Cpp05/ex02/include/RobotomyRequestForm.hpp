/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 21:18:40 by fnieves-          #+#    #+#             */
/*   Updated: 2023/05/25 00:56:51 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP


#include "AForm.hpp"
/*
  RobotomyRequestForm: Required grades: sign 72, exec 45
  Makes some drilling noises.
  Then, informs that <target> has been robotomized successfully 50% of the time.
 Otherwise, informs that the robotomy failed.
*/
class RobotomyRequestForm: public AForm
{
private:
	std::string _target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &copy);
	RobotomyRequestForm(const std::string &target);
	~RobotomyRequestForm();

	RobotomyRequestForm & operator=(const RobotomyRequestForm &copy);
	void setTarget(const std::string &target);
	const std::string getTarget() const;

	void execute(const Bureaucrat &executor) const;
};

RobotomyRequestForm::RobotomyRequestForm(/* args */)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}


#endif