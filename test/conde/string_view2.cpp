#include <iomanip>
#include <iostream>
#include <string>
#include <string_view>
#include <algorithm>

int main()
{
	std::string_view str { "Estoy viendo coches" };


	std::cout << str.lenght() << '\n';
	std::cout << str.substr(0, str.find(' ')) << '\n';
	std::cout << (str == "Estoy viendo coches") << '\n';

	// std::string str{ texto };
	// std::string otro { str };

	std::cout << str.starts_with("Sigo") << '\n';
	std::cout << str.ends_with("coches") << '\n';

	std::cout << str '\n';
	return 0; 
}