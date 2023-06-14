/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 21:18:28 by fnieves-          #+#    #+#             */
/*   Updated: 2023/06/14 13:26:34 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RobotomyRequestForm.hpp"
#include "../include/AForm.hpp"


RobotomyRequestForm::RobotomyRequestForm()
: AForm("RobotomyRequestForm", 72, 45), _target("default_RobotomyRequestForm")
{
	std::cout << " Constructor default RobotomyRequestForm called " << std::endl;
	gradeChecker();
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << " Destructor default RobotomyRequestForm called " << std::endl;
}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) 
: AForm(copy.getName(), copy.getGradeSignature(), copy.getGradeExecution()) , _target (copy.getTarget())
{
	std::cout << " Constructor copy RobotomyRequestForm called " << std::endl;
	*this = copy;
	gradeChecker();
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
: AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << " Constructor with target , RobotomyRequestForm called " << std::endl;
	gradeChecker();
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	if (this != &copy)
		AForm::operator=(copy);
	std::cout << " RobotomyRequestForm::operator= called " << std::endl;
	return *this;
}

void RobotomyRequestForm::setTarget(const std::string &target)
{
	_target = target;
}

const std::string RobotomyRequestForm::getTarget() const
{
	return (_target);
}

// 
void RobotomyRequestForm::Executed(const Bureaucrat &executor) const
{
	if (executor.getGrade() > this->getGradeExecution())
		throw AForm::GradeMinimumException();
	if (!this->getSigned())
		throw AForm::UnsignedFormException();
	std::cout << "drilling, drilling, drilling, ... #$%&((^$!@@#$& and more drilling ..." << std::endl;
	if (std::rand() % 2)
		std::cout << _target << "has been robotomized successfull!" << std::endl;
	else
		std::cout << _target << "failed to be robotomized !" << std::endl;
}