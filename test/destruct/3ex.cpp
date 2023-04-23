
#include <iostream>
#include <fstream>
#include <sstream>


class Number {
private:
    int n;
public:
    Number()  : n(0) 
    { 
		std::cout << n; 
		std::cout << " constructor por defecto sin valor : " << std::endl;
	}
    Number( int nn ): n(nn)
    {
		std::cout << n;
		std::cout << " constructor por defecto CON valor : " << n << std::endl;
	}
    Number(Number const& otherNum): n(otherNum.n)
    { 
		std::cout << "constructor de copia, valor n : " << n << std::endl;
	}

    void display() { std::cout << "display" << n << std::endl; }

    void increase() 
	{ 
		n += 1; 
		std::cout << "increase valor n:" << n << std::endl;
	}
};

int  main()
{
    Number a, b(1), c(b); //a= 0, b = 1, c = 1
	std::cout << "En  main empezamos con el increase:" << std::endl;
    b.increase(); // b = 1 + 1 = 2
    c.display(); //2
    b.display(); //2
    return 0;
}


class Number {
private:
    int n;
public:
    Number() : n(0) 
    { std::cout << n; }

    Number( int nn ): n(nn)
    { std::cout << n; }

    Number(Number const& otherNum) : n(otherNum.n+1)
    { std::cout << n; }
	
    void display() { std::cout << n; }
    void increase() { n += 1; }
};

int  main()
{
    Number a, b(1), c(b);
    b.increase();
    c.display();
    b.display();
    return 0;
}