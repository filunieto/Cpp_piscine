/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 18:30:42 by fnieves           #+#    #+#             */
/*   Updated: 2023/02/06 00:34:33 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

void	Megaph(std::string s)
{
	int i = -1;
	while (s[++i])
	{
		s[i] = std::toupper(s[i]);
		std::cout << s[i];
	}
	
}

int main(int argc, char **argv){
	
	std::string s;
	
	if (argc == 1){
		
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}

	else
	{
		for (int i = 1; i < argc; i++)
		{
			s = argv[i];
			Megaph(s);
		}
		std::cout << std::endl;
	}
	return (0);
	
}