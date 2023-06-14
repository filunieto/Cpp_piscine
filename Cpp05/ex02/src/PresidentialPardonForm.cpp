/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 21:18:25 by fnieves-          #+#    #+#             */
/*   Updated: 2023/06/14 13:26:03 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PresidentialPardonForm.hpp"
#include "../include/AForm.hpp"


PresidentialPardonForm::PresidentialPardonForm()
: AForm("PresidentialPardonForm", 25, 5), _target("default_PresidentialPardonForm")
{
	std::cout << " Constructor default PresidentialPardonForm called " << std::endl;
	gradeChecker();
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << " Destructor default PresidentialPardonForm called " << std::endl;
}


PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) 
: AForm(copy.getName(), copy.getGradeSignature(), copy.getGradeExecution()) , _target (copy.getTarget())
{
	std::cout << " Constructor copy PresidentialPardonForm called " << std::endl;
	*this = copy;
	gradeChecker();
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
: AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << " Constructor with target , PresidentialPardonForm called " << std::endl;
	gradeChecker();
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
	if (this != &copy)
		AForm::operator=(copy);
	std::cout << " PresidentialPardonForm::operator= called " << std::endl;
	return *this;
}

void PresidentialPardonForm::setTarget(const std::string &target)
{
	_target = target;
}

const std::string PresidentialPardonForm::getTarget() const
{
	return (_target);
}



void PresidentialPardonForm::Executed(const Bureaucrat &executor) const
{
	if (executor.getGrade() > this->getGradeExecution())
		throw AForm::GradeMinimumException();
	if (!this->getSigned())
		throw AForm::UnsignedFormException();
	std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}


// void PresidentialPardonForm::Executed(const Bureaucrat &executor) const
// {
// 	if (executor.getGrade() > this->getGradeExecution())
// 		throw AForm::GradeMinimumException();
// 	if (!this->getSigned())
// 		throw AForm::UnsignedFormException();
// 	std::cout << "drilling, drilling, drilling, ... #$%&((^$!@@#$& and more drilling ..." << std::endl;
// 	if (std::rand() % 2)
// 		std::cout << _target << "has been robotomized successfull!" << std::endl;
// 	else
// 		std::cout << _target << "failed to be robotomized !" << std::endl;
// }