#include <iostream>
#include "Sample.class.hpp"


Sample:: Sample(void){

	std::cout << "Constructor called" << std::endl;
	this->foo = 42;
	std::cout << "this->foo: " << this->foo << std::endl;
	this->bar();
	return;
}

Sample::~Sample(void){
	std::cout << "Destructor called" << std::endl;
	return;
};


Sample2:: Sample2(char p1, float p2, int p3){

	std::cout << "Constructor called" << std::endl;

	this->a1 = p1;
	std::cout << "this->a1: " << this->a1 << std::endl;

	this->a2 = p2;
	std::cout << "this->a2: " << this->a2 << std::endl;

	this->a3 = p3;
	std::cout << "this->a3: " << this->a3 << std::endl;
	
	return;
}

Sample2::~Sample2(void){
	std::cout << "Destructor called" << std::endl;
	return;
};

void Sample::bar(void){

	std::cout << "memeber fucntion bar called" << std::endl;
	return;
};
