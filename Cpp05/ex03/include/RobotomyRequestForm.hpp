/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 21:18:40 by fnieves-          #+#    #+#             */
/*   Updated: 2023/06/14 12:25:44 by fnieves          ###   ########.fr       */
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

	void Executed(const Bureaucrat &executor) const;
};



#endif