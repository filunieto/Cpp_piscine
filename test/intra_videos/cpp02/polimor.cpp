#include <iostream>
#include "polimor.hpp"

Sample::Sample (void)
{
	std::cout << "comstructor called" << std::endl;
	return;
}

Sample::~Sample (void)
{
	std::cout << "deconstructor called" << std::endl;
	return;
}

void	Sample::bar(char const c) const
{
	std::cout << "memeber function called with char overload" << c << std::endl;
	return ;
}

void	Sample::bar(int const c) const
{
	std::cout << "memeber function called with INT overload" << c << std::endl;
	return ;
}

void	Sample::bar(float const c) const
{
	std::cout << "memeber function called with FLOAT overload" << c << std::endl;
	return ;
}

void	Sample::bar(Sample const & c) const
{
	
	std::cout << "memeber function called with SAMPLE overload"  << std::endl;
	return ;
}