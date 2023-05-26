/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 21:18:20 by fnieves-          #+#    #+#             */
/*   Updated: 2023/05/25 21:04:43 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"

AForm::AForm() : _name("default AForm"),_signed(false), _gradeSignature(150),  _gradeExecution(150)
{
	std::cout << " Constructor default AForm called " << std::endl;
}

AForm::AForm(const  std::string &name, int gradeExecution, int gradeSignature ) :
 _name(name), _signed(false) , _gradeSignature(gradeSignature) , _gradeExecution(gradeExecution)
{
	std::cout << " Constructor parameters AForm called " << std::endl;
	gradeChecker();
}

AForm::AForm(const  AForm &copy) :  _name(copy._name) ,  _gradeSignature(copy._gradeSignature) ,_gradeExecution(copy._gradeExecution)
{
	std::cout << " Constructor copy Form called. We only copy signed bool. Other paramet at inizialice " << std::endl;
	_signed = copy._signed;
	*this = copy;
	gradeChecker();
}


AForm::~AForm()
{
	std::cout << " DESstructor default AForm called " << std::endl;
}


AForm & AForm::operator=(const  AForm &copy)
{
	std::cout << " operator= AForm called " << std::endl;
	if (this != &copy)
		_signed = copy._signed;
	return *this;
}

const std::string & AForm::getName() const
{
	return(_name);
}

const char * AForm::isSigned() const
{
	if (_signed)
		return ("Yes");
	else
		return ("No");
}

int AForm::getGradeSignature() const
{
	return(_gradeSignature);
}

bool AForm::getSigned() const
{
	return(_signed);
}


int AForm::getGradeExecution() const
{
	return(_gradeExecution);
}

void AForm::beSigned(const Bureaucrat &Bur)
{
	std::cout << Bur.getName() << " with grade " << Bur.getGrade() << 
	" trying to sign AForm "<< _name << " with grade " << _gradeSignature ;

	if (Bur.getGrade() > _gradeSignature)
	{
		std::cout << " >>> AForm could not be signed. ";
		throw GradeMinimumException();
	}
	std::cout << " >>> AForm succefully signed! "<< std::endl;
	_signed = true;
}

AForm::GradeMaximumException::GradeMaximumException()
{
	std::cout << " Constructor default AForm::GradeMaximumException called " << std::endl;
}

AForm::GradeMaximumException::~GradeMaximumException() throw()
{
	std::cout << " Destructor default AForm::GradeMaximumException called " << std::endl;
}

const char *AForm::GradeMaximumException::what() const throw ()
{
	return (" AForm::GradeMaximumException::what() >> grade too high ");
}

AForm::GradeMinimumException::GradeMinimumException()
{
	std::cout << " Constructor default AForm::GradeMinimumException called " << std::endl;
}

AForm::GradeMinimumException::~GradeMinimumException() throw()
{
	std::cout << " Destructor default AForm::GradeMinimumException called " << std::endl;
}

const char *AForm::GradeMinimumException::what() const throw ()
{
	return (" AForm::GradeMinimumException::what() >> grade too high ");
}

void AForm::gradeChecker() const
{
	if (_gradeSignature < MAX_GRADE)
		throw GradeMaximumException();
	if (_gradeExecution > MIN_GRADE)
		throw GradeMinimumException();
}

std::ostream & operator<<(std::ostream &o , const AForm &copy )
{
	o << copy.getName() << " with gradeSignature " << copy.getGradeSignature() << std::endl; 
	o <<  " with gradeExecution " << copy.getGradeExecution() << std::endl;
	o <<  " Signed? " << copy.isSigned()  << std::endl;
	return o;
}