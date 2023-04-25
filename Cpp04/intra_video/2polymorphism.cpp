#include <string>
#include <iostream>

class ACharacter
{
	private:
		std::string  _name;
	protected:

	public:
		virtual void attack(std::string const &target) = 0;
		//void sayHello(std::string const &target);
};


class IcoffeMaker
{
	public:
		virtual void fillWaterTank(IWaterSource *src) = 0;
		virtual ICoffee* makeCoffee(std::string const &copy) = 0;
		//void sayHello(std::string const &target);
};

class Warrior:  public ACharacter
{
	public:
		virtual void attack(std::string const &target);
		void sayHello(std::string const &target);
};

void Warrior::sayHello(std::string const &target)
{
	std::cout << " hello from character to " << target << std::endl;
}

void Warrior::attack(std::string const &target)
{
	std::cout << " attack from Warrior to " << target << " with a sword" << std::endl;
}

int main()
{
	Warrior *a = new Warrior;
	
	//ACharacter *b = new Warrior;

	//Warrior *c = new Character;
	a->sayHello("you");
	//b->attack(("pare"));
	a->attack(("waune"));
	return 0; 
}
