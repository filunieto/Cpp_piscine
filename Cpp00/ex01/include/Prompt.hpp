/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Prompt.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:59:56 by fnieves-          #+#    #+#             */
/*   Updated: 2023/02/13 20:46:04 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROMPT_HPP
#define PROMPT_HPP
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdio>

#define GREEN "\033[3;32m"
#define BLUE "\033[3;34m"
#define PINK "\033[3;37m"
#define MAGENTA "\033[3;35m"
#define RESET "\033[0m"
#define RED "\033[3;33m"
#define COLORX "\033[3;36m"

void	print_welcome(void);
void	print_promt(void);
void	say_goodbye(void);
void	printHeader(void);
#endif