#include <iostream>
#include <string>

const std::string & primeroAlfabeto(const std::string &a, const std::string &b)
{
	return (a < b) ? a : b;
}


int main()
{
	std::string primero{ "Primero" };
	std::string segundo{ "Segundo" };

	const std::string recibidoValor {primeroAlfabeto(primero, segundo)};
	const std::string & recibidoReferencia {primeroAlfabeto(primero, segundo)};

	std::cout << recibidoValor<< '\n';
	std::cout << recibidoReferencia<< '\n';

	std::cout << &recibidoReferencia  <<'\n';
	std::cout <<  &recibidoValor <<'\n';
	std::cout << &primero << '\n';
	std::cout << &segundo <<'\n';
	return 0;
}