#include <iostream>
#include <string>

int main()
{
	try
	{
		throw 1;
		throw 3.5;
	}
	// catch (1)
	// {
	// 	std::cerr << "excepcion int con valor 1 "  << std::endl;
	// }
	catch (int x)
	{
		std::cerr << "excepcion int con valor " << x << std::endl;
	}
	catch (double x)
	{
		std::cerr << "excepcion tipo double y su valor "  << x << std::endl;
	}
	catch (const std::string&)
	{
		std::cerr << "excepcion tipo string  "  << std::endl;
	}
	std::cout << "Se resuelve la excepcion y el programa continua  "  << std::endl;
	return 0;
}