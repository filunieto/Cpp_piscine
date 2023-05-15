/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 22:08:04 by fnieves-          #+#    #+#             */
/*   Updated: 2023/05/15 16:11:49 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUROCRAT_HPP
#define BUROCRAT_HPP

#define MAX_GRADE 1
#define MIN_GRADE 150

#include <iostream>

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;
		void gradeChecker() const;
		
	public:
		Bureaucrat ();
		~Bureaucrat ();
		Bureaucrat (const std::string &name, int grade);
		Bureaucrat (const  Bureaucrat &copy);

		Bureaucrat & operator=(const Bureaucrat &copy);
		const std::string & getName() const;
		int getGrade() const;
		//void setName(const std::string &name);
		void incrementGrade();
		void decrementGrade();
	class GradeMaximumException :public std::exception
	{
		public:
			GradeMaximumException();
			~GradeMaximumException() throw();
			virtual const char* what() const throw();
	};

	class GradeMinimumException :public std::exception
	{
		public:
			GradeMinimumException();
			~GradeMinimumException() throw();
			virtual const char* what() const throw();
	};
};




std::ostream & operator<<(std::ostream &o, const Bureaucrat &rhs);

#endif
