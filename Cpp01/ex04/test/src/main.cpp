/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:53:10 by fnieves-          #+#    #+#             */
/*   Updated: 2023/03/03 16:32:48 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

//atencion si s1 y s2 son iguales

/*
	si en el file tenemos  123456789
	s1 = 123
	s2 = 789
	file.replace >>> 789456789
	
	./Sed prueba felipe  123 >>> el file no sufre modificaciones ya que s1 no se encuentra en fileInput

*/

void replace(std::string fileName, std::string s1, std::string s2) //devolver un argumento int en la función
{
	std::ifstream fileInput(fileName);
	
	if (!fileInput) // podemos cambiar por if (fileInput.fail())
	{
		std::cerr << "Error opening file " << fileName << std::endl;
		return ; 
	}
	
	//For the output file
	std::string str_fileOutput =  fileName + ".replace";
	std::ofstream ofs(str_fileOutput);
	if (!ofs)
	{
		std::cerr << "Error opening file " << str_fileOutput << std::endl;
		return ; 
	}	
	/*
	standard library's std::stringstream class reads the contents of a file into a string buffer.

	std::stringstream buffer;: This creates an empty std::stringstream object named buffer.
	A stringstream is an object that can be used like a stream, but it reads from
	and writes to a string buffer in memory rather than to a file on disk.

	buffer << fileInput.rdbuf();: This line reads the contents of a file stream ifs into the
	buffer stringstream using the rdbuf() method of ifs. The rdbuf() 
	method returns a pointer to the streambuf object associated with ifs, 
	which is then read into buffer using the insertion operator <<.

	After this code executes, the contents of the file originally associated with
	ifs will be stored in the std::stringstream object buffer, which can be accessed
	using its str() method to retrieve the contents as a string.
	*/
	std::stringstream buffer;
	buffer << fileInput.rdbuf();
	fileInput.close();

	/*
	Now we extract the string value from the std::stringstream object buffer
	and stores it in a std::string object named str.

	Here's what the line does:
	buffer.str() returns the contents of the std::stringstream object buffer as a 
	std::string. This method extracts the string representation of the underlying 
	buffer and returns it as a string.

	The result of buffer.str() is assigned to the variable str. This means that str 
	will now contain the contents of the std::stringstream object buffer as a string.
	After this line of code executes, now we can work and manipulate with the contents
	of the file that was read into buffer as a regular std::string object named str. 
	we could even output it to another stream or file.
	*/
	std::string str = buffer.str();

	/*
	replace operation on a string str, and then writes the modified string to a file stream ofs.

    	size_t position = str.find(s1);: This line searches the string str for the first 
		occurrence of the substring s1 and assigns the index of its position to the variable position. 
		If s1 is not found, position is assigned the value std::string::npos, which is a constant 
		that represents an invalid or non-existent position in a string.

    	for (position; position != std::string::npos; position = str.find(s1, position + s1.length())): 
		This line starts a loop that iteratively replaces all occurrences of s1 in str with s2. 
		The loop's condition checks that the value of position is not std::string::npos, 
		which means that s1 was found in str. The loop updates position to the index of the 
		next occurrence of s1 in str, if any.

		str.erase(position, s1.length());: This line removes the substring s1 from str starting at 
		the index position and continuing for s1.length() characters.

		str.insert(position, s2);: This line inserts the substring s2 into str starting at the index position.
		ofs << str;: This line writes the modified string str to the file stream ofs.

		After this code executes, the file stream ofs will contain the contents of the original file 
		with all occurrences of s1 replaced by s2. The original string str is also modified in place.
	*/
	size_t position = str.find(s1);
	//std::string::npos;
	
	for (position; position != std::string::npos; position = str.find(s1, position + s1.length()))
	{
		str.erase(position, s1.length());
		str.insert(position, s2);
	}
	ofs << str;
	ofs.close();
}

int main(int argc, char** argv)
{
	if (argc != 4)
	{
		std::cerr << "Error number of parameters: ./replace <filename> <string1> <string2>" << std::endl;
		return (1);
	}
	std::string fileName = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	replace(fileName, s1, s2);
	return (0);
}


// int main()
// {
// 	//ifstream: input file stream
// 	std::ifstream	ifs("../numbers.txt");
// 	unsigned int	dst = 1;
// 	unsigned int	dst2 = 2;
// 	ifs >> dst >> dst2;

// 	std::cout << dst << " " << dst2 << std::endl;
// 	ifs.close();

// 	//ifstream: input file stream
// 	std::ifstream	ifs2("prueba");
// 	ifs2 >> dst >> dst2;

// 	std::cout << dst << " " << dst2 << std::endl;
// 	ifs2.close();

// 	//-------------------------
// 	//ofstream: output file stream
// 	std::ofstream	ofs("test.out");
// 	ofs << "i like ponies a whole damn lot" << std::endl;
// 	ofs.close();
// 	// std:string s1 = "mi mama me mima";
// 	// std:string s2 = "yo amo a mi mama";
// 	return (0);
// }
	
