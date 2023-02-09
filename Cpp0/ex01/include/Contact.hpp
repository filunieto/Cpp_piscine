/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:59:56 by fnieves-          #+#    #+#             */
/*   Updated: 2023/02/09 12:58:48 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact {

public:
	Contact();
	~Contact();
private:
	std::string _firstName;
};

#endif