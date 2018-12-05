// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ModuloArgsException.hpp                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/11/14 08:49:13 by yandriie          #+#    #+#             //
//   Updated: 2018/11/14 08:49:14 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once
#include <exception>
#include <string>

class ModuloArgsException : std::exception
{
public:

	ModuloArgsException(size_t, std::string &);
	ModuloArgsException(const ModuloArgsException&) = default;
	ModuloArgsException & operator=(const ModuloArgsException&) = default;

	~ModuloArgsException() throw ();

	const char* what() const throw ();


private:

	std::string msg_;


};