/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:53:10 by fnieves-          #+#    #+#             */
/*   Updated: 2023/03/08 19:22:42 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

/**
 * @brief 
 * 
 * 	(1) std::stringstream buffer; 
	buffer << fileInput.rdbuf();
	fileInput.close();
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

	std::string str = buffer.str();

*******************************************

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
	
	for (size_t position = str.find(s1); position != std::string::npos; position = str.find(s1, position + s1.length()))
	{
		str.erase(position, s1.length());
		str.insert(position, s2);
	}

 * 
 * @param fileName 
 * @param s1 
 * @param s2 
 */


void replace(std::string fileName, std::string s1, std::string s2)
{
	std::ifstream fileInput(fileName);
	
	if (!fileInput)
	{
		std::cerr << "Error opening file " << fileName << std::endl;
		return ; 
	}
	
	std::string str_fileOutput =  fileName + ".replace";
	std::ofstream ofs(str_fileOutput);
	if (!ofs)
	{
		std::cerr << "Error opening file " << str_fileOutput << std::endl;
		return ; 
	}	
	// These lines, will transfer into the object buffer (stringstream) what it is in file 
	std::stringstream buffer;
	buffer << fileInput.rdbuf();
	fileInput.close();
	// We convert the object buffer into string
	std::string str = buffer.str();

	// replace operation on a string str, and then writes the modified string to a file stream ofs. More info above

	for (size_t position = str.find(s1); position != std::string::npos; position = str.find(s1, position + s1.length()))
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

