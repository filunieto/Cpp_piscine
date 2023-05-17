#include <iostream>
class Miembro
{
	public:
		Miembro()
		{
			std::cerr << "Miembro constrcuctor se asigna algunos recursos" << std::endl;
		}
		~Miembro()
		{
			std::cerr << "Miembro destruido" << std::endl;
		}
	private:
};

class A
{
private:
	int m_x{};
	Miembro m_miembro;

public:
	A(int x) : m_x(x)
	{
		if (x <= 0)
			throw 1;
	}

	~A()
	{
		std::cerr << "Class A destruido" << std::endl;
	}
};

int main ()
{
	try
	{
		A a(0);
	}
	catch (int)
	{
		std::cerr << "Excepcion en catch capturada" << std::endl;
	}
	return 0;
}