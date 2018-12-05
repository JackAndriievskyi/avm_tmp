// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   UnderflowException.hpp                             :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/14 08:37:37 by yandriie          #+#    #+#             //
//   Updated: 2018/11/14 08:37:38 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once
#include <exception>
#include <string>

class UnderflowException : std::exception
{
public:

	UnderflowException(size_t, std::string &);
	UnderflowException(const UnderflowException&) = default;
	UnderflowException & operator=(const UnderflowException&) = default;

	~UnderflowException() throw ();

	const char* what() const throw ();


private:

	std::string msg_;


};