#include <iostream>
#include <string>

void saludo()
{
	std::cout << "hola invitado\n";
}

void saludo(const std::string & nombre)
{
	std::cout << "hola " << nombre << '\n';
}

int main()
{
	saludo();
	std::string juan ("Juan");
	saludo(juan);
	return (0);
}