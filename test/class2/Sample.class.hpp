/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 11:49:35 by fnieves           #+#    #+#             */
/*   Updated: 2023/03/02 11:58:38 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H
#include <iostream>

class Sample
{
public:

	float const pi;
	int qd;

	Sample(float const f);
	~Sample(void);

	// const between ) & ; -> the instance of the class will never be altered
	void bar(void) const;
};

#endif


