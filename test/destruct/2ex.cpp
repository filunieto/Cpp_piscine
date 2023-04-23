
#include <iostream>
#include <fstream>
#include <sstream>


class Rectangle {
private:
    double h, l;
public:
    Rectangle()
      : h(2.0), l(4.0)
    { 	
	}

    Rectangle(double h1, double l1)
      : h(h1), l(l1)
    {
       h = h * 2.0;
       l = l * 4.0;
    }    
    void display()
	{
		std::cout << h << ", " << l << std::endl;
	}
};

int main()
{
    Rectangle r1;
    Rectangle r2(1.0, 1.0);
    r1.display();
    r2.display();
    return 0;
}