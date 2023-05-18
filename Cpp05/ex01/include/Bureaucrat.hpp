/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 22:08:04 by fnieves-          #+#    #+#             */
/*   Updated: 2023/05/18 13:00:40 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUROCRAT_HPP
#define BUROCRAT_HPP

#define MAX_GRADE 1
#define MIN_GRADE 150

#include "Form.hpp" 
#include <iostream>

class Form;

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
		void signForm(Form &form) const;
	class GradeMaximumException :public std::exception
	{
		public:
			GradeMaximumException();
			~GradeMaximumException() throw(); //We are sure no excepction will be thrown during destruction
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

/* 
class GradeMaximumException :public std::exception

1. GradeMaximumException is a class that inherits from std::exception
2. By inheriting from std::exception, we are able to use the what() function
3. The what() function returns a const char* which is the error message.
4. The constructor will be called when we instantiate the class
5. The destructor will be called when the object goes out of scope
6. throw() means that the function will not throw an exception
7. const char* what() const throw() means that the function returns a const char* and will not throw an exception
8. The GradeMaximumException() constructor will be called when we instantiate the class
9. The ~GradeMaximumException() destructor will be called when the object goes out of scope
10. const char* what() const throw() will return the error message */

/*
Rememmber 
La función what() es una función virtual definida en la clase base std::exception de la biblioteca estándar de C++.
 Se utiliza para obtener una descripción de la excepción lanzada.
 
virtual const char* what() const throw(); 

    virtual: Indica que la función what() es una función virtual.
	Esto permite que las clases derivadas sobrescriban esta función si es necesario.

    const char*: Indica que la función devuelve un puntero a una cadena 
	de caracteres (const char*). En este caso, la cadena de caracteres es la 
	descripción de la excepción.

    const: Indica que la función no modifica el estado del objeto al que se llama.
	Es decir, la función no puede modificar los miembros de la clase.

    throw(): Indica que la función no lanzará ninguna excepción adicional. 
	Especificar throw() aquí es consistente con la convención de que la función
	what() de std::exception no debe lanzar excepciones.

En resumen, la función what() en una clase derivada de std::exception se utiliza para obtener
una descripción de la excepción lanzada. Al implementar esta función en una clase
derivada, se proporciona una descripción específica de la excepción que se puede
utilizar para obtener información sobre el error ocurrido.

*/