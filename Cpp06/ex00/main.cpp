/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 13:33:01 by fnieves           #+#    #+#             */
/*   Updated: 2023/06/20 21:22:58 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "include/Character.hpp"

#include <iostream>

int main(int argc, char**argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: ./convert <literal>" << std::endl;
		return 1;
	}
	return 0;
}
