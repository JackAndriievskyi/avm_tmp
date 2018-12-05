// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ArithmeticException.hpp                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/14 08:52:52 by yandriie          #+#    #+#             //
//   Updated: 2018/11/14 08:52:53 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once
#include <exception>
#include <string>

class ArithmeticException : std::exception
{
public:

	ArithmeticException(size_t);
	ArithmeticException(const ArithmeticException&) = default;
	ArithmeticException & operator=(const ArithmeticException&) = default;

	~ArithmeticException() throw ();

	const char* what() const throw ();


private:

	std::string msg_;


};