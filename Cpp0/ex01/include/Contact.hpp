/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:59:56 by fnieves-          #+#    #+#             */
/*   Updated: 2023/02/13 14:07:58 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>

class Contact {

public:
	Contact(void);
	~Contact();
	// Contact(std::string _firstName, std::string _lastName, std::string _nickName, 
	// 		std::string _phoneNumber, std::string _darkestSecret);
	void			setFirstName(std::string firstName);
	std::string		getFirstName();
	std::string 	getshortFirstName(void);

	void			setLastName(std::string LastName);
	std::string		getLastName();
	std::string 	getshortLastName(void);


	void			setnickName(std::string nickName);
	std::string		getnickName();
	std::string 	getshortnickName(void);

	void			setphoneNumber(std::string phoneNumber);
	std::string		getphoneNumber();

	void			setdarkestSecret(std::string darkestSecret);
	std::string		getdarkestSecret();
	
private:
	std::string _firstName;
	std::string _LastName;
	std::string _nickName;
	std::string _phoneNumber;
	std::string _darkestSecret;
};



#endif