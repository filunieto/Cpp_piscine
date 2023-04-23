#include <iomanip>
#include <iostream>
#include <string>

int main()
{
	std::cout << "elige 1 o 2: ";
	int elegido {};
	std::cin >> elegido;
	std::cout << "Ahora escribe tu nombre: ";
	std::string nombre{};

	//std::getline(std::cin >> std::ws,  nombre);
	std::getline(std::cin ,  nombre);
	std::cout << "Hola, " << nombre << ", has elegido" << elegido << std::endl;
	return 0;
}
