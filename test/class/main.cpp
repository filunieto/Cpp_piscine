#include "Sample.class.cpp"
#include <iostream> 
int main(void){
	
	Sample instance;
	std::cout << "primera instance.foo: " << instance.foo << std::endl;
	instance.foo = 2;

	std::cout << "nstance.foo " << instance.foo << std::endl;

	instance.bar();
	return (0);
}
