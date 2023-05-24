/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 00:36:48 by fnieves           #+#    #+#             */
/*   Updated: 2023/05/23 21:00:00 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp" 

class Bureaucrat;


class Form
{
	private:
		const std::string _name;
		bool _signed;
		const int _gradeSignature;
		const int _gradeExecution;
		void gradeChecker() const;
	public:
		Form();
		Form(const  std::string &name, int gradeExecution, int gradeSignature );
		Form(const  Form &copy);
		~Form();
		Form & operator=(const  Form &copy);
		const std::string & getName() const;
		const char * isSigned() const;
		int getGradeSignature() const;
		int getGradeExecution() const;
		void beSigned(const Bureaucrat &Bur);
	class GradeMaximumException: public std::exception
	{
		public:
			GradeMaximumException();
			~GradeMaximumException() throw();
			virtual const char *what() const throw ();
	};
	class GradeMinimumException: public std::exception
	{
		public:
			GradeMinimumException();
			~GradeMinimumException() throw ();
			virtual const char* what() const throw();
	};
};

std::ostream & operator<<(std::ostream &o , const Form &copy );

#endif
