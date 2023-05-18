/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 00:36:54 by fnieves           #+#    #+#             */
/*   Updated: 2023/05/18 13:19:07 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp" 



Form::Form() : _name("default Form"),_signed(false), _gradeSignature(150),  _gradeExecution(150)
{
	std::cout << " Constructor default Form called " << std::endl;
}

Form::Form(const  std::string &name, int gradeExecution, int gradeSignature ) :
 _name(name), _signed(false) , _gradeSignature(gradeSignature) , _gradeExecution(gradeExecution)
{
	std::cout << " Constructor parameters Form called " << std::endl;
	gradeChecker();
}

Form::Form(const  Form &copy) : _name(copy._name) ,  _gradeSignature(copy._gradeSignature) ,_gradeExecution(copy._gradeExecution)
{
	std::cout << " Constructor copy Form called. We only copy signed bool. Other paramet at inizialice " << std::endl;
	_signed = copy._signed;
	*this = copy;
	gradeChecker();
}

Form::~Form()
{
	std::cout << " DESstructor default Form called " << std::endl;
}



Form & Form::operator=(const  Form &copy)
{
	std::cout << " operator= Form called " << std::endl;
	if (this != &copy)
		_signed = copy._signed;
	return *this;
}

const std::string & Form::getName() const
{
	return(_name);
}

const char * Form::isSigned() const
{
	if (_signed)
		return ("Yes");
	else
		return ("No");
}
// void Form::isSigned() const
// {

// }

int Form::getGradeSignature() const
{
	return(_gradeSignature);
}

int Form::getGradeExecution() const
{
	return(_gradeExecution);
}

void Form::beSigned(const Bureaucrat &Bur)
{
	std::cout << Bur.getName() << " with grade " << Bur.getGrade() << 
	" trying to sign Form "<< _name << " with grade " << _gradeSignature ;

	if (Bur.getGrade() > _gradeSignature)
	{
		std::cout << " >>> Form could not be signed. Error type: ";
		throw GradeMinimumException();
	}
	std::cout << " >>> Form succefully signed! "<< std::endl;
	_signed = true;
}

Form::GradeMaximumException::GradeMaximumException()
{
	std::cout << " Constructor default Form::GradeMaximumException called " << std::endl;
}

Form::GradeMaximumException::~GradeMaximumException() throw()
{
	std::cout << " Destructor default Form::GradeMaximumException called " << std::endl;
}

const char *Form::GradeMaximumException::what() const throw ()
{
	return (" Form::GradeMaximumException::what() >> grade too high ");
}

Form::GradeMinimumException::GradeMinimumException()
{
	std::cout << " Constructor default Form::GradeMinimumException called " << std::endl;

}

Form::GradeMinimumException::~GradeMinimumException() throw()
{
	std::cout << " Destructor default Form::GradeMinimumException called " << std::endl;
}

const char *Form::GradeMinimumException::what() const throw ()
{
	return (" Form::GradeMinimumException::what() >> grade too high ");
}

void Form::gradeChecker() const
{
	if (_gradeSignature < MAX_GRADE)
		throw GradeMaximumException();
	if (_gradeExecution > MIN_GRADE)
		throw GradeMinimumException();
}

std::ostream & operator<<(std::ostream &o , const Form &copy )
{
	o << copy.getName() << " with gradeSignature " << copy.getGradeSignature() << std::endl; 
	o <<  " with gradeExecution " << copy.getGradeExecution() << std::endl;
	o <<  " Signed? " << copy.isSigned()  << std::endl;
	return o;
}