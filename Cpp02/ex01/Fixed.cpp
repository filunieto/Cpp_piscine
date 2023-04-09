/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 12:03:38 by fnieves           #+#    #+#             */
/*   Updated: 2023/04/09 00:31:57 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _pointInt (0)
{
	std::cout << "default constructor called and initialice to 0" << std::endl;
	// this->_nbBits = 0;
	return;
}

Fixed::~Fixed()
{
	std::cout << "destructor called " << std::endl;
	return;
}

/* 
 Este constructor de copia utiliza el operador de asignación sobrecargado
 para copiar los valores del objeto copy en el objeto actual.
 */
Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor  called " << std::endl;
	*this = copy;
	return ;
}

int Fixed::getRawBits() const
{
	//std::cout << "getRawBits: " << this->_pointInt << std::endl;
	std::cout << "getRawBits: "  << std::endl;
	return (this->_pointInt);
}

void Fixed::setRawBits(int const raw)
{
	//std::cout << "setting raw bits (setRawBits) to: " << raw << std::endl;
	std::cout << "setting raw bits (setRawBits) to: " << std::endl;
	this->_pointInt = raw;
	return;
}

/*
	El operador de asignación establece _pointInt en el
	valor de copy.getRawBits() y devuelve una referencia
	al objeto actual. Permite la concatenación de asignaciones,
	como en a = b = c, donde a, b, y c son todos objetos de tipo Fixed.
	Cómo se devuelve una clase, solo con *this??
*/
Fixed& Fixed::operator=(Fixed const &copy)
{
	std::cout << "operator designation " << std::endl;
	this->_pointInt = copy.getRawBits();
	return *this; //es este valor por referncia para devolver una clase??
}
/**
 * @brief Construct a new Fixed:: Fixed object
 	El valor de i se desplaza hacia la izquierda (<<) por el número de bits de fracción _nbBits,
	lo que significa que se mueve _nbBits bits hacia la izquierda.
	La razón para hacer esto es que _pointInt representa un valor
	de punto fijo que tiene _nbBits bits de fracción, lo que
	significa que los _nbBits bits menos significativos de _pointInt
	representan la parte fraccionaria del valor de punto fijo.
	Por lo tanto, al desplazar i hacia la izquierda por _nbBits bits,
	se mueve la parte entera de i a la izquierda, lo que permite
	que los bits menos significativos de _pointInt se utilicen para
	representar la parte fraccionaria del valor de punto fijo.
 * @param i 
 */
Fixed::Fixed(const int i)
{
	std::cout << "int constructor called and initialice to " << i << std::endl;
	//bitshifting
	this->_pointInt = i << this->_nbBits;
	return ;
}

Fixed::Fixed(const float f)
{
	std::cout << "float constructor called and initialice to " << f << std::endl;
	this->_pointInt = (int)roundf(f * (1 << this->_nbBits));
	return ;
}

int Fixed::toInt() const
{
	return ( this->_pointInt >> this->_nbBits);
}


/**
 * @brief 
 se toma el valor de punto fijo sin procesar (_pointInt)
 del objeto actual y se convierte a float usando un operador
 de conversión estática (cast) de C++ (float).
 Luego, se divide este valor flotante por 1 << _nbBits.
 Esta operación equivale a desplazar un bit 1 hacia la 
 izquierda _nbBits veces, lo que da como resultado un 
 valor de 2^_nbBits.  Esto significa que el valor flotante se
 divide por el valor que representa la parte fraccionaria 
 del valor de punto fijo.
 * @return float 
 */
float Fixed::toFloat() const
{
	return (((float) this->_pointInt ) / (1 << this->_nbBits) );
}

/**
 * @brief 
 	operador de inserción en flujo de salida sobrecargado.
	para la clase Fixed, utiliza la función toFloat()
 *  para obtener el valor flotante de _pointInt. Este valor fl
 * @param ost 
 * @param fixed 
 * @return std::ostream& 
 */
std::ostream  &operator<<(std::ostream &ost,  Fixed const &fixed)
{
	std::cout << " Operator (<<) called with " << &ost << " and " << &fixed << std::endl;
	ost << fixed.toFloat();
	return (ost);
}