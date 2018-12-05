// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AssertException.hpp                                :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/14 08:51:37 by yandriie          #+#    #+#             //
//   Updated: 2018/11/14 08:51:37 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once
#include <exception>
#include <string>

class AssertException : std::exception
{
public:

	AssertException(size_t);
	AssertException(const AssertException&) = default;
	AssertException & operator=(const AssertException&) = default;

	~AssertException() throw ();

	const char* what() const throw ();


private:

	std::string msg_;


};