// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZeroDivException.hpp                               :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/14 08:38:21 by yandriie          #+#    #+#             //
//   Updated: 2018/11/14 08:38:22 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once
#include <exception>
#include <string>

class ZeroDivException : std::exception
{
public:

	ZeroDivException(size_t);
	ZeroDivException(const ZeroDivException&) = default;
	ZeroDivException & operator=(const ZeroDivException&) = default;

	~ZeroDivException() throw ();

	const char* what() const throw ();


private:

	std::string msg_;


};