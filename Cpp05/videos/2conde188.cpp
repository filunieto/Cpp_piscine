#include <iostream>
#include <string>
#include <cmath>

int main()
{
	std::cout << "Escribe un numero "  << std::endl;
	double x;
	std::cin >> x;
	try
	{
		if (x < 0.0)
			throw "No se puede hacer su raiz";
		std::cout << "La raiz cuadrada es " << std::sqrt(x) << std::endl;
	}
	// catch (const std::string& excepction1)
	// {
	// 	std::cerr << "excepcion tipo string  " << excepction1 << std::endl;
	// }
	catch (const char * excepction1)
	{
		std::cerr << "excepcion tipo string  " << excepction1 << std::endl;
	}
	// catch (const std::string)
	// {
	// 	std::cerr << "excepcion tipo string sin parametro " << std::endl;
	// }
	std::cout << "Sigue el programa "  << std::endl;
	return 0;
}