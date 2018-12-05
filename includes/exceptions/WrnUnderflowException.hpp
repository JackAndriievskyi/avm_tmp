// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   WrnUnderflowException.hpp                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/14 08:55:30 by yandriie          #+#    #+#             //
//   Updated: 2018/11/14 08:55:31 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once
#include <exception>
#include <string>

class WrnUnderflowException : std::exception
{
public:

	WrnUnderflowException(size_t, std::string &);
	WrnUnderflowException(const WrnUnderflowException&) = default;
	WrnUnderflowException & operator=(const WrnUnderflowException&) = default;

	~WrnUnderflowException() throw ();

	const char* what() const throw ();


private:

	std::string msg_;


};