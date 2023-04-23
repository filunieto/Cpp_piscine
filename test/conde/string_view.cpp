#include <iomanip>
#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	char texto[]{ "cualquier texto." };
	std::string str{ texto };
	std::string otro { str };

	std::cout << texto << ' ' << str << ' ' << otro << '\n';
	return 0; 
}