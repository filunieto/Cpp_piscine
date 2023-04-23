#include <iostream>
#include "integer.hpp"

Integer::Integer (int const n) : _n( n )
{
	std::cout << "comstructor called with value " << n <<  std::endl;
	return;
}

Integer::~Integer (void)
{
	std::cout << "destructor called with value " << this->_n <<  std::endl;
	return;
}

int	Integer::getValue (void) const
{
	return this->_n;
}


Integer & Integer::operator=( Integer const & rhs)
{
	std::cout << "Aditional operator called from " << this->_n;
	std::cout << " to " << rhs.getValue() <<  std::endl;
	this->_n = rhs.getValue();
	return *this;
}

Integer  Integer::operator+( Integer const & rhs) const
{
	std::cout << "Aditional operator called with " << this->_n;
	std::cout << "  and " << rhs.getValue() <<  std::endl;
	return Integer(	this->_n + rhs.getValue());
}

std::ostream & operator<<( std::ostream & o, Integer const & rhs)
{
	std::cout << "operador << called" <<  std::endl;
	o << rhs.getValue();
	return o;
}