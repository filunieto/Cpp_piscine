/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:59:56 by fnieves-          #+#    #+#             */
/*   Updated: 2023/02/10 21:54:31 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "PhoneBook.hpp"
#include <iostream>
#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact {

public:
	Contact(void);
	~Contact();
	// Contact(std::string _firstName, std::string _lastName, std::string _nickName, 
	// 		std::string _phoneNumber, std::string _darkestSecret);
	void			setFirstName(std::string firstName);
	std::string		getFirstName();

	void			setLastName(std::string LastName);
	std::string		getLastName();
	
private:
	std::string _firstName;
	std::string _LastName;
	std::string _nickName;
	std::string _phoneNumber;
	std::string _darkestSecret;
};



#endif