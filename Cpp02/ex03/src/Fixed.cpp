/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 12:03:38 by fnieves           #+#    #+#             */
/*   Updated: 2023/04/09 17:21:59 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Headers.hpp"

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
	/* Also possible
		this->_pointInt = copy.getRawBits();
		_pointInt = copy.getRawBits();
	*/
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
 * El valor de i se desplaza hacia la izquierda (<<) por el número de bits de fracción _nbBits, lo que significa que se mueve _nbBits bits hacia la izquierda.
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
/*
	Pregunta : Si hace una comparación, quién es This y quién rhs?
	Por qué usa getRawBits?
*/ 


// Comparison operators
bool Fixed::operator>(Fixed const &rhs) const
{
	/*
	also valid?
	return (this->_pointInt > rhs._pointInt);
	*/
	return (this->getRawBits() > rhs.getRawBits());
}

bool Fixed::operator<(Fixed const &rhs) const
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const &rhs) const
{
	return (this->getRawBits() >= rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const &rhs) const
{
	return (this->getRawBits() <= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const &rhs) const
{
	return (this->getRawBits() == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const &rhs) const
{
	return (this->getRawBits() != rhs.getRawBits());
}

// Arithmetic operators

Fixed  Fixed::operator+(Fixed const &rhs) const
{
	return ((Fixed)(this->getRawBits() + rhs.getRawBits()));
	/*
	we could also
		Fixed res;
		res.setRawBits(this->getRawBits() + rhs.getRawBits());
		return (res);
	*/
}

Fixed Fixed::operator-(Fixed const &rhs) const
{
	return ((Fixed)(this->getRawBits() - rhs.getRawBits()));
}

Fixed Fixed::operator*(Fixed const &rhs) const
{
	/*
		float a = this->toFloat();
		float b = rhs.toFloat();
		Fixed res(a *b);
		return (res);
	*/
	return ((Fixed) (this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(Fixed const &rhs) const
{
	return ((Fixed) (this->toFloat() / rhs.toFloat()));
}

// Preincrement, postincrement, predecrement and postdecrement operators

Fixed & Fixed::operator++()
{
	this->_pointInt++;
	return (*this);
}

Fixed & Fixed::operator--()
{
	this->_pointInt--;
	return(*this);
}

Fixed Fixed::operator++(int n)
{
	Fixed	tmp;
	int		raw = this->getRawBits();

	tmp = *this;
	raw = raw + n;
	this->setRawBits(raw);
	return (tmp);
}

Fixed Fixed::operator--(int n)
{
	Fixed	tmp = *this;
	int		raw = tmp.getRawBits();

	raw = raw - n;
	tmp.setRawBits(raw);
	return (tmp);
	
}

// Max and min
Fixed & Fixed::min(Fixed &a, Fixed &b)
{
	if (b < a)
		return (b);
	return (a);
}

Fixed & Fixed::max(Fixed &a, Fixed &b)
{
	if (b < a)
		return (a);
	return (b);
}

Fixed & Fixed::min(Fixed const & a, Fixed const &b)
{
	if (b < a)
		return ((Fixed &)b);
	return ((Fixed &) a);
}

Fixed & Fixed::max(Fixed const &a, Fixed const &b)
{
	if (b < a)
		return ((Fixed &) a);
	return ((Fixed &) b);
}