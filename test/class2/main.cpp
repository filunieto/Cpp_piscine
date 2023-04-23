#include "Sample.class.hpp"
#include "Sample.class.cpp"


int main()
{
	float pi = 3.14;
	Sample A(pi);
	A.bar();
	A.qd = 15;
	A.bar();
	return (0);
}