#include <iostream>

/*
	Referencias: Es un  alias (siempre constante)
	Es un puntero dereferenciado (siempre da el valo de la variable a la que apunta y nunca la adress)
	Es cnstante y tiene que apuntar a a algo (no null)
*/
int main()
{
	int numberOfBalls = 42;
	//int numberOfBalls2 = 100;
	
	int *ballsPtr = &numberOfBalls;
	int &ballsRef = numberOfBalls;

	std::cout << numberOfBalls << " - " << *ballsPtr << " - " << ballsRef << " - " << ballsPtr << " - " << &ballsRef <<std::endl;

	//int &ballsRef = numberOfBalls2;
	*ballsPtr = 21;
	std::cout << numberOfBalls << std::endl;
	ballsRef = 84;
	std::cout << numberOfBalls << std::endl;


	return (0);
}