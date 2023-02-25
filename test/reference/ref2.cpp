/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref2.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 16:07:45 by fnieves           #+#    #+#             */
/*   Updated: 2023/02/25 16:28:11 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>


void	byPtr(std::string* str)
{
	*str = *str + " and ponies";
}

void	byConstPtr(std::string const* str)
{
	std::cout << *str << std::endl;
}

void	byRef(std::string& str)
{
	str = str + " and ponies";
}

void	byConstRef(std::string const &str)
{
	std::cout << str << std::endl;
}

int main()
{
	std::string  str   = "i like butterfiles";
	std::cout << "1 string inicial:" << str << std::endl;
	byPtr(&str);
	byConstPtr(&str);

	str   = "i like otters";
	std::cout << "2 string inicial:" << str << std::endl;
	byRef(str);
	byConstRef(str);
}