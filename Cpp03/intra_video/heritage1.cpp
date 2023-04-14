#include <string>

Class Cat
{
	private:
		int	_numberOfLegs;

	public:
		Cat();
		Cat(const Cat &);
		Cat & operator=(const Cat &);
		~Cat();

		void	run(int distance);
		void	scornSomeone(std::string const & target);

};

class Pony
{
	private:
		int	_numberOfLegs;
	public:
	Pony();
	Pony(Pony const &);
	Pony & operator=(const Pony &);
	~Pony();

	void	run(int distance);
	void	doMagic(std::string const &target);
};
