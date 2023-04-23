#include <iostream>
#include <string>

void modificar(int *ptr2)
{
	*ptr2 = 6;
	// std::cout << "hola invitado\n";
}



int main()
{
	int x{3};
	int * ptr{&x};

	std::cout << *ptr << '\n';
	modificar(ptr);
	std::cout << *ptr << '\n';
	return 0;
}