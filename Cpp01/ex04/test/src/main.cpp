/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:53:10 by fnieves-          #+#    #+#             */
/*   Updated: 2023/03/01 22:13:17 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

//atencion si s1 y s2 son iguales

void replace(char *fileName, char *s1, char *s2)
{
	std::ifstream fileInput(fileName);
	
	if (!fileInput) // podemos cambiar por if (fileInput.fail())
	{
		std::cerr << "in replace: Error opening " << fileName << std::endl;
		exit (1); // puede ser return?
	}
	if (fileInput)
	
}

int main(int argc, char** argv)
{
	if (argc != 4)
	{
		std::cerr << "Error number of parameters: ./replace <filename> <string1> <string2>" << std::endl;
		return (1);
	}
	replace(argv[1], argv[2], argv[3]);
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
	
