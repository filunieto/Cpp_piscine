#ifndef CANONICAL_H
#define CANONICAL_H

#include <iostream>

class Canonical
{

public:

	Canonical(void);
	Canonical(int const n);
	Canonical(Canonical const &src);
	~Canonical(void);

	Canonical & operator=( Canonical const & rhs);

	int getFoo (void) const;

private:
	int _n;

};

std::ostream & operator<<( std::ostream & o, Canonical const & rhs);

#endif