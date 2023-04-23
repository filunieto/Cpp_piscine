#include <iostream>
#include <fstream>
#include <sstream>

class Aventure {

public:

    Aventure() {
    std::cout << "comence d'une aventure" << std::endl;
  }
  ~Aventure() {
    std::cout << "fin d'une aventure" << std::endl;
  }
  Aventure(Aventure  const &a)
  {
	std::cout << "comence d'une aventure, por copia" << std::endl;
  }


};

int main()

{
  Aventure a1;
  {
    Aventure a2;
    Aventure a3(a2);
  }
  return 0;

}