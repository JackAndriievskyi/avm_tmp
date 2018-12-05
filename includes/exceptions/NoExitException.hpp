// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NoExitException.hpp                                :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/14 08:49:44 by yandriie          #+#    #+#             //
//   Updated: 2018/11/14 08:49:45 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once
#include <exception>
#include <string>

class NoExitException : std::exception
{
public:

	NoExitException(size_t);
	NoExitException(const NoExitException&) = default;
	NoExitException & operator=(const NoExitException&) = default;

	~NoExitException() throw ();

	const char* what() const throw ();


private:

	std::string msg_;


};