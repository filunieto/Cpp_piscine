/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 21:18:30 by fnieves-          #+#    #+#             */
/*   Updated: 2023/06/14 13:45:41 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm()
: AForm("ShrubberyCreationForm", 145, 137), _target("default_ShrubberyCreationForm")
{
	std::cout << " Constructor default ShrubberyCreationForm called " << std::endl;
	gradeChecker();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << " Destructor default ShrubberyCreationForm called " << std::endl;
}

/*
 puedo usar en la inicialización aceso a los atributos "private", sin usar getters ? hcer la prueba en main
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) 
: AForm(copy._name, copy._gradeSignature, copy._gradeExecution ) , _target (copy._target)
*/
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) 
: AForm(copy.getName(), copy.getGradeSignature(), copy.getGradeExecution()) , _target (copy.getTarget())
{
	std::cout << " Constructor copy ShrubberyCreationForm called " << std::endl;
	*this = copy;
	gradeChecker();
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
: AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << " Constructor with target , ShrubberyCreationForm called " << std::endl;
	gradeChecker();
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	if (this != &copy)
		AForm::operator=(copy);
	std::cout << " ShrubberyCreationForm::operator= called " << std::endl;
	return *this;
}

void ShrubberyCreationForm::setTarget(const std::string &target)
{
	_target = target;
}

const std::string ShrubberyCreationForm::getTarget() const
{
	return (_target);
}

void ShrubberyCreationForm::Executed(const Bureaucrat &executor) const
{
	if (executor.getGrade() > this->getGradeExecution())
		throw AForm::GradeMinimumException();
	if (!this->getSigned())
		throw AForm::UnsignedFormException();
	std::ofstream file;
	file.open((_target + "_shrubbery").c_str());
	if (!file.is_open())
	{
		std::cerr << "there was an error with  " << (_target + "_shrubbery") << " . It could not be opned" << std::endl;
		return;
	}
	file << "                               ,@@@@@@@@@,					\n"
			"                       ,,,.   ,@@@@@@/@@@@,				\n"
			"                    ,&%%&%&&%,@@@@@/@@@@@@@@				\n"
			"                   ,%&\\%&&%&&%,@@@\\@@@@@/				\n"
			"                   %&&%&%&/%&&%@@\\@@/   /					\n"
			"                   %&&%/ %&%%&&@@\\ V ///					\n"
			"                   `&%\\ ` /%&'    |.|						\n"
			"                       |o|         | |						\n"
			"                       |.|         | |						\n"
			"                     \\/ ._\\//_/__/  ,,,\\_//__\\\\/		\n";

	file.close();
	std::cout << 
			"Printing for checking >>>>     ,@@@@@@@@@,					\n"
			"                       ,,,.   ,@@@@@@/@@@@,				\n"
			"                    ,&%%&%&&%,@@@@@/@@@@@@@@				\n"
			"                   ,%&\\%&&%&&%,@@@\\@@@@@/				\n"
			"                   %&&%&%&/%&&%@@\\@@/   /					\n"
			"                   %&&%/ %&%%&&@@\\ V ///					\n"
			"                   `&%\\ ` /%&'    |.|						\n"
			"                       |o|         | |						\n"
			"                       |.|         | |						\n"
			"                     \\/ ._\\//_/__/  ,,,\\_//__\\\\/		\n"
	 << std::endl;

}
