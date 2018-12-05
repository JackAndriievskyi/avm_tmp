// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   OverflowException.hpp                              :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/14 08:37:23 by yandriie          #+#    #+#             //
//   Updated: 2018/11/14 08:37:24 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once
#include <exception>
#include <string>

class OverflowException : std::exception
{
public:

	OverflowException(size_t, std::string &);
	OverflowException(const OverflowException&) = default;
	OverflowException & operator=(const OverflowException&) = default;

	~OverflowException() throw ();

	const char* what() const throw ();


private:

	std::string msg_;


};