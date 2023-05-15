/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 22:08:11 by fnieves-          #+#    #+#             */
/*   Updated: 2023/05/15 14:53:02 by fnieves-         ###   ########.fr       */
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
	std::cout << " Destructor default Bureaucrat called " << std::endl;
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
Bureaucrat::Bureaucrat (const  Bureaucrat &copy): _name(copy._name), _grade(copy._name)
{
	std::cout << " Constructor copy Bureaucrat called " << std::endl;
	gradeChecker();
}

Bureaucrat & Bureaucrat::operator=(const  Bureaucrat &copy)
{
	std::cout << " operator= Bureaucrat called " << std::endl;
	if (this == &copy)
		return *this
	_name = copy._name;
	_grade = copy._grade;
	return *this;
}

const std::string & Bureaucrat::getName() const
{
	return (_name);
}

const int Bureaucrat::getGrade() const
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

std::ostream & Bureaucrat::operator<<(std::ostream &o, const Bureaucrat &rhs)
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

GradeMaximumException::GradeMaximumException()
{
	std::cout << " Constructor default GradeMaximumException called " << std::endl;
}

GradeMaximumException::~GradeMaximumException() throw()
{
	std::cout << " Destructor default GradeMaximumException called " << std::endl;
}

virtual const char* Bureaucrat::GradeMaximumException::what() const throw();
{
	return (" GradeMaximumException::what() >> grade too high ")
}


GradeMinimumException::GradeMinimumException()
{
	std::cout << " Constructor default GradeMinimumException called " << std::endl;
}

GradeMinimumException::~GradeMinimumException() throw()
{
	std::cout << " Destructor default GradeMinimumException called " << std::endl;
}

virtual const char* Bureaucrat::GradeMinimumException::what() const throw();
{
	return (" GradeMinimumException::what() >> grade too low ")
}
