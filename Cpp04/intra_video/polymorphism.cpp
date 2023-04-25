#include <string>
#include <iostream>

class Character
{
	public:
		virtual void sayHello(std::string const &target);
};

class Warrior:  public Character
{
	public:
		virtual void sayHello(std::string const &target);
};

void Character::sayHello(std::string const &target)
{
	std::cout << " hello from character to " << target << std::endl;
}

void Warrior::sayHello(std::string const &target)
{
	std::cout << " fuck you from Warrior to " << target << std::endl;
}

int main()
{
	Warrior *a = new Warrior;
	
	Character *b = new Warrior;

	//Warrior *c = new Character;
	a->sayHello("you");
	b->sayHello(("pare"));
	return 0; 
}
