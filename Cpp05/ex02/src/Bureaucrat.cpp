/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 22:08:11 by fnieves-          #+#    #+#             */
/*   Updated: 2023/06/14 12:35:19 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/Bureaucrat.hpp" 

Bureaucrat::Bureaucrat(): _name("Bureaucrat whoever"), _grade(150)
{
	std::cout << " Constructor default Bureaucrat called " << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade): _name(name), _grade(grade)
{
	std::cout << " Constructor default with parameters Bureaucrat called " << std::endl;
	gradeChecker();
}

Bureaucrat::~Bureaucrat()
{
	std::cout << " Destructor default Bureaucrat called for " << _name << std::endl;
}

/*
Is it problamtic? Try in main. As they are iniziliace , coudl be problematic
	Bureaucrat::Bureaucrat (const  Bureaucrat &copy): _name(copy._name), _grade(copy._name)
Another way:
	this->_name = copy._name;
	this->_grade = copy._grade
Another way:
	*this = copy;
Another way:
	Using the getters in the cases before
*/
Bureaucrat::Bureaucrat (const  Bureaucrat &copy): _name(copy._name), _grade(copy._grade)
{
	std::cout << " Constructor copy Bureaucrat called " << std::endl;
	gradeChecker();
}

/*
Error: 
*/
Bureaucrat & Bureaucrat::operator=(const  Bureaucrat &copy)
{
	std::cout << " operator= Bureaucrat called " << std::endl;
	if (this != &copy)
	{
		// _name.setName(copy.getName()); //We can not assign the name as it is const
		_grade = copy._grade;
	}
	return *this;
}

const std::string & Bureaucrat::getName() const
{
	return (_name);
}

// void Bureaucrat::setName(const std::string &name)
// {
// 	this->_name = name;
// }

int Bureaucrat::getGrade() const
{
	return (_grade);
}

void Bureaucrat::incrementGrade()
{
	if (_grade == MAX_GRADE)
		throw GradeMaximumException();
	_grade--;
}

void Bureaucrat::decrementGrade()
{
	if (_grade == MIN_GRADE)
		throw GradeMinimumException();
	_grade++;
}

std::ostream & operator<<(std::ostream &o, const Bureaucrat &rhs)
{
	o << "From Bureaucrat::operator<<. " << rhs.getName() << ", bureaucrat grade: " << rhs.getGrade();
	return o;
}

void Bureaucrat::gradeChecker() const
{
	if (_grade < MAX_GRADE)
		throw GradeMaximumException();
	if (_grade > MIN_GRADE)
		throw GradeMinimumException();
}

Bureaucrat::GradeMaximumException::GradeMaximumException()
{
	std::cout << " Constructor default Bureaucrat::GradeMaximumException called " << std::endl;
}

Bureaucrat::GradeMaximumException::~GradeMaximumException() throw()
{
	std::cout << " Destructor default Bureaucrat::GradeMaximumException called " << std::endl;
}

const char* Bureaucrat::GradeMaximumException::what() const throw()
{
	return (" Bureaucrat::GradeMaximumException::what() >> grade too high ");
}

Bureaucrat::GradeMinimumException::GradeMinimumException()
{
	std::cout << " Constructor default Bureaucrat::GradeMinimumException called " << std::endl;
}

Bureaucrat::GradeMinimumException::~GradeMinimumException() throw()
{
	std::cout << " Destructor default Bureaucrat::GradeMinimumException called " << std::endl;
}

const char* Bureaucrat::GradeMinimumException::what() const throw()
{
	return (" Bureaucrat::GradeMinimumException::what() >> grade too low ");
}

void Bureaucrat::signForm(AForm &form) const
{
	form.beSigned(*this);
}
