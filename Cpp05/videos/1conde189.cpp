#include <iostream>
#include <string>
#include <cmath>


double miSqrt(double x)
{
	if (x < 0.0)
		throw "No se puede hacer su raiz";
	return std::sqrt(x);
}

int main()
{
	std::cout << "Escribe un numero "  << std::endl;
	double x;
	std::cin >> x;
	try
	{
		double d = miSqrt(x);
		std::cout << "La raiz cuadrada de " << x << " es " << d << std::endl;
	}
	catch (const char * excepction1)
	{
		std::cerr << "excepcion tipo string  " << excepction1 << std::endl;
	}
	return 0;
}