// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AssertFalseException.hpp                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/14 10:16:44 by yandriie          #+#    #+#             //
//   Updated: 2018/11/14 10:16:45 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once
#include <exception>
#include <string>

class AssertFalseException : std::exception
{
public:

	AssertFalseException(std::string &);
	AssertFalseException(const AssertFalseException&) = default;
	AssertFalseException & operator=(const AssertFalseException&) = default;

	~AssertFalseException() throw ();

	const char* what() const throw ();


private:

	std::string msg_;


};