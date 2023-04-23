#include <iostream>

struct Punto
{
	double x { 0.0 };
	double y { 0.0 };
	double z { 0.0 };
};

Punto obtenerPuntoCero()
{
	// Punto temp {};
	// return temp;
	return {};
}

int main ()
{
	Punto cero { obtenerPuntoCero()};
	if (!cero.x &&  !cero.y && !cero.z)
		std::cout << "El punto es cero" << std::endl;
	else
		std::cout << "El punto NO es cero" << std::endl;
	return 0 ;
}