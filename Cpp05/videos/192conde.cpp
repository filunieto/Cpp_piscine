#include <iostream>
#include <string_view>
#include <string>

class ArrayException
{
private:
	std::string m_error;
public:
	ArrayException(std::string error) : m_error{error}
	{

	}
	~ArrayException()
	{

	}
	const std::string & getError() const { return m_error; }
};

class IntArray
{
private:
	int m_datos[5]{};

public:
	IntArray(/* args */){}
	~IntArray(){}
	int getTamanho() const {return 5;}

	int & operator[](const int indice)
	{
		if (indice < 0 || indice >= getTamanho())
			throw ArrayException {" indice invalido"};
		return m_datos[indice];
	}

};

int main ()
{
	IntArray array;
	try
	{
		int value{ array[7] };
	}
	catch(const ArrayException& e)
	{
		std::cerr << "Se h aproducido una excepcion . Aqui vendria esto >>> e.what() "<< '\n';
	}
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }

	return 0;
}

