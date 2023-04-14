#include <string>
#include <iostream>

class Student
{
private:
	std::string _login;
public:
	Student(std::string const & login) : _login(login)
	{

	}
	std::string& getLoginRef()
	{
		return (this->_login);
	}
	std::string const & getLoginRefConst()
	{
		return (this->_login);
	}
	std::string* getLoginPtr()
	{
		return &(this->_login);
	}
	std::string const * getLoginPtrConst() const
	{
		return &(this->_login);
	}
	~Student();
};

// Student::Student(/* args */)
// {
// }

Student::~Student()
{
}

int main ()
{
	Student bob = Student("bfoobar");
	Student jim = Student("jfoobar");

	std::cout << bob.getLoginRefConst() << " " << jim.getLoginRefConst() << std::endl;
	std::cout << bob.getLoginPtrConst() << " " << jim.getLoginPtrConst()  << std::endl;
	std::cout << *(bob.getLoginPtrConst()) << " " << *(jim.getLoginPtrConst())  << std::endl;


	bob.getLoginRef()= "b2foobar";
	std::cout << bob.getLoginRefConst() << std::endl;

	*(bob.getLoginPtr())= "b3foobar";
	std::cout << bob.getLoginRefConst() << std::endl;
}