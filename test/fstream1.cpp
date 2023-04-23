#include <iostream>
#include <fstream>

int main()
{
	std::ifstream ifs("prueba");
	unsigned int dst;
	unsigned int dst2;
	ifs >> dst >> dst2;
	std::cout << dst << " " << dst2 << std::endl;
	ifs.close();

	//-----------------
	std::ofstream ofs("test.out");

	ofs << "I like ponies a whole damm lot" << std::endl;

	ofs << "segunda linea" << std::endl;
	ofs.close();

}