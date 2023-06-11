/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 21:18:33 by fnieves-          #+#    #+#             */
/*   Updated: 2023/06/05 09:31:55 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include <fstream>
#include "Bureaucrat.hpp"
#include <cstdlib>

class Bureaucrat;


class AForm
{
	private:
		const std::string _name;
		bool _signed;
		const int _gradeSignature;
		const int _gradeExecution;
	protected:
		void gradeChecker() const;
	public:
		AForm();
		AForm(const  std::string &name, int gradeExecution, int gradeSignature );
		AForm(const  AForm &copy);
		~AForm();
		AForm & operator=(const  AForm &copy);
		const std::string & getName() const;
		const char * isSigned() const;
		int getGradeSignature() const;
		bool getSigned() const;
		int getGradeExecution() const;
		void beSigned(const Bureaucrat &Bur);
		virtual void Executed(const Bureaucrat &executor) const = 0;
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
	class UnsignedFormException: public std::exception
	{
		public:
			// UnsignedFormException();
			// ~UnsignedFormException() throw ();
			virtual const char* what() const throw()
			{
				return ("Form not signed");
			}
	};
};

std::ostream & operator<<(std::ostream &o , const AForm &copy );

#endif